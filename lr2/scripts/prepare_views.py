from pathlib import Path
import shutil,json
r=Path(__file__).resolve().parents[1];iso=r/'tmp/views';iso.mkdir(parents=True,exist_ok=True)
for n in ['test','variant2','variant2_opt']:shutil.copy2(r/'build'/n/'trace.vcd',iso/f'{n}.vcd')
b='/tb/uut/cpu/'
common=[('Clock','/tb/sys_clk'),('Cycle','/tb/cyc_cnt')]
fetch=[('PC',b+'fetch_block/pc'),('PC_ID',b+'id_block/pc_id'),('Assigned',b+'fetch_block/pc_id_assigned'),('Fetch_done',b+'fetch_block/fetch_complete'),('Instruction',b+'fetch_block/fetch_instruction'),('Decode_PC',b+'id_block/decode/pc'),('Decode_ID',b+'id_block/decode/id'),('Decode_valid',b+'id_block/decode/valid')]
decode=[('Decode_PC',b+'id_block/decode/pc'),('Decode_ID',b+'id_block/decode/id'),('Decode_instruction',b+'id_block/decode/instruction'),('Decode_valid',b+'id_block/decode/valid'),('Advance',b+'id_block/decode_advance'),('Issue_PC',b+'decode_and_issue_block/issue/pc'),('Issue_ID',b+'decode_and_issue_block/issue/id'),('RS1_conflict',b+'decode_and_issue_block/rs1_conflict'),('RS2_conflict',b+'decode_and_issue_block/rs2_conflict'),('LS_request',b+'decode_and_issue_block/unit_issue[1]/new_request')]
alu=[('Issue_PC',b+'decode_and_issue_block/issue/pc'),('Issue_ID',b+'decode_and_issue_block/issue/id'),('ALU_request',b+'decode_and_issue_block/unit_issue[0]/new_request'),('ALU_in1',b+'decode_and_issue_block/alu_inputs/in1'),('ALU_in2',b+'decode_and_issue_block/alu_inputs/in2'),('ALU_result',b+'register_file_and_writeback_block/unit_wb[0]/rd'),('x1','/tb/register_file[1]'),('x31','/tb/register_file[31]')]
views={'task2':('test',common+fetch,33,45),'task3':('test',common+decode,47,63),'task4':('test',common+alu,29,41),'variant2':('variant2',common+fetch[:5]+decode[:2]+alu[:3]+[('RS2_conflict',b+'decode_and_issue_block/rs2_conflict'),('x31','/tb/register_file[31]')],37,53),'variant2_opt':('variant2_opt',common+fetch[:5]+decode[:2]+alu[:3]+[('RS2_conflict',b+'decode_and_issue_block/rs2_conflict'),('x31','/tb/register_file[31]')],37,53),'result':('variant2',common+[('x31','/tb/register_file[31]'),('x20','/tb/register_file[20]'),('x1','/tb/register_file[1]')],25,150)}
for name,(dataset,signals,begin,end) in views.items():
 s='onerror {resume}\ncatch {dataset open '+dataset+'.wlf '+dataset+'}\nview wave\ndelete wave *\n'
 for label,path in signals:
  radix='unsigned' if label=='Cycle' else 'hexadecimal'
  path=path.replace('decode_and_issue_block/unit_issue[0]','alu_unit_block/issue').replace('decode_and_issue_block/unit_issue[1]','load_store_unit_block/issue').replace('register_file_and_writeback_block/unit_wb[0]','alu_unit_block/wb')
  s+=f'add wave -noupdate -label {{{label}}} -radix {radix} {{{dataset}:{path}}}\n'
 s+='configure wave -namecolwidth 180\nconfigure wave -valuecolwidth 100\nconfigure wave -timelineunits us\nconfigure wave -signalnamewidth 1\nconfigure wave -rowmargin 4\nconfigure wave -gridoffset 28000000\nconfigure wave -gridperiod 2000000\nupdate\n'
 s+=f'wave zoom range {begin}us {end}us\n'
 s+=f'puts "LR2 {name}: original Taiga RTL; calculated by Verilator; displayed in ModelSim"\n'
 (iso/f'{name}.do').write_text(s)
 (iso/f'open_{name}.cmd').write_text(f'@echo off\ncd /d C:\\user\\ananyev\\riscv-lab\\evidence\nstart "" Q:\\altera\\13.0sp1\\modelsim_ase\\win32aloem\\vsim.exe -view {dataset}.wlf -do {name}.do\n')
(iso/'views.cmd').write_text('@echo off\nmode COM1: BAUD=115200 PARITY=n DATA=8 STOP=1 >nul\nmkdir C:\\user\\ananyev\\riscv-lab\\evidence\nxcopy D:\\* C:\\user\\ananyev\\riscv-lab\\evidence /e /i /y >nul\ncd /d C:\\user\\ananyev\\riscv-lab\\evidence\nset PATH=Q:\\altera\\13.0sp1\\modelsim_ase\\win32aloem;%PATH%\n>COM1 echo LR2_VCD_IMPORT_BEGIN\nvcd2wlf test.vcd test.wlf > convert-test.log 2>&1\ntype convert-test.log >COM1\nvcd2wlf variant2.vcd variant2.wlf > convert-variant2.log 2>&1\ntype convert-variant2.log >COM1\nvcd2wlf variant2_opt.vcd variant2_opt.wlf > convert-opt.log 2>&1\ntype convert-opt.log >COM1\n>COM1 echo LR2_VCD_IMPORT_END\ncall open_task2.cmd\n')
(r/'evidence/views.json').write_text(json.dumps(views,indent=2)+'\n')
