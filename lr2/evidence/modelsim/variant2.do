onerror {resume}
catch {dataset open variant2_named.wlf variant2_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {variant2_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {variant2_named:/tb/cyc_cnt}
add wave -noupdate -label {PC} -radix hexadecimal {variant2_named:/tb/uut/cpu/fetch_block/pc}
add wave -noupdate -label {PC_ID} -radix hexadecimal {variant2_named:/tb/uut/cpu/id_block/pc_id}
add wave -noupdate -label {Assigned} -radix hexadecimal {variant2_named:/tb/uut/cpu/fetch_block/pc_id_assigned}
add wave -noupdate -label {Fetch_done} -radix hexadecimal {variant2_named:/tb/uut/cpu/fetch_block/fetch_complete}
add wave -noupdate -label {Instruction} -radix hexadecimal {variant2_named:/tb/uut/cpu/fetch_block/fetch_instruction}
add wave -noupdate -label {Decode_PC} -radix hexadecimal {variant2_named:/tb/uut/cpu/id_block/decode/pc}
add wave -noupdate -label {Decode_ID} -radix hexadecimal {variant2_named:/tb/uut/cpu/id_block/decode/id}
add wave -noupdate -label {Issue_PC} -radix hexadecimal {variant2_named:/tb/uut/cpu/decode_and_issue_block/issue/pc}
add wave -noupdate -label {Issue_ID} -radix hexadecimal {variant2_named:/tb/uut/cpu/decode_and_issue_block/issue/id}
add wave -noupdate -label {ALU_request} -radix hexadecimal {variant2_named:/tb/uut/cpu/alu_unit_block/issue/new_request}
add wave -noupdate -label {RS2_conflict} -radix hexadecimal {variant2_named:/tb/uut/cpu/decode_and_issue_block/rs2_conflict}
add wave -noupdate -label {x31} -radix hexadecimal {variant2_named:/tb/register_file_31}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 37us 53us
