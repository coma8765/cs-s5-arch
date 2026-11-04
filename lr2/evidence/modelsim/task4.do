onerror {resume}
catch {dataset open test_named.wlf test_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {test_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {test_named:/tb/cyc_cnt}
add wave -noupdate -label {Issue_PC} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/issue/pc}
add wave -noupdate -label {Issue_ID} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/issue/id}
add wave -noupdate -label {ALU_request} -radix hexadecimal {test_named:/tb/uut/cpu/alu_unit_block/issue/new_request}
add wave -noupdate -label {ALU_in1} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/alu_inputs/in1}
add wave -noupdate -label {ALU_in2} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/alu_inputs/in2}
add wave -noupdate -label {ALU_result} -radix hexadecimal {test_named:/tb/uut/cpu/alu_unit_block/wb/rd}
add wave -noupdate -label {x1} -radix hexadecimal {test_named:/tb/register_file_1}
add wave -noupdate -label {x31} -radix hexadecimal {test_named:/tb/register_file_31}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 29us 41us
