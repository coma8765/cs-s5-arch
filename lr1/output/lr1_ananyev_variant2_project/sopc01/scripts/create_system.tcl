package require -exact qsys 13.0
create_system nios
set_project_property DEVICE_FAMILY "Cyclone IV E"
set_project_property DEVICE EP4CE6E22C8
add_instance clk_0 clock_source
set_instance_parameter_value clk_0 clockFrequency 50000000
set_instance_parameter_value clk_0 clockFrequencyKnown true
add_instance nios2_qsys_0 altera_nios2_qsys
set_instance_parameter_value nios2_qsys_0 impl Tiny
add_instance onchip_memory2_0 altera_avalon_onchip_memory2 13.0.1.99.2
set_instance_parameter_value onchip_memory2_0 memorySize 8196
set_instance_parameter_value onchip_memory2_0 dataWidth 32
add_instance sysid_qsys_0 altera_avalon_sysid_qsys
set_instance_parameter_value sysid_qsys_0 id 0x00075502
add_instance uart_0 altera_avalon_uart 13.0.1.99.2
set_instance_parameter_value uart_0 baud 115200
set_instance_parameter_value uart_0 dataBits 8
set_instance_parameter_value uart_0 stopBits 1
set_instance_parameter_value uart_0 parity NONE
set_instance_parameter_value uart_0 simTrueBaud true
set_instance_parameter_value nios2_qsys_0 resetSlave onchip_memory2_0.s1
set_instance_parameter_value nios2_qsys_0 resetOffset 0
set_instance_parameter_value nios2_qsys_0 exceptionSlave onchip_memory2_0.s1
set_instance_parameter_value nios2_qsys_0 exceptionOffset 32
set_instance_parameter_value nios2_qsys_0 breakSlave nios2_qsys_0.jtag_debug_module
foreach target {nios2_qsys_0.clk onchip_memory2_0.clk1 sysid_qsys_0.clk uart_0.clk} {
 add_connection clk_0.clk $target
}
foreach target {nios2_qsys_0.reset_n onchip_memory2_0.reset1 sysid_qsys_0.reset uart_0.reset} {
 add_connection clk_0.clk_reset $target
 add_connection nios2_qsys_0.jtag_debug_module_reset $target
}
foreach master {nios2_qsys_0.data_master nios2_qsys_0.instruction_master} {
 foreach {slave base} {onchip_memory2_0.s1 0x0000 uart_0.s1 0x5000 sysid_qsys_0.control_slave 0x5020 nios2_qsys_0.jtag_debug_module 0x4000} {
  add_connection $master $slave
  set_connection_parameter_value $master/$slave baseAddress $base
 }
}
add_connection nios2_qsys_0.d_irq uart_0.irq
set_connection_parameter_value nios2_qsys_0.d_irq/uart_0.irq irqNumber 0
add_interface clk clock sink
set_interface_property clk EXPORT_OF clk_0.clk_in
add_interface reset reset sink
set_interface_property reset EXPORT_OF clk_0.clk_in_reset
add_interface uart0 conduit end
set_interface_property uart0 EXPORT_OF uart_0.external_connection
save_system nios.qsys
