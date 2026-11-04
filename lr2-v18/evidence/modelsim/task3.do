onerror {resume}
catch {dataset open test_named.wlf test_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {test_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {test_named:/tb/cyc_cnt}
add wave -noupdate -label {Decode_PC} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode/pc}
add wave -noupdate -label {Decode_ID} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode/id}
add wave -noupdate -label {Decode_instruction} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode/instruction}
add wave -noupdate -label {Decode_valid} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode/valid}
add wave -noupdate -label {Advance} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode_advance}
add wave -noupdate -label {Issue_PC} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/issue/pc}
add wave -noupdate -label {Issue_ID} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/issue/id}
add wave -noupdate -label {RS1_conflict} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/rs1_conflict}
add wave -noupdate -label {RS2_conflict} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/rs2_conflict}
add wave -noupdate -label {ALU_request} -radix hexadecimal {test_named:/tb/uut/cpu/alu_unit_block/issue/new_request}
add wave -noupdate -label {x20} -radix hexadecimal {test_named:/tb/register_file_20}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 115us 127us
