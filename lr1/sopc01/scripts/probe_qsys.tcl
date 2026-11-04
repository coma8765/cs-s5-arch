package require -exact qsys 13.0
create_system probe
set_project_property DEVICE_FAMILY "Cyclone IV E"
set_project_property DEVICE EP4CE6E22C8
foreach {inst type} {
 clk_0 clock_source
 nios2_qsys_0 altera_nios2_qsys
 onchip_memory2_0 altera_avalon_onchip_memory2
 sysid_qsys_0 altera_avalon_sysid_qsys
 uart_0 altera_avalon_uart
} {
 add_instance $inst $type
 puts "INSTANCE=$inst TYPE=$type"
 foreach p [get_instance_parameters $inst] {
  if {[string equal $inst "nios2_qsys_0"]} {continue}
  puts "PARAM $inst $p = [get_instance_parameter_value $inst $p]"
 }
 puts "INTERFACES $inst = [get_instance_interfaces $inst]"
}
save_system probe.qsys
