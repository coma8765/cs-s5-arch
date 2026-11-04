onerror {resume}
catch {dataset open variant18_named.wlf variant18_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {variant18_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {variant18_named:/tb/cyc_cnt}
add wave -noupdate -label {x31} -radix hexadecimal {variant18_named:/tb/register_file_31}
add wave -noupdate -label {x20} -radix hexadecimal {variant18_named:/tb/register_file_20}
add wave -noupdate -label {x1} -radix hexadecimal {variant18_named:/tb/register_file_1}
add wave -noupdate -label {Branch_request} -radix hexadecimal {variant18_named:/tb/uut/cpu/branch_unit_block/issue/new_request}
add wave -noupdate -label {Issue_PC} -radix hexadecimal {variant18_named:/tb/uut/cpu/decode_and_issue_block/issue/pc}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 25us 155us
