create_clock -name clk50 -period 20.000 [get_ports {clk_clk}]
derive_clock_uncertainty
# UART RX and external reset are asynchronous to the 50 MHz oscillator.
set_false_path -from [get_ports {reset_reset_n uart0_rxd}]
set_false_path -to [get_ports {uart0_txd}]
