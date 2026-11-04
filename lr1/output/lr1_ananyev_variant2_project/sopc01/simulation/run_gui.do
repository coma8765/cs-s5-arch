catch {quit -sim}
onerror {echo LAB_SIMULATION_ERROR; pause}
set QSYS_SIMDIR C:/user/sopc01/nios/simulation
set QUARTUS_INSTALL_DIR Q:/altera/13.0sp1/quartus
set TOP_LEVEL_NAME tb_sopc01
source $QSYS_SIMDIR/mentor/msim_setup.tcl
file copy -force C:/user/sopc01/software/hello/mem_init/nios_onchip_memory2_0.hex ./nios_onchip_memory2_0.hex
com
# Qsys 13 omits shared Avalon RTL from its simulation file list.
# Compile the exact interconnect and UART RTL used for synthesis.
foreach f [glob C:/user/sopc01/nios/synthesis/submodules/*.v C:/user/sopc01/nios/synthesis/submodules/*.sv] {
    if {![string match "nios_nios2_qsys_0*" [file tail $f]] && ![string match "nios_onchip_memory2_0*" [file tail $f]]} {
        vlog -sv -work work $f
    }
}
vlog -sv C:/user/sopc01/simulation/tb_sopc01.sv
vsim -onfinish stop -voptargs=+acc -t ps -L work -L work_lib -L onchip_memory2_0 -L nios2_qsys_0 -L altera_ver -L lpm_ver -L sgate_ver -L altera_mf_ver -L altera_lnsim_ver -L cycloneive_ver work.tb_sopc01
view wave
add wave -divider {UART 115200 baud, 8N1}
add wave -label RX sim:/tb_sopc01/uart_rx
add wave -label TX sim:/tb_sopc01/uart_tx
add wave -radix hexadecimal -label decoded_TX sim:/tb_sopc01/receiver/value
add wave -radix unsigned -label received_bytes sim:/tb_sopc01/received
add wave -label reset_n sim:/tb_sopc01/reset_n
configure wave -timelineunits us
run -all
wave zoom full
