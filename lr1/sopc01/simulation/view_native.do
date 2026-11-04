onerror {echo LAB_VIEW_ERROR; pause}
transcript file native-view.log
view wave
add wave -divider {UART 115200 baud, 8N1 - native RTL simulation}
add wave -label RX /tb_sopc01/uart_rx
add wave -label TX /tb_sopc01/uart_tx
add wave -radix hexadecimal -label decoded_TX /tb_sopc01/receiver/value
add wave -radix unsigned -label received_bytes /tb_sopc01/received
add wave -label reset_n /tb_sopc01/reset_n
configure wave -timelineunits us
wave zoom range 5500us 6800us
echo {Engine: Icarus Verilog 13.0, ARM64 macOS; viewer: ModelSim-Altera 10.1d}
set f [open native/verification.txt r]
set report [read $f]
echo $report
close $f

set lines [split $report "\n"]
echo [lindex $lines 6]
echo [lindex $lines 7]
