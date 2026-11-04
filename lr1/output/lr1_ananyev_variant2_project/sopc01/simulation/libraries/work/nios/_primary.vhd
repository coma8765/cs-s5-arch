library verilog;
use verilog.vl_types.all;
entity nios is
    port(
        clk_clk         : in     vl_logic;
        reset_reset_n   : in     vl_logic;
        uart0_rxd       : in     vl_logic;
        uart0_txd       : out    vl_logic
    );
end nios;
