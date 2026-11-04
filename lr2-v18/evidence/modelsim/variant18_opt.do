onerror {resume}
catch {dataset open variant18_opt_named.wlf variant18_opt_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {variant18_opt_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {variant18_opt_named:/tb/cyc_cnt}
add wave -noupdate -label {Decode_PC} -radix hexadecimal {variant18_opt_named:/tb/uut/cpu/id_block/decode/pc}
add wave -noupdate -label {Decode_ID} -radix hexadecimal {variant18_opt_named:/tb/uut/cpu/id_block/decode/id}
add wave -noupdate -label {Issue_PC} -radix hexadecimal {variant18_opt_named:/tb/uut/cpu/decode_and_issue_block/issue/pc}
add wave -noupdate -label {Issue_ID} -radix hexadecimal {variant18_opt_named:/tb/uut/cpu/decode_and_issue_block/issue/id}
add wave -noupdate -label {RS1_conflict} -radix hexadecimal {variant18_opt_named:/tb/uut/cpu/decode_and_issue_block/rs1_conflict}
add wave -noupdate -label {RS2_conflict} -radix hexadecimal {variant18_opt_named:/tb/uut/cpu/decode_and_issue_block/rs2_conflict}
add wave -noupdate -label {ALU_request} -radix hexadecimal {variant18_opt_named:/tb/uut/cpu/alu_unit_block/issue/new_request}
add wave -noupdate -label {x1} -radix hexadecimal {variant18_opt_named:/tb/register_file_1}
add wave -noupdate -label {x31} -radix hexadecimal {variant18_opt_named:/tb/register_file_31}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 43us 59us
