`timescale 1ns/1ps
module tb_sopc01;
    localparam real BIT_NS = 1.0e9 / 115200.0;
    reg clk = 0;
    reg reset_n = 0;
    reg uart_rx = 1;
    wire uart_tx;
    integer received = 0;
    integer trace_file;
    integer expected_count;
    reg [7:0] expected [0:255];
    reg [7:0] echo_bytes [0:4];
    string greeting;
    integer i;

    always #10 clk = ~clk;
    nios dut (.clk_clk(clk), .reset_reset_n(reset_n),
              .uart0_rxd(uart_rx), .uart0_txd(uart_tx));

    task send_byte(input reg [7:0] value);
        integer bit_index;
        begin
            uart_rx = 0;
            #(BIT_NS);
            for (bit_index = 0; bit_index < 8; bit_index = bit_index + 1) begin
                uart_rx = value[bit_index];
                #(BIT_NS);
            end
            uart_rx = 1;
            #(BIT_NS);
        end
    endtask

    initial begin : receiver
        reg [7:0] value;
        integer bit_index;
        wait (reset_n);
        forever begin
            @(negedge uart_tx);
            #(BIT_NS / 2.0);
            if (uart_tx !== 0) $fatal(1, "Invalid UART start bit");
            for (bit_index = 0; bit_index < 8; bit_index = bit_index + 1) begin
                #(BIT_NS);
                value[bit_index] = uart_tx;
            end
            #(BIT_NS);
            if (uart_tx !== 1) $fatal(1, "Invalid UART stop bit");
            $fdisplay(trace_file, "%0t ns TX %02x", $time, value);
            if (received >= expected_count)
                $fatal(1, "Unexpected UART byte %02x", value);
            if (value !== expected[received])
                $fatal(1, "UART mismatch at byte %0d: got %02x expected %02x",
                       received, value, expected[received]);
            received = received + 1;
        end
    end

    initial begin : stimulus
        // The vendor simulation-only UART input generator ignores external RX.
        // Route the top-level pin to the receiver, matching the synthesis-only
        // assign source_rxd = rxd in nios_uart_0_rx_stimulus_source.
        force dut.uart_0.the_nios_uart_0_rx.source_rxd = uart_rx;
        $timeformat(-9, 0, "", 12);
        trace_file = $fopen("uart_trace.log", "w");
        if (!trace_file) $fatal(1, "Cannot create UART trace");
        greeting = "Hello from System on Chip\nSystem ID: 00075502\nSend any character\n";
        echo_bytes[0] = 8'h41;
        echo_bytes[1] = 8'h00;
        echo_bytes[2] = 8'h7f;
        echo_bytes[3] = 8'hff;
        echo_bytes[4] = 8'h0a;
        expected_count = greeting.len() + 5;
        for (i = 0; i < greeting.len(); i = i + 1) expected[i] = greeting[i];
        for (i = 0; i < 5; i = i + 1) expected[greeting.len()+i] = echo_bytes[i];
        #2000;
        reset_n = 1;
        wait (received == greeting.len());
        $display("PASS startup greeting and System ID 00075502");
        #(BIT_NS * 2.0);
        for (i = 0; i < 5; i = i + 1) begin
            $fdisplay(trace_file, "%0t ns RX %02x", $time, echo_bytes[i]);
            send_byte(echo_bytes[i]);
            wait (received == greeting.len() + i + 1);
            #(BIT_NS * 2.0);
        end
        $display("PASS UART echo: 41 00 7f ff 0a");
        $display("LAB_SIMULATION_PASS: %0d output bytes verified", received);
        $fclose(trace_file);
        $finish;
    end

    initial begin
        #100000000;
        $fatal(1, "Simulation timed out: received %0d of %0d bytes", received, expected_count);
    end
endmodule
