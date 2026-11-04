onerror {resume}
catch {dataset open test_named.wlf test_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {test_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {test_named:/tb/cyc_cnt}
add wave -noupdate -label {PC} -radix hexadecimal {test_named:/tb/uut/cpu/fetch_block/pc}
add wave -noupdate -label {PC_ID} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/pc_id}
add wave -noupdate -label {Assigned} -radix hexadecimal {test_named:/tb/uut/cpu/fetch_block/pc_id_assigned}
add wave -noupdate -label {Fetch_done} -radix hexadecimal {test_named:/tb/uut/cpu/fetch_block/fetch_complete}
add wave -noupdate -label {Instruction} -radix hexadecimal {test_named:/tb/uut/cpu/fetch_block/fetch_instruction}
add wave -noupdate -label {Decode_PC} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode/pc}
add wave -noupdate -label {Decode_ID} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode/id}
add wave -noupdate -label {Decode_valid} -radix hexadecimal {test_named:/tb/uut/cpu/id_block/decode/valid}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 33us 45us
