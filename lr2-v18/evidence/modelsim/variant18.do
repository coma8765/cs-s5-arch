onerror {resume}
catch {dataset open variant18_named.wlf variant18_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {variant18_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {variant18_named:/tb/cyc_cnt}
add wave -noupdate -label {PC} -radix hexadecimal {variant18_named:/tb/uut/cpu/fetch_block/pc}
add wave -noupdate -label {PC_ID} -radix hexadecimal {variant18_named:/tb/uut/cpu/id_block/pc_id}
add wave -noupdate -label {Assigned} -radix hexadecimal {variant18_named:/tb/uut/cpu/fetch_block/pc_id_assigned}
add wave -noupdate -label {Fetch_done} -radix hexadecimal {variant18_named:/tb/uut/cpu/fetch_block/fetch_complete}
add wave -noupdate -label {Instruction} -radix hexadecimal {variant18_named:/tb/uut/cpu/fetch_block/fetch_instruction}
add wave -noupdate -label {Decode_PC} -radix hexadecimal {variant18_named:/tb/uut/cpu/id_block/decode/pc}
add wave -noupdate -label {Decode_ID} -radix hexadecimal {variant18_named:/tb/uut/cpu/id_block/decode/id}
add wave -noupdate -label {Decode_valid} -radix hexadecimal {variant18_named:/tb/uut/cpu/id_block/decode/valid}
add wave -noupdate -label {Advance} -radix hexadecimal {variant18_named:/tb/uut/cpu/id_block/decode_advance}
add wave -noupdate -label {LS_request} -radix hexadecimal {variant18_named:/tb/uut/cpu/load_store_unit_block/issue/new_request}
add wave -noupdate -label {WB_done} -radix hexadecimal {variant18_named:/tb/uut/cpu/load_store_unit_block/wb/done}
add wave -noupdate -label {WB_ID} -radix hexadecimal {variant18_named:/tb/uut/cpu/load_store_unit_block/wb/id}
add wave -noupdate -label {WB_value} -radix hexadecimal {variant18_named:/tb/uut/cpu/load_store_unit_block/wb/rd}
add wave -noupdate -label {x2} -radix hexadecimal {variant18_named:/tb/register_file_2}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 37us 55us
