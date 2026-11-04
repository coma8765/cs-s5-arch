onerror {resume}
catch {dataset open variant2_named.wlf variant2_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {variant2_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {variant2_named:/tb/cyc_cnt}
add wave -noupdate -label {x31} -radix hexadecimal {variant2_named:/tb/register_file_31}
add wave -noupdate -label {x20} -radix hexadecimal {variant2_named:/tb/register_file_20}
add wave -noupdate -label {x1} -radix hexadecimal {variant2_named:/tb/register_file_1}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 25us 150us
