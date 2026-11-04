onerror {resume}
catch {dataset open test_named.wlf test_named}
view wave
delete wave *
add wave -noupdate -label {Clock} -radix hexadecimal {test_named:/tb/sys_clk}
add wave -noupdate -label {Cycle} -radix unsigned {test_named:/tb/cyc_cnt}
add wave -noupdate -label {Issue_PC} -radix hexadecimal {test_named:/tb/uut/cpu/decode_and_issue_block/issue/pc}
add wave -noupdate -label {Issue_ID} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/issue/id}
add wave -noupdate -label {LS_request} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/issue/new_request}
add wave -noupdate -label {Base} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/ls_inputs/rs1}
add wave -noupdate -label {Offset} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/ls_inputs/offset}
add wave -noupdate -label {Address} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/shared_inputs/addr}
add wave -noupdate -label {WB_done} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/wb/done}
add wave -noupdate -label {WB_ID} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/wb/id}
add wave -noupdate -label {WB_value} -radix hexadecimal {test_named:/tb/uut/cpu/load_store_unit_block/wb/rd}
add wave -noupdate -label {x2} -radix hexadecimal {test_named:/tb/register_file_2}
configure wave -namecolwidth 180
configure wave -valuecolwidth 100
configure wave -timelineunits us
configure wave -rowmargin 4
update
wave zoom range 99us 113us
