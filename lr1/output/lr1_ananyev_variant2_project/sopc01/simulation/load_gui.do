onerror {echo LAB_SIMULATION_ERROR; pause}
transcript file final-simulation.log
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
