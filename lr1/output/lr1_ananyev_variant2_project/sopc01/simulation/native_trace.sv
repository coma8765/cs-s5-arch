`timescale 1ns/1ps
module native_trace;
    initial begin
        $dumpfile("native_uart.vcd");
        $dumpvars(0, tb_sopc01.uart_rx, tb_sopc01.uart_tx,
                     tb_sopc01.reset_n, tb_sopc01.received,
                     tb_sopc01.receiver.value);
    end
endmodule
