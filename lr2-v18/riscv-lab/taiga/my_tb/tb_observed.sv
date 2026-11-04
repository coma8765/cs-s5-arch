import taiga_config::*;
import taiga_types::*;
import l2_config_and_types::*;

module tb #(parameter HEX_FILE="") ();
   logic sys_clk; 
   logic ext_reset;
   trace_outputs_t tr;
   //assert (LOG2_COMMIT_PORTS==1);
   typedef logic sel_bank_t [32];
   typedef logic [31:0] register_file_t [32];
   sel_bank_t sel_bank [COMMIT_PORTS];
   sel_bank_t sel_bank1;
   register_file_t register_file;

   logic [31:0] cyc_cnt_reg;
   logic [31:0] cyc_cnt;
   
   
   taiga_wrapper #(.HEX_FILE(HEX_FILE)) uut(
        .sys_clk,
        .ext_reset,
	.tr
   );
   assign sel_bank = uut.cpu.register_file_and_writeback_block.regfile_lvt.sel_bank;
   always_comb
     begin
	int i;
	for(i=0; i<32;i++)
	  begin	  
	     sel_bank1[i]     = sel_bank[0][i] ^ sel_bank[1][i];
	     register_file[i] = (sel_bank1[i]==0)?uut.cpu.register_file_and_writeback_block.for2[0].register_file_blocks.register_file[i] : uut.cpu.register_file_and_writeback_block.for2[1].register_file_blocks.register_file[i];
	  end
     end
   
   initial 
     begin
	sys_clk <= 0;
	#1us;
	forever
	  #1us sys_clk <= ! sys_clk;
     end 

   initial 
     begin
	ext_reset <= 1;
	for(int i=0; i< 5; i++)      
	  @(negedge sys_clk);
	ext_reset <= 0;     
     end

   assign cyc_cnt = (uut.cpu.gc_unit_block.gc_fetch_hold | ext_reset) ? 32'hxxxxxxxx : cyc_cnt_reg;
   always @(posedge sys_clk)
     begin
	if(uut.cpu.gc_unit_block.gc_fetch_hold | ext_reset)
	  cyc_cnt_reg <= 1;
	else
	  cyc_cnt_reg <= cyc_cnt_reg + 1;
     end
        

  integer trace_fd;
  initial begin
    trace_fd=$fopen("cycles.csv","w");
    $fdisplay(trace_fd,"cycle,reset,hold,flush,pc,pc_id,pc_assigned,fetch_complete,fetch_instruction,decode_valid,decode_id,decode_pc,decode_instruction,decode_advance,issue_valid,issue_id,issue_pc,issue_instruction,rs1_conflict,rs2_conflict,predicted_pc,use_prediction,branch_complete,branch_flush,x31,x1,x2,x20,alu_new_request,alu_id,ls_new_request,ls_id,branch_new_request,branch_id,wb0_done,wb0_id,wb0_rd,wb1_done,wb1_id,wb1_rd,pc_table0,pc_table1,pc_table2,pc_table3,pc_table4,pc_table5,pc_table6,pc_table7");
    $dumpfile("trace.vcd");
    $dumpvars(0,tb);
    #460us;
    $display("LR2_FINAL_X31=%0d",register_file[31]);
    $fclose(trace_fd);
    $finish;
  end
  always @(negedge sys_clk) begin
    $fdisplay(trace_fd,"%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h",cyc_cnt,ext_reset,uut.cpu.gc_unit_block.gc_fetch_hold,uut.cpu.gc_unit_block.gc_fetch_flush,uut.cpu.fetch_block.pc,uut.cpu.id_block.pc_id,uut.cpu.fetch_block.pc_id_assigned,uut.cpu.fetch_block.fetch_complete,uut.cpu.fetch_block.fetch_instruction,uut.cpu.id_block.decode.valid,uut.cpu.id_block.decode.id,uut.cpu.id_block.decode.pc,uut.cpu.id_block.decode.instruction,uut.cpu.id_block.decode_advance,uut.cpu.decode_and_issue_block.issue.stage_valid,uut.cpu.decode_and_issue_block.issue.id,uut.cpu.decode_and_issue_block.issue.pc,uut.cpu.decode_and_issue_block.issue.instruction,uut.cpu.decode_and_issue_block.rs1_conflict,uut.cpu.decode_and_issue_block.rs2_conflict,uut.cpu.bp.predicted_pc,uut.cpu.bp.use_prediction,uut.cpu.branch_unit_block.branch_complete,uut.cpu.branch_unit_block.branch_flush,register_file[31],register_file[1],register_file[2],register_file[20],uut.cpu.decode_and_issue_block.unit_issue[0].new_request,uut.cpu.decode_and_issue_block.unit_issue[0].id,uut.cpu.decode_and_issue_block.unit_issue[1].new_request,uut.cpu.decode_and_issue_block.unit_issue[1].id,uut.cpu.decode_and_issue_block.unit_issue[2].new_request,uut.cpu.decode_and_issue_block.unit_issue[2].id,uut.cpu.register_file_and_writeback_block.unit_wb[0].done,uut.cpu.register_file_and_writeback_block.unit_wb[0].id,uut.cpu.register_file_and_writeback_block.unit_wb[0].rd,uut.cpu.register_file_and_writeback_block.unit_wb[1].done,uut.cpu.register_file_and_writeback_block.unit_wb[1].id,uut.cpu.register_file_and_writeback_block.unit_wb[1].rd,uut.cpu.id_block.pc_table[0],uut.cpu.id_block.pc_table[1],uut.cpu.id_block.pc_table[2],uut.cpu.id_block.pc_table[3],uut.cpu.id_block.pc_table[4],uut.cpu.id_block.pc_table[5],uut.cpu.id_block.pc_table[6],uut.cpu.id_block.pc_table[7]);
  end

endmodule 
