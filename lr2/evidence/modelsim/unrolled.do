onerror {resume}
catch {dataset open variant2_unrolled_named.wlf variant2_unrolled_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {variant2_unrolled_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {variant2_unrolled_named:/tb/cyc_cnt}
add wave -noupdate -label {Issue_PC} -radix hexadecimal {variant2_unrolled_named:/tb/uut/cpu/decode_and_issue_block/issue/pc}
add wave -noupdate -label {Instruction} -radix hexadecimal {variant2_unrolled_named:/tb/uut/cpu/decode_and_issue_block/issue/instruction}
add wave -noupdate -label {ALU_request} -radix hexadecimal {variant2_unrolled_named:/tb/uut/cpu/alu_unit_block/issue/new_request}
add wave -noupdate -label {LS_request} -radix hexadecimal {variant2_unrolled_named:/tb/uut/cpu/load_store_unit_block/issue/new_request}
add wave -noupdate -label {RS1_conflict} -radix hexadecimal {variant2_unrolled_named:/tb/uut/cpu/decode_and_issue_block/rs1_conflict}
add wave -noupdate -label {RS2_conflict} -radix hexadecimal {variant2_unrolled_named:/tb/uut/cpu/decode_and_issue_block/rs2_conflict}
add wave -noupdate -label {Flush} -radix hexadecimal {variant2_unrolled_named:/tb/uut/cpu/gc_unit_block/gc_fetch_flush}
add wave -noupdate -label {x31} -radix hexadecimal {variant2_unrolled_named:/tb/register_file_31}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 28us 76us
