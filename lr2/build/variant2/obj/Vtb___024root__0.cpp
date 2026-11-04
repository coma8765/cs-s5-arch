// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb___024root___eval_sample(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_sample\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__pc_id_available 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id_available;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__push 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U];
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U];
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U];
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram__data_valid 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram.data_valid;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__valid 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__data_out 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__push 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.push;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__pop 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__push 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.push;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____data_valid 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.data_valid;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__valid 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.valid;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__data_out 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__pop 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.pop;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras__branch_fetched 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.branch_fetched;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras__branch_retired 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.branch_retired;
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U];
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U];
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U];
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U];
    vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____flush 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb___024root___eval_ico(Vtb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_ico\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb___024root___timing_ready(Vtb___024root* vlSelf);
void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb___024root___timing_resume(Vtb___024root* vlSelf);

bool Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 3U) 
                                                         | ((((~ (IData)(vlSelfRef.tb__DOT__sys_clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sys_clk__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb__DOT__sys_clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sys_clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sys_clk__0 
            = vlSelfRef.tb__DOT__sys_clk;
    }
    Vtb___024root___timing_ready(vlSelf);
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_inact(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_inact\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/my_tb/tb_observed.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb___024root___eval_body__nba(Vtb___024root* vlSelf);
void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb___024root___eval_body__nba(vlSelf);
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb___024root___eval_obs(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_obs\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb___024root___eval_react(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_react\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb___024root___eval_postponed(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_postponed\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb__DOT__sys_clk__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                         nullptr, "/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/my_tb/tb_observed.sv", 
                                         39);
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                             nullptr, 
                                             "/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/my_tb/tb_observed.sv", 
                                             41);
        vlSelfRef.__VdlyVal__tb__DOT__sys_clk__v1 = 
            (1U & (~ (IData)(vlSelfRef.tb__DOT__sys_clk)));
        vlSelfRef.__VdlySet__tb__DOT__sys_clk__v1 = 1U;
    }
    co_return;
}

void Vtb___024root____VbeforeTrig_h0ee95ea3__0(Vtb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb__DOT__unnamedblk2__DOT__i;
    tb__DOT__unnamedblk2__DOT__i = 0;
    // Body
    vlSelfRef.__VdlySet__tb__DOT__ext_reset__v0 = 1U;
    tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, tb__DOT__unnamedblk2__DOT__i)) {
        Vtb___024root____VbeforeTrig_h0ee95ea3__0(vlSelf, 
                                                  "@(negedge tb.sys_clk)");
        co_await vlSelfRef.__VtrigSched_h0ee95ea3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb.sys_clk)", 
                                                             "/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/my_tb/tb_observed.sv", 
                                                             48);
        tb__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                        + tb__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.__VdlySet__tb__DOT__ext_reset__v1 = 1U;
    co_return;
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__trace_fd = VL_FOPEN_NN("cycles.csv"s
                                              , "w"s);
    ;
    VL_FWRITEF_NX(vlSelfRef.tb__DOT__trace_fd,"cycle,reset,hold,flush,pc,pc_id,pc_assigned,fetch_complete,fetch_instruction,decode_valid,decode_id,decode_pc,decode_instruction,decode_advance,issue_valid,issue_id,issue_pc,issue_instruction,rs1_conflict,rs2_conflict,predicted_pc,use_prediction,branch_complete,branch_flush,x31,x1,x2,x20,alu_new_request,alu_id,ls_new_request,ls_id,branch_new_request,branch_id,wb0_done,wb0_id,wb0_rd,wb1_done,wb1_id,wb1_rd,pc_table0,pc_table1,pc_table2,pc_table3,pc_table4,pc_table5,pc_table6,pc_table7\n",0);
    vlSymsp->_vm_contextp__->dumpfile("trace.vcd"s);
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0x000000001b6b0b00ULL, 
                                         nullptr, "/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/my_tb/tb_observed.sv", 
                                         68);
    VL_WRITEF_NX("LR2_FINAL_X31=%0d\n",1, '#',32,vlSelfRef.tb__DOT__register_file[31U]);
    VL_FCLOSE_I(vlSelfRef.tb__DOT__trace_fd); VL_FINISH_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/my_tb/tb_observed.sv", 71, "");
    co_return;
}

bool Vtb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<8>/*255:0*/ Vtb__ConstPool__CONST_h9e67c271_0;

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_31;
    __VdfgRegularize_hebeb780c_0_31 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_32;
    __VdfgRegularize_hebeb780c_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_44;
    __VdfgRegularize_hebeb780c_0_44 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_90;
    __VdfgRegularize_hebeb780c_0_90 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_91;
    __VdfgRegularize_hebeb780c_0_91 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_92;
    __VdfgRegularize_hebeb780c_0_92 = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__pc_id;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__pc_id = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__fetch_id;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__fetch_id = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index = 0;
    CData/*1:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr = 0;
    CData/*2:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index = 0;
    CData/*0:0*/ __Vdly__tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0 = 0;
    CData/*4:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0 = 0;
    CData/*4:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0 = 0;
    CData/*2:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0 = 0;
    SData/*11:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0;
    SData/*11:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0;
    SData/*8:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0 = 0;
    CData/*2:0*/ __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0;
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0;
    __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0 = 0;
    SData/*11:0*/ __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0;
    __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1;
    __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1 = 0;
    SData/*11:0*/ __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1;
    __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2;
    __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2 = 0;
    SData/*11:0*/ __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2;
    __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3;
    __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3 = 0;
    SData/*11:0*/ __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3;
    __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__pop)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count) 
                                              >> 3U))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:129: Assertion failed in %m: underflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.load_store_unit_block.lsq_block.oldest_id_fifo.fifo_underflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 129, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__push)) 
                                           | ((~ ((~ 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count)))) 
                                                  & ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count) 
                                                     >> 3U))) 
                                              | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__pop)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:127: Assertion failed in %m: overflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.load_store_unit_block.lsq_block.oldest_id_fifo.fifo_overflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 127, "");
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__rst)))) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras__branch_retired)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count) 
                                              >> 3U))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:129: Assertion failed in %m: underflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.ras_block.read_index_fifo.fifo_underflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 129, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__pop)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__valid))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:129: Assertion failed in %m: underflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.fetch_block.attributes_fifo.fifo_underflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 129, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras__branch_fetched)) 
                                           | ((~ ((~ 
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count)))) 
                                                  & ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count) 
                                                     >> 3U))) 
                                              | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras__branch_retired)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:127: Assertion failed in %m: overflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.ras_block.read_index_fifo.fifo_overflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 127, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__push)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__valid)) 
                                              | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__pop)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:127: Assertion failed in %m: overflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.fetch_block.attributes_fifo.fifo_overflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 127, "");
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb__DOT__ext_reset)))) {
                if (VL_UNLIKELY((((~ (vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
                                      >> 1U)) & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance))))) {
                    VL_WRITEF_NX("[%0t] %%Error: instruction_metadata_and_id_management.sv:390: Assertion failed in %m: Decode advanced without ID\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.id_block.decode_advanced_without_id_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/instruction_metadata_and_id_management.sv", 390, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: load_store_unit.sv:397: Assertion failed in %m: CSR read completed without ls being idle\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.load_store_unit_block.csr_load_conflict_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/load_store_unit.sv", 397, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ ((vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                >> 1U) 
                                               & (~ vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__issue[0U]))) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____flush))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: decode_and_issue.sv:544: Assertion failed in %m: invalid fetch address\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.decode_and_issue_block.invalid_fetch_address_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/decode_and_issue.sv", 544, "");
                }
                if (VL_UNLIKELY((((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__pc_id_available)) 
                                  & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__push))))) {
                    VL_WRITEF_NX("[%0t] %%Error: instruction_metadata_and_id_management.sv:386: Assertion failed in %m: ID assigned without any ID available\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.id_block.pc_id_assigned_without_pc_id_available_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/instruction_metadata_and_id_management.sv", 386, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____data_valid)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__valid) 
                                              & ((0U 
                                                  >= 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__data_out))) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____data_valid) 
                                                        >> 
                                                        (1U 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__data_out)))))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: fetch.sv:225: Assertion failed in %m: Spurious fetch complete detected!\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.fetch_block.spurious_fetch_complete_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/fetch.sv", 225, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram__data_valid)) 
                                           | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__valid))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:129: Assertion failed in %m: underflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.load_store_unit_block.attributes_fifo.fifo_underflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 129, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram__data_valid)) 
                                           | ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__valid) 
                                              & ((0U 
                                                  >= 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__data_out))) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram__data_valid) 
                                                        >> 
                                                        (1U 
                                                         & (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__data_out)))))))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: load_store_unit.sv:393: Assertion failed in %m: Spurious load complete detected!\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.load_store_unit_block.spurious_load_complete_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/load_store_unit.sv", 393, "");
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__push)) 
                                           | ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__valid)) 
                                              | (IData)(vlSelfRef.__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram__data_valid)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: taiga_fifo.sv:127: Assertion failed in %m: overflow\n",3, 'M',vlSymsp->name(),"tb.uut.cpu.load_store_unit_block.attributes_fifo.fifo_overflow_assertion", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/taiga/core/taiga_fifo.sv", 127, "");
                }
            }
        }
    }
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1 = 0U;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2 = 0U;
    __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3 = 0U;
    vlSelfRef.__Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0 = 0U;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0 = 0U;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__fetch_id = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_id;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__pc_id = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1 = 0U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0U;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0 = 0U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0 = 0U;
    __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0 = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__sret 
        = ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
             >> 3U) & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U]) 
           & (8U == (0x0000007fU & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[3U] 
                                     << 1U) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[2U] 
                                               >> 0x0000001fU)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__mret 
        = ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
             >> 3U) & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U]) 
           & (0x18U == (0x0000007fU & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[3U] 
                                        << 1U) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[2U] 
                                                  >> 0x0000001fU)))));
    if ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__update_lvt[1U] 
         & (0U != vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U]))) {
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_data[1U];
        vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U];
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32 = 1U;
    }
    if ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__update_lvt[0U] 
         & (0U != vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U]))) {
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_data[0U];
        vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U];
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32 = 1U;
    }
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__rst) {
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__read_index = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count = 0U;
    } else {
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index 
            = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index) 
                     + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.branch_fetched)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__read_index 
            = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__read_index) 
                     + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.branch_retired)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count 
            = (0x0000000fU & (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count) 
                               + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.branch_retired)) 
                              - (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.branch_fetched)));
    }
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__rst) {
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count = 0U;
        vlSelfRef.__Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index = 0U;
    } else {
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index 
            = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index) 
                     + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.push)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count 
            = (0x0000000fU & (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count) 
                               + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop)) 
                              - (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.push)));
        vlSelfRef.__Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index 
            = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index) 
                     + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop)));
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__init_clear_counter__DOT__counter 
        = ((0x000000feU & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__init_clear_counter__DOT__counter) 
                           << 1U)) | (1U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state));
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.branch_fetched) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index;
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0 = 1U;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__tlb_clear_counter__DOT__counter 
        = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__tlb_clear_counter__DOT__counter 
            << 1U) | ((3U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state) 
                      & (4U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state)));
    if (vlSelfRef.tb__DOT__ext_reset) {
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle = 0ULL;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__minst_ret = 0ULL;
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__pc_id = 0U;
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__fetch_id = 0U;
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__medeleg = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mideleg = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mip = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mie_reg = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__prev_state = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level = 3U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus = 0x00001800U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern_r = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state = 0U;
    } else {
        __Vdly__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way 
            = ((2U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way) 
                      << 1U)) | (1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way) 
                                       >> 1U)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle 
            = (0x00000001ffffffffULL & (1ULL + vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle));
        if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush) {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count = 0U;
            __Vdly__tb__DOT__uut__DOT__cpu__DOT__pc_id 
                = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
            __Vdly__tb__DOT__uut__DOT__cpu__DOT__fetch_id 
                = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
            __Vdly__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id 
                = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
        } else {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count 
                = (0x0000000fU & (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count) 
                                   + (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance)) 
                                  - (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.pop)));
            __Vdly__tb__DOT__uut__DOT__cpu__DOT__pc_id 
                = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id) 
                         + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push)));
            __Vdly__tb__DOT__uut__DOT__cpu__DOT__fetch_id 
                = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_id) 
                         + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.pop)));
            __Vdly__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id 
                = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id) 
                         + (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance)));
        }
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__minst_ret 
            = (0x00000001ffffffffULL & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__minst_ret 
                                        + (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retire_inc))));
        if ((4U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[0U])) {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__medeleg = 0U;
        }
        if ((8U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[0U])) {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mideleg = 0U;
        }
        if ((0x00000010U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[2U])) {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mip 
                = (0x00000888U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr);
        }
        if ((0x00000010U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[0U])) {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mie_reg 
                = (0x00000888U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr);
        } else if ((0x00000010U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__swrite_decoder[0U])) {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mie_reg 
                = (0x00000222U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr);
        }
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__prev_state 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__next_privilege_level;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__genblk1__DOT__mstatus_new;
        if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready) {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern_r 
                = (1U & (~ ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__genblk8__DOT__illegal_op_check__DOT__base_legal) 
                            | ((0x30200073U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]) 
                               | ((0x00000073U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]) 
                                  | (0x00100073U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                     [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]))))));
        }
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state;
    }
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U]]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U];
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[0U]]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[0U];
    if (vlSymsp->TOP__tb__DOT__uut__DOT__data_bram.en) {
        if ((1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__data_bram.be))) {
            __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0 
                = (0x000000ffU & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.transaction_out[0U] 
                                  >> 3U));
            __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0 
                = vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b;
            __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__data_bram.be))) {
            __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1 
                = (0x000000ffU & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.transaction_out[0U] 
                                  >> 0x0000000bU));
            __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1 
                = vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b;
            __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1 = 1U;
        }
        if ((4U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__data_bram.be))) {
            __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2 
                = (0x000000ffU & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.transaction_out[0U] 
                                  >> 0x00000013U));
            __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2 
                = vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b;
            __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2 = 1U;
        }
        if ((8U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__data_bram.be))) {
            __VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3 
                = (0x000000ffU & ((vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.transaction_out[1U] 
                                   << 5U) | (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.transaction_out[0U] 
                                             >> 0x0000001bU)));
            __VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3 
                = vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b;
            __VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3 = 1U;
        }
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch_stall 
        = ((~ (IData)(vlSelfRef.tb__DOT__ext_reset)) 
           & (((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop) 
               & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid) 
                  & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__last_unit) 
                     != (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_select__DOT__one_hot)))) 
              | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch_stall) 
                 & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid))));
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__toggle) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index];
    vlSelfRef.tb__DOT__cyc_cnt_reg = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_hold) 
                                       | (IData)(vlSelfRef.tb__DOT__ext_reset))
                                       ? 1U : ((IData)(1U) 
                                               + vlSelfRef.tb__DOT__cyc_cnt_reg));
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.pop) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetch_instruction;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_id;
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0 = 1U;
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0 
            = (1U & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out) 
                     >> 1U));
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_id;
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0 = 1U;
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0 
            = (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetch_instruction 
                              >> 7U));
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_id;
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0 = 1U;
    }
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr 
        = ((~ (IData)(vlSelfRef.tb__DOT__ext_reset)) 
           & ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr_r) 
                & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                   >> 3U)) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr)) 
              & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr_m__DOT__clr))));
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0 
            = ((0x00000018U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry
                               [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way] 
                               << 3U)) | (((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction) 
                                           << 2U) | 
                                          ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction)
                                            ? (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__one_hot)
                                            : (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way))));
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id;
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0 = 1U;
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id;
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0 = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__stage2_phys_address 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc;
    }
    if ((2U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__tag_update_way))) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__write_data;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0 
            = (0x000001ffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                              >> 2U));
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0 = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram[(0x000001ffU 
                                                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                                                                                >> 2U))] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__write_data;
    }
    if ((1U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__tag_update_way))) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__write_data;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0 
            = (0x000001ffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                              >> 2U));
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0 = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram[(0x000001ffU 
                                                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                                                                                >> 2U))] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__write_data;
    }
    if (((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r) 
           | ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store) 
              & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__.possible_issue))) 
          & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U]) 
         & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_needed) 
            == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U]))) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_data[1U];
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0 = 1U;
    }
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.push) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0 
            = ((IData)(4U) + vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc);
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__new_index;
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0 = 1U;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r 
        = ((~ (IData)(vlSelfRef.tb__DOT__ext_reset)) 
           & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__new_forwarded_store) 
              | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r) 
                 & (~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_done)))));
    if ((2U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__target_update_way))) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0 
            = (0x000001ffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                              >> 2U));
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0 = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram[(0x000001ffU 
                                                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                                                                                >> 2U))] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex;
    }
    if ((1U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__target_update_way))) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0 
            = (0x000001ffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                              >> 2U));
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0 = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram[(0x000001ffU 
                                                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                                                                                >> 2U))] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex;
    }
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U]]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U];
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U]]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U];
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[0U]]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[0U];
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[0U]]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[0U];
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
            | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear) 
               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_100))) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0 
        = ((((~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush)) 
             & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance)) 
            | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear) 
               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_101))) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__toggle_id]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__toggle_id;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear) 
             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[1U]) 
            | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_99)) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear) 
             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[0U]) 
            | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_99)) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id;
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__update_lvt[0U]) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[0U];
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U];
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0 = 1U;
    }
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__update_lvt[1U]) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[1U];
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U];
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1 = 1U;
    }
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
            | ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                >> 1U) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush))) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory
           [(7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                   >> 2U))]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0 
        = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                 >> 2U));
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__.possible_issue) {
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0 
            = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                     >> 2U));
        vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index;
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0 = 1U;
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U])) 
                        << 7U) | (QData)((IData)(((0x00000070U 
                                                   & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                      << 2U)) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
                                                        >> 8U)))))));
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[1U] 
            = ((0xffffff80U & vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[1U]) 
               | (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U])) 
                            << 7U) | (QData)((IData)(
                                                     ((0x00000070U 
                                                       & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                          << 2U)) 
                                                      | (0x0000000fU 
                                                         & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
                                                            >> 8U)))))) 
                          >> 0x00000020U)));
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[1U] 
            = ((0xffff007fU & vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[1U]) 
               | (((0x00000180U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
                                   >> 5U)) | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
                                               << 3U) 
                                              | (7U 
                                                 & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                                     << 2U) 
                                                    | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                       >> 0x0000001eU))))) 
                  << 7U));
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[1U] 
            = ((0x0000ffffU & vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[1U]) 
               | (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address 
                  << 0x00000010U));
        vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[2U] 
            = (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address 
               >> 0x00000010U);
        vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0 
            = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                     >> 2U));
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0 = 1U;
    }
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__toggle) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex;
    __Vdly__tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__ext_reset)) 
                 & (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                     >> 2U) | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r) 
                               & (~ ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                      >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16)))))));
    if ((1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[2U] 
               | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__swrite_decoder[2U]))) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr;
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0 
            = ((0x00000018U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                               << 1U)) | (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                >> 0x0000001aU)));
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
         & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
            >> 5U))) {
        __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0 
            = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                     >> 2U));
        __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0 
            = (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                              >> 8U));
        __VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0 = 1U;
    }
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_complete) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__exception_with_rd_complete) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id;
    __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__exception_with_rd_complete) 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id]);
    __VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_supress_writeback 
        = ((((1U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state) 
             | (2U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state)) 
            | (4U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state))
            ? 1U : 0U);
    if ((0U != (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_id_match))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_reg_sel_r = 0U;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause 
        = (0x8000001fU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause);
    if ((1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[2U] 
                >> 2U) | (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                  >> 0x00000028U))))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause) 
               | ((IData)(((~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                               >> 0x00000028U)) & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr 
                                                   >> 0x0000001fU))) 
                  << 0x0000001fU));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause 
            = ((0xffffffe0U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause) 
               | (0x0000001fU & ((1U & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                                >> 0x00000028U)))
                                  ? (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                             >> 0x00000023U))
                                  : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr)));
    }
    if ((1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[2U] 
                >> 3U) | (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                  >> 0x00000028U))))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtval 
            = ((1U & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                              >> 0x00000028U))) ? (IData)(
                                                          (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                                           >> 3U))
                : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr);
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id_available 
        = (1U & ((IData)(vlSelfRef.tb__DOT__ext_reset) 
                 | ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_101)) 
                    & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_100)))));
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr_m__DOT__clr) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr_r 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__mret) 
                                                 | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__sret));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr_m__DOT__clr;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc_override 
        = ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_flush_required) 
             | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__second_cycle_flush)) 
            | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_exception 
               >> 0x00000028U)) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__br_exception 
                                   >> 0x00000028U));
    vlSelfRef.tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_a 
        = vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram
        [(0x00000fffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc 
                         >> 2U))];
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.new_mem_request) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__read_data 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram
            [(0x000001ffU & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.next_pc 
                             >> 2U))];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__read_data 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram
            [(0x000001ffU & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.next_pc 
                             >> 2U))];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__read_data 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram
            [(0x000001ffU & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.next_pc 
                             >> 2U))];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__read_data 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram
            [(0x000001ffU & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.next_pc 
                             >> 2U))];
    }
    vlSelfRef.tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_b 
        = vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram
        [vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b];
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__new_forwarded_store) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__needed_id_r 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U];
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__csr_id = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__instruction_id;
    vlSelfRef.tb__DOT__tr[0U] = ((0x87ffffffU & vlSelfRef.tb__DOT__tr[0U]) 
                                 | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_operand_stall) 
                                     << 0x0000001eU) 
                                    | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_unit_stall) 
                                        << 0x0000001dU) 
                                       | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_no_instruction_stall) 
                                          << 0x0000001bU))));
    vlSelfRef.tb__DOT__tr[0U] = ((0xf87fffffU & vlSelfRef.tb__DOT__tr[0U]) 
                                 | ((((2U & (((~ ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
                                                  | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_operand_stall) 
                                                     | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_unit_stall) 
                                                        | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_no_instruction_stall))))) 
                                              << 1U) 
                                             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U])) 
                                      | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued)) 
                                     << 0x00000019U) 
                                    | (((0x7ffffffeU 
                                         & (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_operand_stall) 
                                               << 1U))) 
                                        | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_operand_stall) 
                                           & (1U == 
                                              (5U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage))))) 
                                       << 0x00000017U)));
    vlSelfRef.tb__DOT__tr[0U] = ((0xff807fffU & vlSelfRef.tb__DOT__tr[0U]) 
                                 | ((((0x0000000cU 
                                       & ((- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_ls_operand_stall))) 
                                          << 2U)) | 
                                      (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_alu_op) 
                                        << 1U) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_branch_or_jump_op))) 
                                     << 0x00000013U) 
                                    | (((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_load_op) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_store_op) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_mul_op) 
                                          << 1U) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_div_op))) 
                                       << 0x0000000fU)));
    vlSelfRef.tb__DOT__tr[0U] = ((0xffff87ffU & vlSelfRef.tb__DOT__tr[0U]) 
                                 | (((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_misc_op) 
                                       << 3U) | (((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_84)) 
                                                 << 2U)) 
                                     | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_84) 
                                          & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush)) 
                                         << 1U) | (
                                                   (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush)) 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_83)))) 
                                    << 0x0000000bU));
    vlSelfRef.tb__DOT__tr[0U] = ((0xfffff87fU & vlSelfRef.tb__DOT__tr[0U]) 
                                 | ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_83) 
                                        & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush)) 
                                       << 3U) | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_rs1_forwarding_needed) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_rs2_forwarding_needed) 
                                         << 1U) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_rs1_and_rs2_forwarding_needed))) 
                                    << 7U));
    vlSelfRef.tb__DOT__tr[0U] = ((0xffffff80U & vlSelfRef.tb__DOT__tr[0U]) 
                                 | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_num_instructions_completing) 
                                     << 6U) | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_num_instructions_in_flight) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_num_of_instructions_pending_writeback))));
    vlSelfRef.tb__DOT__tr[0U] = ((0x7fffffffU & vlSelfRef.tb__DOT__tr[0U]) 
                                 | ((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                                              << 0x0000003fU) 
                                             | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                                 << 0x0000001fU) 
                                                | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                                   >> 1U)))) 
                                    << 0x0000001fU));
    vlSelfRef.tb__DOT__tr[1U] = (((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                                            << 0x0000003fU) 
                                           | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                               << 0x0000001fU) 
                                              | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                                 >> 1U)))) 
                                  >> 1U) | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                                                       << 0x0000003fU) 
                                                      | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                                          << 0x0000001fU) 
                                                         | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                                            >> 1U))) 
                                                     >> 0x00000020U)) 
                                            << 0x0000001fU));
    vlSelfRef.tb__DOT__tr[2U] = ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                                            << 0x0000003fU) 
                                           | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                               << 0x0000001fU) 
                                              | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                                 >> 1U))) 
                                          >> 0x00000020U)) 
                                 >> 1U);
    if ((1U & (((IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception 
                         >> 0x00000028U)) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[0U] 
                                             >> 3U)) 
               | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                   >> 3U) & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U])))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc 
            = ((1U & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception 
                              >> 0x00000028U))) ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtvec
                : ((8U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[0U])
                    ? ((IData)(4U) + ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[4U] 
                                       << 0x0000001aU) 
                                      | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                         >> 6U))) : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mepc));
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index 
        = __Vdly__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index;
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way 
        = __Vdly__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way;
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs[0U] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id = __Vdly__tb__DOT__uut__DOT__cpu__DOT__pc_id;
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_id 
        = __Vdly__tb__DOT__uut__DOT__cpu__DOT__fetch_id;
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank__v1;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index 
        = __Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory__v0;
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0] 
        = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory__v0;
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram[__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0] 
            = ((0xffffff00U & vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram
                [__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0]) 
               | (IData)(__VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v0));
    }
    if (__VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1) {
        vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram[__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1] 
            = ((0xffff00ffU & vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram
                [__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v1) 
                  << 8U));
    }
    if (__VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2) {
        vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram[__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2] 
            = ((0xff00ffffU & vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram
                [__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3) {
        vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram[__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3] 
            = ((0x00ffffffU & vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram
                [__VdlyDim0__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3]) 
               | ((IData)(__VdlyVal__tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram__v0;
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__new_index;
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.push) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__last_unit 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_select__DOT__one_hot;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_hold 
        = ((1U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state) 
           | (2U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retire_inc 
        = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__toggle) 
                 + ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__toggle) 
                    + ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_complete) 
                       + (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] 
                          + vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U])))));
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index)));
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear 
        = (2U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state);
    vlSelfRef.tb__DOT__sel_bank[0U][0U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][0U];
    vlSelfRef.tb__DOT__sel_bank[0U][1U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][1U];
    vlSelfRef.tb__DOT__sel_bank[0U][2U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][2U];
    vlSelfRef.tb__DOT__sel_bank[0U][3U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][3U];
    vlSelfRef.tb__DOT__sel_bank[0U][4U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][4U];
    vlSelfRef.tb__DOT__sel_bank[0U][5U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][5U];
    vlSelfRef.tb__DOT__sel_bank[0U][6U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][6U];
    vlSelfRef.tb__DOT__sel_bank[0U][7U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][7U];
    vlSelfRef.tb__DOT__sel_bank[0U][8U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][8U];
    vlSelfRef.tb__DOT__sel_bank[0U][9U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][9U];
    vlSelfRef.tb__DOT__sel_bank[0U][10U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][10U];
    vlSelfRef.tb__DOT__sel_bank[0U][11U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][11U];
    vlSelfRef.tb__DOT__sel_bank[0U][12U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][12U];
    vlSelfRef.tb__DOT__sel_bank[0U][13U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][13U];
    vlSelfRef.tb__DOT__sel_bank[0U][14U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][14U];
    vlSelfRef.tb__DOT__sel_bank[0U][15U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][15U];
    vlSelfRef.tb__DOT__sel_bank[0U][16U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][16U];
    vlSelfRef.tb__DOT__sel_bank[0U][17U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][17U];
    vlSelfRef.tb__DOT__sel_bank[0U][18U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][18U];
    vlSelfRef.tb__DOT__sel_bank[0U][19U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][19U];
    vlSelfRef.tb__DOT__sel_bank[0U][20U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][20U];
    vlSelfRef.tb__DOT__sel_bank[0U][21U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][21U];
    vlSelfRef.tb__DOT__sel_bank[0U][22U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][22U];
    vlSelfRef.tb__DOT__sel_bank[0U][23U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][23U];
    vlSelfRef.tb__DOT__sel_bank[0U][24U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][24U];
    vlSelfRef.tb__DOT__sel_bank[0U][25U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][25U];
    vlSelfRef.tb__DOT__sel_bank[0U][26U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][26U];
    vlSelfRef.tb__DOT__sel_bank[0U][27U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][27U];
    vlSelfRef.tb__DOT__sel_bank[0U][28U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][28U];
    vlSelfRef.tb__DOT__sel_bank[0U][29U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][29U];
    vlSelfRef.tb__DOT__sel_bank[0U][30U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][30U];
    vlSelfRef.tb__DOT__sel_bank[0U][31U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][31U];
    vlSelfRef.tb__DOT__sel_bank[1U][0U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][0U];
    vlSelfRef.tb__DOT__sel_bank[1U][1U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][1U];
    vlSelfRef.tb__DOT__sel_bank[1U][2U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][2U];
    vlSelfRef.tb__DOT__sel_bank[1U][3U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][3U];
    vlSelfRef.tb__DOT__sel_bank[1U][4U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][4U];
    vlSelfRef.tb__DOT__sel_bank[1U][5U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][5U];
    vlSelfRef.tb__DOT__sel_bank[1U][6U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][6U];
    vlSelfRef.tb__DOT__sel_bank[1U][7U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][7U];
    vlSelfRef.tb__DOT__sel_bank[1U][8U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][8U];
    vlSelfRef.tb__DOT__sel_bank[1U][9U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][9U];
    vlSelfRef.tb__DOT__sel_bank[1U][10U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][10U];
    vlSelfRef.tb__DOT__sel_bank[1U][11U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][11U];
    vlSelfRef.tb__DOT__sel_bank[1U][12U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][12U];
    vlSelfRef.tb__DOT__sel_bank[1U][13U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][13U];
    vlSelfRef.tb__DOT__sel_bank[1U][14U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][14U];
    vlSelfRef.tb__DOT__sel_bank[1U][15U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][15U];
    vlSelfRef.tb__DOT__sel_bank[1U][16U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][16U];
    vlSelfRef.tb__DOT__sel_bank[1U][17U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][17U];
    vlSelfRef.tb__DOT__sel_bank[1U][18U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][18U];
    vlSelfRef.tb__DOT__sel_bank[1U][19U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][19U];
    vlSelfRef.tb__DOT__sel_bank[1U][20U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][20U];
    vlSelfRef.tb__DOT__sel_bank[1U][21U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][21U];
    vlSelfRef.tb__DOT__sel_bank[1U][22U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][22U];
    vlSelfRef.tb__DOT__sel_bank[1U][23U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][23U];
    vlSelfRef.tb__DOT__sel_bank[1U][24U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][24U];
    vlSelfRef.tb__DOT__sel_bank[1U][25U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][25U];
    vlSelfRef.tb__DOT__sel_bank[1U][26U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][26U];
    vlSelfRef.tb__DOT__sel_bank[1U][27U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][27U];
    vlSelfRef.tb__DOT__sel_bank[1U][28U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][28U];
    vlSelfRef.tb__DOT__sel_bank[1U][29U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][29U];
    vlSelfRef.tb__DOT__sel_bank[1U][30U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][30U];
    vlSelfRef.tb__DOT__sel_bank[1U][31U] = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][31U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__exception_with_rd_complete 
        = (1U & (((IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_exception 
                           >> 0x00000028U)) & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_store_r))) 
                 | ((IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__br_exception 
                             >> 0x00000028U)) & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_exception_is_jump))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_94 = ((1U 
                                                  == (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level)) 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                    >> 1U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_93 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__sret)
                                                  ? 
                                                 (0x00000010U 
                                                  | ((0x0000ff00U 
                                                      & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                         >> 1U)) 
                                                     | ((0x00000060U 
                                                         & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                            >> 1U)) 
                                                        | ((0x0000000eU 
                                                            & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                               >> 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                                 >> 5U))))))
                                                  : 
                                                 ((0x0001fffcU 
                                                   & (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__mret)
                                                        ? 
                                                       (0x00000310U 
                                                        | ((0x00007c00U 
                                                            & (((3U 
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                                     >> 0x0000000bU)))
                                                                 ? 
                                                                (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                                 >> 0x0000000dU)
                                                                 : 
                                                                (0x0000000fU 
                                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                                    >> 0x0000000dU))) 
                                                               << 0x0000000aU)) 
                                                           | ((0x000000e0U 
                                                               & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                                  >> 3U)) 
                                                              | ((0x0000000eU 
                                                                  & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                                     >> 3U)) 
                                                                 | (1U 
                                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                                       >> 7U))))))
                                                        : 
                                                       (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                        >> 3U)) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                        >> 1U))));
    if ((1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
               | (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r))))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_call 
            = (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U] 
                     >> 0x00000016U));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_return 
            = (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U] 
                     >> 0x00000015U));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jal_jalr_ex 
            = (IData)((0U != (0x01800000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U])));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = ((4U 
                                                  & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jal_jalr_ex)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_return) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_call)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__unit_data_array[0U] 
        = vlSelfRef.tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_a;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__read_data;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__read_data;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_data_array[0U] 
        = vlSelfRef.tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_b;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__predicted_pc[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__read_data;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__predicted_pc[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__read_data;
    if ((8U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__instruction_id 
            = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                     >> 2U));
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtvec 
        = (0xfffffffcU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtvec);
    if ((0x00000020U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[0U])) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtvec 
            = ((3U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtvec) 
               | (0xfffffffcU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr));
    }
    if ((((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
           >> 1U) & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready) 
                     >> 3U)) & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_issue_hold)))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[0U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[1U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[1U];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[2U];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[3U];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[4U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[4U];
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mepc 
        = (0xfffffffcU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mepc);
    if ((1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[2U] 
                >> 1U) | (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                  >> 0x00000028U))))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mepc 
            = ((3U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mepc) 
               | (((1U & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                  >> 0x00000028U)))
                    ? (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table
                       [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id] 
                       >> 2U) : (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr 
                                 >> 2U)) << 2U));
    }
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_complete 
        = (1U & ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                   >> 3U) & (IData)((0U != (0x00000019U 
                                            & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U])))) 
                 | (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception 
                            >> 0x00000028U))));
    if ((1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
               | (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r))))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex 
            = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                     >> 2U));
    }
    __VdfgRegularize_hebeb780c_0_44 = (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table
                                             [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex] 
                                             >> 3U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_43 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex] 
                                                    >> 4U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex] 
                                                    >> 2U));
    __VdfgRegularize_hebeb780c_0_92 = (1U & ((0U != 
                                              (0xe0000000U 
                                               & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])) 
                                             | ((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                     >> 0x0000001aU))) 
                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                   >> 0x0000001cU))));
    VL_ASSIGN_W(256, vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__swrite_decoder, Vtb__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__swrite_decoder[(7U 
                                                                                & ((0x07fffffeU 
                                                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                                                << 1U)) 
                                                                                | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                                >> 0x0000001fU)))] 
        = (((~ ((IData)(1U) << (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                               >> 0x0000001aU)))) 
            & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__swrite_decoder
            [(7U & ((0x07fffffeU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                    << 1U)) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                               >> 0x0000001fU)))]) 
           | ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r) 
                & (4U == (0x0000000cU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U]))) 
               & (3U != (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                               >> 4U)))) << (0x0000001fU 
                                             & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                >> 0x0000001aU))));
    __VdfgRegularize_hebeb780c_0_90 = (1U & ((- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                             >> 0x0000001aU))))) 
                                             & (IData)(
                                                       (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__minst_ret 
                                                        >> 0x00000020U))));
    __VdfgRegularize_hebeb780c_0_91 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__minst_ret) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                         >> 0x0000001aU))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = ((0x00100000U 
                                                  & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                  ? 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                     >> 0x00000015U))
                                                  : 
                                                 ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[1U] 
                                                     >> 6U)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__machine_write 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r) 
            & (0x0000000cU == (0x0000000cU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U]))) 
           & (3U != (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                           >> 4U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_issue_hold 
        = (IData)(((((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                       >> 3U) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__second_cycle_flush)) 
                     | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr)) 
                    | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__potential_branch_exception)) 
                   | ((((1U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state) 
                        | (2U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state)) 
                       | (4U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state)) 
                      | (5U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id 
        = (7U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16)
                  ? (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jmp_id)
                  : ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                      << 0x0000001eU) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                         >> 2U))));
    if ((1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing) 
               | (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r))))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
            = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[1U] 
                << 5U) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U] 
                          >> 0x0000001bU));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex 
            = ((1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex) 
               | (0xfffffffeU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex) 
               | (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc 
                        & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U] 
                              >> 0x00000017U)))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_exception_is_jump 
            = (IData)((0U != (0x01800000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U])));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jmp_id 
            = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                     >> 2U));
    }
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__potential_flush 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op) 
               | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ifence));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ifence_r 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ifence;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_load_r 
            = ((0x0bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               | (0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ebreak 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op) 
               & (0x00400000U == (0x00c00000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U])));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ret 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op) 
               & (0x00800000U == (0x00c00000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U])));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ecall 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op) 
               & (0U == (0x00c00000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U])));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_fence 
            = ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ls_offset 
            = (0x00000fffU & ((0x00000020U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9))
                               ? ((0x00000fe0U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
                                                   << 0x0000000aU) 
                                                  | (0x000003e0U 
                                                     & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
                                                        >> 0x00000016U)))) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
                                      >> 9U))) : ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
                                                   << 0x0000000aU) 
                                                  | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
                                                     >> 0x00000016U))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_call 
            = (((0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                | (0x19U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
               & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_link));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_return 
            = ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               & (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_link) 
                   & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_link))) 
                  | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_link) 
                      & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_link)) 
                     & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14) 
                        != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15)))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs2_use_regfile 
            = (1U & (~ (((((0x0dU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                           | (5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                          | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                         | (0x19U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                        | (4U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_slt_path 
            = ((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                   >> 2U)) & ((2U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) 
                              | (3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_lshift 
            = (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                        >> 2U)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_shifter_path 
            = (1U & (~ ((((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                              >> 2U) | (2U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) 
                            | (3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) 
                           | (4U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) 
                          | (6U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) 
                         | (7U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) 
                        | (0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_alu_rs2_r 
            = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53)
                ? (0xfffff000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id])
                : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)
                    ? 4U : VL_EXTENDS_II(32,12, (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r 
            = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62)
                ? 3U : (3U & (0x9cffU >> ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                                          << 1U))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pc_offset_r 
            = (0x001fffffU & (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60)) 
                               & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_62))
                               ? VL_EXTENDS_II(21,12, (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_35))
                               : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_60)
                                   ? ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61) 
                                        << 0x00000014U) 
                                       | (((0x000001feU 
                                            & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                               [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                               >> 0x0000000bU)) 
                                           | (1U & 
                                              (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                               [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                               >> 0x00000014U))) 
                                          << 0x0000000bU)) 
                                      | (0x000007feU 
                                         & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                            [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                            >> 0x00000014U)))
                                   : VL_EXTENDS_II(21,13, 
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_61) 
                                                      << 0x0000000cU) 
                                                     | (0x00000800U 
                                                        & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                           << 4U))) 
                                                    | ((0x000007e0U 
                                                        & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                           >> 0x00000014U)) 
                                                       | (0x0000001eU 
                                                          & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                             [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                             >> 7U))))))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_use_regfile 
            = (1U & (~ ((((0x0dU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                          | (5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                         | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                        | (0x19U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_alu_rs1_r 
            = ((((5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                 | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                | (0x19U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                ? ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U] 
                    << 0x0000001eU) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
                                       >> 2U)) : 0U);
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_subtract 
            = ((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                   >> 2U)) & (((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) 
                               | (2U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4))) 
                              | ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) 
                                 & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                     [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                     >> 5U) & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                               [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                               >> 0x0000001eU)))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed 
            = (1U & (~ ((6U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)) 
                        | (7U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr_r 
            = ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               & (0U != (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_misc_op 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
               & (~ ((((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_alu_op) 
                         | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_branch_or_jump_op)) 
                        | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_load_op)) 
                       | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_store_op)) 
                      | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_mul_op)) 
                     | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_div_op))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_alu_op 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
               & ((((((0x0cU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                      | (4U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                     | (5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                    | (0x0dU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                   & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_mul_op))) 
                  & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_div_op))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_store_r 
            = (8U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_branch_or_jump_op 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
               & (((0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                   | (0x19U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                  | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_load_op 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
               & ((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                  | (0x0bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_store_op 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
               & (8U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_mul_op 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
               & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                  >> 1U));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__tr_div_op 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued) 
               & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                  >> 1U));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage 
            = (((((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                  | (3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                 << 3U) | (((0x18U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                            | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)) 
                           << 2U)) | ((((0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                        | ((8U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                           | (0x0bU 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) 
                                       << 1U) | ((5U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 | ((0x0dU 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                    | (((~ 
                                                         (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                          >> 0x00000019U)) 
                                                        & (0x0cU 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))) 
                                                       | ((4U 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_30)))))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
            = ((1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U])) 
                            << 0x0000003eU) | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U])) 
                                                << 0x0000001eU) 
                                               | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U])) 
                                                  >> 2U)))) 
                  << 1U));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U])) 
                          << 0x0000003eU) | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U])) 
                                              << 0x0000001eU) 
                                             | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U])) 
                                                >> 2U)))) 
                >> 0x0000001fU) | ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U])) 
                                              << 0x0000003eU) 
                                             | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U])) 
                                                 << 0x0000001eU) 
                                                | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U])) 
                                                   >> 2U))) 
                                            >> 0x00000020U)) 
                                   << 1U));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U])) 
                          << 0x0000003eU) | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U])) 
                                              << 0x0000001eU) 
                                             | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U])) 
                                                >> 2U))) 
                        >> 0x00000020U)) >> 0x0000001fU);
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U]) 
               | (1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U]));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
            = ((0xff8000ffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U]) 
               | (((0x00007c00U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                   >> 0x0000000aU)) 
                   | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15) 
                       << 5U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14))) 
                  << 8U));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
            = ((0x007fffffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U]) 
               | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                   << 0x0000001eU) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                      << 0x00000017U)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U]) 
               | ((0x007fffffU & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4) 
                                  >> 2U)) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_9) 
                                             >> 9U)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
            = ((0xffffff03U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U]) 
               | (((0x00000020U & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                       | ((0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                          | ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                             | (((0x1cU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                    >> 0x0000000eU)) 
                                                | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op)))))) 
                                   << 5U)) | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                | ((0x0cU 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                   | (0x0bU 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                       | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op) 
                                                          | (3U 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U] 
                                                       >> 2U))))) 
                  << 2U));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_96 = (3U 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43)
                                                      ? 
                                                     ((IData)(__VdfgRegularize_hebeb780c_0_44)
                                                       ? 
                                                      (2U 
                                                       | (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex))))
                                                       : 
                                                      (1U 
                                                       | (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex)))))
                                                      : 
                                                     ((IData)(__VdfgRegularize_hebeb780c_0_44)
                                                       ? 
                                                      (2U 
                                                       & (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex))))
                                                       : 
                                                      (1U 
                                                       & (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex))))))
                                                     : 
                                                    (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex)))));
    if ((0x00000020U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])) {
        if ((0x00000010U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])) {
            if ((8U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])) {
                vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__invalid_addr 
                    = (1U & (1U & (((0x40000000U != 
                                     (0xe0000000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])) 
                                    | (4U != (7U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U]))) 
                                   | ((0x10000000U 
                                       & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                       ? (0U != (3U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                    >> 0x0000001aU)))
                                       : (IData)((0U 
                                                  == 
                                                  (0x0c000000U 
                                                   & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])))))));
                vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr = 0U;
            } else {
                vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__invalid_addr 
                    = (1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                              >> 2U) | ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                         >> 0x0000001cU) 
                                        | ((0U != (0x0000000fU 
                                                   & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                       << 3U) 
                                                      | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                         >> 0x0000001dU)))) 
                                           | (3U == 
                                              (3U & 
                                               (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                >> 0x0000001aU)))))));
                vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr 
                    = (((2U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])
                         ? ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                 >> 0x0000001dU))))) 
                            & ((- (IData)((1U & (~ 
                                                 (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                  >> 0x0000001fU))))) 
                               & ((- (IData)((1U & 
                                              (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                  >> 0x0000001eU))))) 
                                  & ((- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                     >> 0x0000001cU))))) 
                                     & (((0x08000000U 
                                          & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                          ? __VdfgRegularize_hebeb780c_0_90
                                          : (1U & (IData)(
                                                          (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle 
                                                           >> 0x00000020U)))) 
                                        & (- (IData)(
                                                     (1U 
                                                      & (~ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])))))))))
                         : ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                 >> 0x0000001fU))))) 
                            & ((- (IData)((1U & (~ 
                                                 (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                  >> 0x0000001eU))))) 
                               & ((- (IData)((1U & 
                                              (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                  >> 0x0000001dU))))) 
                                  & ((- (IData)((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                     >> 0x0000001cU))))) 
                                     & (((0x08000000U 
                                          & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                          ? __VdfgRegularize_hebeb780c_0_91
                                          : (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle)) 
                                        & (- (IData)(
                                                     (1U 
                                                      & (~ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])))))))))) 
                       & (- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                              >> 2U))))));
            }
        } else {
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__invalid_addr 
                = (1U & (IData)((((0U != (0x14000000U 
                                          & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])) 
                                  | (0x0000000cU != 
                                     (0x0000000cU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U]))) 
                                 | (0U != (0x0000000fU 
                                           & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                               << 3U) 
                                              | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                 >> 0x0000001dU)))))));
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr 
                = (((2U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])
                     ? ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                             >> 0x0000001fU))))) 
                        & ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                >> 0x0000001eU))))) 
                           & ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                   >> 0x0000001dU))))) 
                              & ((- (IData)((1U & (~ 
                                                   (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                    >> 0x0000001cU))))) 
                                 & (((0x08000000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                      ? __VdfgRegularize_hebeb780c_0_90
                                      : (1U & ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                               >> 0x0000001aU))))) 
                                               & (IData)(
                                                         (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle 
                                                          >> 0x00000020U))))) 
                                    & (- (IData)((1U 
                                                  & (~ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])))))))))
                     : ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                             >> 0x0000001fU))))) 
                        & ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                >> 0x0000001eU))))) 
                           & ((- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                   >> 0x0000001dU))))) 
                              & ((- (IData)((1U & (~ 
                                                   (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                    >> 0x0000001cU))))) 
                                 & (((0x08000000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                      ? __VdfgRegularize_hebeb780c_0_91
                                      : ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle) 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                           >> 0x0000001aU))))))) 
                                    & (- (IData)((1U 
                                                  & (~ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])))))))))) 
                   & (- (IData)((3U == (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                              >> 2U))))));
        }
    } else {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__invalid_addr 
            = (1U & (((8U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])
                       ? (1U & ((4U != (6U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])) 
                                | ((1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])
                                    ? (IData)(__VdfgRegularize_hebeb780c_0_92)
                                    : (IData)(((0U 
                                                != 
                                                (0xe0000000U 
                                                 & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])) 
                                               | (3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                      >> 0x0000001bU))))))))
                       : ((~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                              >> 2U)) | ((2U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])
                                          ? (IData)(
                                                    ((0U 
                                                      != 
                                                      (0x1c000000U 
                                                       & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])) 
                                                     | (0U 
                                                        != 
                                                        (0x0000000fU 
                                                         & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                             << 3U) 
                                                            | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                               >> 0x0000001dU))))))
                                          : ((1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])
                                              ? (IData)(__VdfgRegularize_hebeb780c_0_92)
                                              : (1U 
                                                 & ((0U 
                                                     != 
                                                     (0xe0000000U 
                                                      & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])) 
                                                    | ((0x10000000U 
                                                        & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                        ? 
                                                       (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                        >> 0x0000001bU)
                                                        : (IData)(
                                                                  (0x04000000U 
                                                                   == 
                                                                   (0x0c000000U 
                                                                    & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])))))))))) 
                     | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                        >> 4U)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr 
            = ((- (IData)((1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                 >> 3U)))) & ((- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                              >> 1U))))) 
                                              & (((1U 
                                                   & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U])
                                                   ? 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                   >> 0x0000001eU))))) 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                      >> 0x0000001dU))))) 
                                                      & (((0x10000000U 
                                                           & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                           ? 
                                                          ((- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                           >> 0x0000001aU))))) 
                                                           & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mip 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                                >> 0x0000001bU)))))))
                                                           : 
                                                          ((0x08000000U 
                                                            & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                            ? 
                                                           ((0x04000000U 
                                                             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtval
                                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause)
                                                            : 
                                                           ((0x04000000U 
                                                             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mepc
                                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs
                                                            [
                                                            ((0x00000018U 
                                                              & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                                 << 1U)) 
                                                             | (7U 
                                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                   >> 0x0000001aU)))]))) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                           >> 0x0000001fU))))))))
                                                   : 
                                                  ((- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                   >> 0x0000001eU))))) 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                      >> 0x0000001dU))))) 
                                                      & (((0x10000000U 
                                                           & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                           ? 
                                                          (((0x04000000U 
                                                             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtvec
                                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mie_reg) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                             >> 0x0000001bU))))))
                                                           : 
                                                          ((0x08000000U 
                                                            & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                            ? 
                                                           ((0x04000000U 
                                                             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mideleg
                                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__medeleg)
                                                            : 
                                                           ((0x04000000U 
                                                             & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U])
                                                             ? 0x40000100U
                                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus))) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                           >> 0x0000001fU))))))))) 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                                    >> 4U))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                                     >> 2U))))))));
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr 
        = ((1U == (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                         >> 0x00000012U))) ? vlSelfRef.__VdfgRegularize_hebeb780c_0_13
            : ((2U == (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                             >> 0x00000012U))) ? (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr_r 
                                                  | vlSelfRef.__VdfgRegularize_hebeb780c_0_13)
                : ((3U == (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                 >> 0x00000012U))) ? 
                   ((~ vlSelfRef.__VdfgRegularize_hebeb780c_0_13) 
                    & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr_r)
                    : vlSelfRef.__VdfgRegularize_hebeb780c_0_13)));
    VL_ASSIGN_W(256, vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder, Vtb__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[(7U 
                                                                                & ((0x07fffffeU 
                                                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                                                << 1U)) 
                                                                                | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                                                                >> 0x0000001fU)))] 
        = (((~ ((IData)(1U) << (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                               >> 0x0000001aU)))) 
            & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder
            [(7U & ((0x07fffffeU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                    << 1U)) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                               >> 0x0000001fU)))]) 
           | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__machine_write) 
              << (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[2U] 
                                 >> 0x0000001aU))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr 
        = __Vdly__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__write_data 
        = (0x00000800U | ((0x000007e0U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                                          >> 6U)) | 
                          (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59) 
                            << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_96))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_exception 
        = ((0x000000ffffffffffULL & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_exception) 
           | ((QData)((IData)(((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[0U] 
                                >> 5U) & (((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[0U] 
                                            >> 5U) 
                                           & ((3U & 
                                               (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                                                >> 2U)) 
                                              > (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level))) 
                                          | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__invalid_addr))))) 
              << 0x00000028U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__second_cycle_flush 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_flush_required;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__next_privilege_level 
        = (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45)
                  ? ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__mret)
                      ? (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                         >> 0x0000000bU) : (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                  >> 8U)))
                  : ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level) 
                     | (- (IData)((1U & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                                 >> 0x00000028U))))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__genblk1__DOT__mstatus_new 
        = ((1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder[0U] 
                  | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__swrite_decoder[0U]))
            ? ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr 
                & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__machine_write)
                    ? 0x00001888U : 0x000c0122U)) | 
               ((~ ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__machine_write)
                     ? 0x00001888U : 0x000c0122U)) 
                & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus))
            : ((0xfffc0000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus) 
               | ((0x0003fffeU & (((1U & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                                  >> 0x00000028U)))
                                    ? ((0x0001f000U 
                                        & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                           >> 1U)) 
                                       | ((1U == (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__next_privilege_level))
                                           ? ((((0x0000001eU 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level))) 
                                               << 7U) 
                                              | ((((6U 
                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                       >> 5U)) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_94)) 
                                                  << 4U) 
                                                 | (0x0000000eU 
                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                       >> 1U))))
                                           : ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level) 
                                                << 0x0000000aU) 
                                               | (((0x0000000eU 
                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & ((3U 
                                                          == (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level))
                                                          ? 
                                                         (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                          >> 3U)
                                                          : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_94)))) 
                                                  << 6U)) 
                                              | ((0x00000038U 
                                                  & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                     >> 1U)) 
                                                 | (3U 
                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                       >> 1U))))))
                                    : ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45)
                                        ? vlSelfRef.__VdfgRegularize_hebeb780c_0_93
                                        : (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                           >> 1U))) 
                                  << 1U)) | (1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r 
        = __Vdly__tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex) 
                                                 & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r) 
                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex 
                                                       >> 1U)));
    if (((IData)(vlSelfRef.tb__DOT__ext_reset) | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
            = (0xfffffffdU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U]);
    } else if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U]) 
               | (2U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U]));
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__br_exception 
        = (((QData)((IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                             << 5U))) << 0x00000023U) 
           | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex)) 
               << 3U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jmp_id))));
    if (__VdlySet__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table[__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0] 
            = __VdlyVal__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id 
        = __Vdly__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_9 = (0x0000007fU 
                                                & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_35 = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                 >> 0x00000014U);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_60 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                    >> 3U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_61 = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                 >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_62 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                    >> 2U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id])) 
                    << 2U) | (QData)((IData)(((2U & 
                                               ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count) 
                                                >> 2U)) 
                                              | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table
                                              [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id])))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
        = ((0xfffffffcU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id])) 
                        << 2U) | (QData)((IData)(((2U 
                                                   & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count) 
                                                      >> 2U)) 
                                                  | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table
                                                  [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id])))) 
                      >> 0x00000020U)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
        = ((3U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table
                                                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id])))) 
              << 2U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U] 
        = (0x0000001fU & (((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table
                                                      [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id])))) 
                           >> 0x0000001eU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table
                                                                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]))) 
                                                       >> 0x00000020U)) 
                                              << 2U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = (0x0000001fU 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                    >> 7U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = (0x0000001fU 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                    >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (7U 
                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                   >> 0x0000000cU));
    __VdfgRegularize_hebeb780c_0_3 = (0x0000707fU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                      [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0xfe00707fU 
                                                & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]);
    __VdfgRegularize_hebeb780c_0_31 = (0x0000007fU 
                                       & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                       [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]);
    __VdfgRegularize_hebeb780c_0_32 = (0xfc00707fU 
                                       & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                       [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000001fU 
                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                   >> 2U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_instruction_id[0U] 
        = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                 >> 2U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (IData)(
                                                        (0x02000000U 
                                                         == 
                                                         (0x06000000U 
                                                          & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U])));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r) 
           & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
              >> 1U));
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__toggle_id 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id 
            = (7U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index;
    } else {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__toggle_id 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id 
            = (7U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                      << 0x0000001eU) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                         >> 2U)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table
            [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                             >> 0x0000000dU))];
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_inuse[0U] 
        = ((0U != (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                  >> 0x0000000dU))) 
           & ((0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                              >> 0x0000000dU)) == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table
              [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U]]));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U] 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear)
            ? (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index)
            : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table
           [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                            >> 0x00000012U))]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_inuse[1U] 
        = ((0U != (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                  >> 0x00000012U))) 
           & ((0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                              >> 0x00000012U)) == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table
              [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U]]));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[0U] 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[0U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U]
           [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                            >> 0x0000000dU))]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[0U] 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[0U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U]
           [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                            >> 0x0000000dU))]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[1U] 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[1U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U]
           [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                            >> 0x00000012U))]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[1U] 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[1U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U]
           [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                            >> 0x00000012U))]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_link 
        = ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14)) 
           | (5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_link 
        = ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15)) 
           | (5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__genblk8__DOT__illegal_op_check__DOT__base_legal 
        = ((0x00000063U == __VdfgRegularize_hebeb780c_0_3) 
           | ((0x00001063U == __VdfgRegularize_hebeb780c_0_3) 
              | ((0x00004063U == __VdfgRegularize_hebeb780c_0_3) 
                 | ((0x00005063U == __VdfgRegularize_hebeb780c_0_3) 
                    | ((0x00006063U == __VdfgRegularize_hebeb780c_0_3) 
                       | ((0x00007063U == __VdfgRegularize_hebeb780c_0_3) 
                          | ((0x00000067U == __VdfgRegularize_hebeb780c_0_3) 
                             | ((0x0000006fU == __VdfgRegularize_hebeb780c_0_31) 
                                | ((0x00000037U == __VdfgRegularize_hebeb780c_0_31) 
                                   | ((0x00000017U 
                                       == __VdfgRegularize_hebeb780c_0_31) 
                                      | ((0x00000013U 
                                          == __VdfgRegularize_hebeb780c_0_3) 
                                         | ((0x00001013U 
                                             == __VdfgRegularize_hebeb780c_0_32) 
                                            | ((0x00002013U 
                                                == __VdfgRegularize_hebeb780c_0_3) 
                                               | ((0x00003013U 
                                                   == __VdfgRegularize_hebeb780c_0_3) 
                                                  | ((0x00004013U 
                                                      == __VdfgRegularize_hebeb780c_0_3) 
                                                     | ((0x00005013U 
                                                         == __VdfgRegularize_hebeb780c_0_32) 
                                                        | ((0x40005013U 
                                                            == __VdfgRegularize_hebeb780c_0_32) 
                                                           | ((0x00006013U 
                                                               == __VdfgRegularize_hebeb780c_0_3) 
                                                              | ((0x00007013U 
                                                                  == __VdfgRegularize_hebeb780c_0_3) 
                                                                 | ((0x00000033U 
                                                                     == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                    | ((0x40000033U 
                                                                        == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                       | ((0x00001033U 
                                                                           == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                          | ((0x00002033U 
                                                                              == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                             | ((0x00003033U 
                                                                                == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                                | ((0x00004033U 
                                                                                == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                                | ((0x00005033U 
                                                                                == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                                | ((0x40005033U 
                                                                                == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                                | ((0x00006033U 
                                                                                == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                                | ((0x00007033U 
                                                                                == vlSelfRef.__VdfgRegularize_hebeb780c_0_5) 
                                                                                | ((3U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00001003U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00002003U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00004003U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00005003U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00000023U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00001023U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00002023U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x0000000fU 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x0000100fU 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00001073U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00002073U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00003073U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00005073U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | ((0x00006073U 
                                                                                == __VdfgRegularize_hebeb780c_0_3) 
                                                                                | (0x00007073U 
                                                                                == __VdfgRegularize_hebeb780c_0_3)))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_30 = ((0x1bU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 | (0x19U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = ((0x0dU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 | (5U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = ((0x18U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 | (8U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op 
        = ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
           & (0U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ifence 
        = ((3U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
           & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
              [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
              >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_83 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_return) 
                                                 & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_84 = ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_return)) 
                                                 & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__toggle 
        = ((~ ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jal_jalr_ex) 
               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16))) 
           & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__tag_update_way 
        = (3U & ((- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing))) 
                 & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table
                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex]));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush 
        = (((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex 
             >> 1U) != (0x7fffffffU & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
                                        << 0x0000001eU) 
                                       | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                          >> 2U)))) 
           & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__exception_with_rd_complete_status_rs[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__exception_with_rd_complete_status_rs[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_status_rs[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_status_rs[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__retired_status_rs[0U] 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U]]) 
            << 1U) | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U]]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__retired_status_rs[1U] 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U]]) 
            << 1U) | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U]]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__target_update_way 
        = ((- (IData)((1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27)) 
                             | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_43) 
                                ^ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_96) 
                                   >> 1U)))))) & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__tag_update_way));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[0U] 
        = (1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_status_rs[0U] 
                  ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__exception_with_rd_complete_status_rs[0U]) 
                 ^ VL_REDXOR_2(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__retired_status_rs[0U])));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[1U] 
        = (1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_status_rs[1U] 
                  ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__exception_with_rd_complete_status_rs[1U]) 
                 ^ VL_REDXOR_2(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__retired_status_rs[1U])));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[0U] 
           & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_inuse[0U] 
              & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                 >> 7U)));
}

void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.valid 
        = ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__rst)) 
           & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push) 
              | ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.valid) 
                 & (~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.pop)))));
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push) {
        vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out 
            = ((8U == (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc 
                       >> 0x0000001cU)) << 1U);
    }
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid 
        = ((~ (IData)(vlSelfRef.tb__DOT__ext_reset)) 
           & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.push) 
              | ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid) 
                 & (~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram.data_valid)))));
    if (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.push) {
        vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out 
            = ((((0x0000001cU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                                 >> 5U)) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                << 4U) | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                  [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]) 
                          << 1U));
    }
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__.new_request_r 
        = (1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                 >> 3U));
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__.new_request_r 
        = (1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                 >> 2U));
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__.new_request_r 
        = (1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                 >> 1U));
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__.new_request_r 
        = (1U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to));
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.data_valid 
        = ((~ ((IData)(vlSelfRef.tb__DOT__ext_reset) 
               | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush))) 
           & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__instruction_bram.en));
    if (((IData)(vlSelfRef.tb__DOT__ext_reset) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26) 
                                                  & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop)))) {
        vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_done = 0U;
    } else if ((0U != (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_id_match))) {
        vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_done = 1U;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__operands_ready 
        = (1U & (~ ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store) 
                    | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict))));
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries[vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0][0U] 
            = vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[0U];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries[vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0][1U] 
            = vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[1U];
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries[vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0][2U] 
            = vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0[2U];
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index 
        = vlSelfRef.__Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index;
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram[vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0] 
            = vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_operands_ready 
        = ((0x0000000cU & (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__operands_ready)))) 
           | ((2U & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict)) 
                     << 1U)) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__operands_ready)));
    if (vlSelfRef.tb__DOT__ext_reset) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc = 0x80000000U;
    } else if (((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push) 
                | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc 
            = (0xfffffffcU & vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.next_pc);
    }
    vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b 
        = (0x00000fffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                          >> 0x00000012U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = (3U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                                                    >> 0x00000010U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_select__DOT__one_hot 
        = (8U == (0x0000000fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][2U] 
                                 >> 0x0000000cU)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][0U] 
                                                    >> 3U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = (0U 
                                                 != 
                                                 ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                                                  & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_operands_ready)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_26)
            ? ((0U >= (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_reg_sel_r))
                ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs
               [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_reg_sel_r]
                : 0U) : ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                          << 0x00000019U) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                             [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                             [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][0U] 
                                             >> 7U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_42 = ((0x0000007fU 
                                                  & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__read_data) 
                                                     >> 5U)) 
                                                 == 
                                                 (0x00000040U 
                                                  | (0x0000003fU 
                                                     & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc 
                                                        >> 0x0000000bU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_97 = ((0x00000040U 
                                                  | (0x0000003fU 
                                                     & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc 
                                                        >> 0x0000000bU))) 
                                                 == 
                                                 (0x0000007fU 
                                                  & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__read_data) 
                                                     >> 5U)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__one_hot 
        = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_97) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__int_array[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__int_array[1U] = 0U;
    if ((1U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__one_hot))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__int_array[0U] = 0U;
    }
    if ((2U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__one_hot))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__int_array[1U] = 1U;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__int_array[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way) 
           | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__int_array[1U]);
}

void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_52;
    __VdfgRegularize_hebeb780c_0_52 = 0;
    // Body
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetch_instruction 
        = ((0U >= (1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out)))
            ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__unit_data_array
           [(1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out))]
            : 0U);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle 
        = (1U & ((~ ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count) 
                     >> 3U)) & (~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
        = ((0U >= (1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out)))
            ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_data_array
           [(1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out))]
            : 0U);
    vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram.data_valid 
        = ((~ (IData)(vlSelfRef.tb__DOT__ext_reset)) 
           & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__data_bram.en) 
              & (vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.transaction_out[1U] 
                 >> 0x0000000bU)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_no_instruction_stall 
        = (1U & ((~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                     >> 1U)) | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id 
        = (7U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear)
                  ? (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index)
                  : (((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush)
                       ? (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id)
                       : (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id)) 
                     + ((~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush)) 
                        & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid 
        = (1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                  >> 1U) & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_issue_hold)) 
                            & (~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
           & (0x0000000dU | (2U & ((~ (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r) 
                                        | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_done)) 
                                       & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store))) 
                                   << 1U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr_m__DOT__clr 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr) 
           & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_101 = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory
                                                  [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id] 
                                                  ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory
                                                  [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id]);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_100 = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory
                                                  [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id] 
                                                  ^ 
                                                  (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory
                                                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id] 
                                                   ^ 
                                                   (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id] 
                                                    ^ 
                                                    (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory
                                                     [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id] 
                                                     ^ 
                                                     (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory
                                                      [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id] 
                                                      ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory
                                                      [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id])))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__illegal_instruction 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern_r) 
           & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid));
    __VdfgRegularize_hebeb780c_0_52 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_operands_ready) 
                                       & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_unit_stall 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid) 
           & ((~ (0U != (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready))) 
              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_operand_stall 
        = ((0U != (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready)) 
           & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_58)) 
              & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued 
        = ((0U != (IData)(__VdfgRegularize_hebeb780c_0_52)) 
           & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_issue_hold)) 
                 & ((~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                        >> 1U)) | (0U != (IData)(__VdfgRegularize_hebeb780c_0_52)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to 
        = ((- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid))) 
           & (IData)(__VdfgRegularize_hebeb780c_0_52));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_ls_operand_stall 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
            >> 1U) & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_operand_stall));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_99 = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                  >> 5U) 
                                                 & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count) 
            >> 3U) & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_flush_required 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__potential_flush) 
           & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
              >> 3U));
}

void Vtb___024root___nba_sequent__TOP__7(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__7\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v0) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v0 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v1) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v1 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v2) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v2 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v3) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v3 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v4) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v4 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v5) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v5 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v6) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v6 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v7) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v7 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v8) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v8 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v9) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v9 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v10) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v10 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[10U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v11) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v11 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[11U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v12) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v12 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[12U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v13) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v13 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[13U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v14) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v14 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[14U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v15) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v15 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[15U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v16) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v16 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[16U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v17) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v17 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[17U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v18) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v18 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[18U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v19) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v19 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[19U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v20) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v20 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[20U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v21) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v21 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[21U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v22) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v22 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[22U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v23) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v23 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[23U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v24) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v24 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[24U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v25) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v25 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[25U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v26) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v26 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[26U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v27) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v27 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[27U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v28) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v28 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[28U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v29) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v29 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[29U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v30) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v30 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[30U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v31) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v31 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[31U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32] 
            = vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v0) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v0 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v1) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v1 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v2) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v2 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[2U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v3) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v3 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v4) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v4 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[4U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v5) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v5 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[5U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v6) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v6 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[6U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v7) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v7 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[7U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v8) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v8 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[8U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v9) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v9 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[9U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v10) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v10 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[10U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v11) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v11 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[11U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v12) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v12 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[12U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v13) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v13 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[13U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v14) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v14 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[14U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v15) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v15 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[15U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v16) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v16 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[16U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v17) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v17 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[17U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v18) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v18 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[18U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v19) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v19 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[19U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v20) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v20 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[20U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v21) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v21 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[21U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v22) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v22 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[22U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v23) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v23 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[23U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v24) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v24 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[24U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v25) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v25 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[25U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v26) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v26 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[26U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v27) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v27 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[27U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v28) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v28 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[28U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v29) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v29 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[29U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v30) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v30 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[30U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v31) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v31 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[31U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32) {
        vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[vlSelfRef.__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32] 
            = vlSelfRef.__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[2U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[1U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[2U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[1U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[3U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[3U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[5U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[4U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[5U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[4U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[6U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[6U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[8U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[7U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[8U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[7U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[9U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[9U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[10U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[11U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[10U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[11U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[11U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[10U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[12U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[12U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[13U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[14U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[13U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[14U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[14U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[13U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[15U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[15U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[16U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[17U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[16U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[17U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[17U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[16U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[18U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[18U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[19U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[20U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[19U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[20U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[20U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[19U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[21U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[21U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[22U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[23U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[22U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[23U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[23U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[22U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[24U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[24U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[25U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[26U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[25U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[26U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[26U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[25U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[27U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[27U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[28U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[29U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[28U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[29U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[29U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[28U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[30U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[31U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[30U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[31U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[31U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[30U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[2U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[1U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[2U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[1U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[3U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[3U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[5U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[4U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[5U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[4U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[6U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[6U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[8U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[7U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[8U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[7U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[9U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[9U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[10U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[11U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[10U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[11U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[11U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[10U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[12U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[12U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[13U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[14U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[13U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[14U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[14U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[13U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[15U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[15U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[16U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[17U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[16U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[17U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[17U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[16U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[18U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[18U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[19U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[20U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[19U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[20U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[20U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[19U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[21U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[21U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[22U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[23U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[22U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[23U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[23U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[22U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[24U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[24U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[25U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[26U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[25U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[26U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[26U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[25U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[27U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[27U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[28U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[29U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[28U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[29U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[29U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[28U]))) 
                   >> 0x00000020U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[30U] 
        = (IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[31U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[30U]))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed[31U] 
        = (IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[31U])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[30U]))) 
                   >> 0x00000020U));
}

void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    // Body
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x0000000dU))];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x00000012U))];
    vlSelfRef.tb__DOT__sel_bank1[0U] = (vlSelfRef.tb__DOT__sel_bank[0U][0U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][0U]);
    vlSelfRef.tb__DOT__register_file[0U] = (vlSelfRef.tb__DOT__sel_bank1[0U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[0U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[0U]);
    vlSelfRef.tb__DOT__sel_bank1[1U] = (vlSelfRef.tb__DOT__sel_bank[0U][1U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][1U]);
    vlSelfRef.tb__DOT__register_file[1U] = (vlSelfRef.tb__DOT__sel_bank1[1U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[1U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[1U]);
    vlSelfRef.tb__DOT__sel_bank1[2U] = (vlSelfRef.tb__DOT__sel_bank[0U][2U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][2U]);
    vlSelfRef.tb__DOT__register_file[2U] = (vlSelfRef.tb__DOT__sel_bank1[2U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[2U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[2U]);
    vlSelfRef.tb__DOT__sel_bank1[3U] = (vlSelfRef.tb__DOT__sel_bank[0U][3U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][3U]);
    vlSelfRef.tb__DOT__register_file[3U] = (vlSelfRef.tb__DOT__sel_bank1[3U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[3U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[3U]);
    vlSelfRef.tb__DOT__sel_bank1[4U] = (vlSelfRef.tb__DOT__sel_bank[0U][4U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][4U]);
    vlSelfRef.tb__DOT__register_file[4U] = (vlSelfRef.tb__DOT__sel_bank1[4U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[4U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[4U]);
    vlSelfRef.tb__DOT__sel_bank1[5U] = (vlSelfRef.tb__DOT__sel_bank[0U][5U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][5U]);
    vlSelfRef.tb__DOT__register_file[5U] = (vlSelfRef.tb__DOT__sel_bank1[5U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[5U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[5U]);
    vlSelfRef.tb__DOT__sel_bank1[6U] = (vlSelfRef.tb__DOT__sel_bank[0U][6U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][6U]);
    vlSelfRef.tb__DOT__register_file[6U] = (vlSelfRef.tb__DOT__sel_bank1[6U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[6U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[6U]);
    vlSelfRef.tb__DOT__sel_bank1[7U] = (vlSelfRef.tb__DOT__sel_bank[0U][7U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][7U]);
    vlSelfRef.tb__DOT__register_file[7U] = (vlSelfRef.tb__DOT__sel_bank1[7U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[7U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[7U]);
    vlSelfRef.tb__DOT__sel_bank1[8U] = (vlSelfRef.tb__DOT__sel_bank[0U][8U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][8U]);
    vlSelfRef.tb__DOT__register_file[8U] = (vlSelfRef.tb__DOT__sel_bank1[8U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[8U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[8U]);
    vlSelfRef.tb__DOT__sel_bank1[9U] = (vlSelfRef.tb__DOT__sel_bank[0U][9U] 
                                        ^ vlSelfRef.tb__DOT__sel_bank[1U][9U]);
    vlSelfRef.tb__DOT__register_file[9U] = (vlSelfRef.tb__DOT__sel_bank1[9U]
                                             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[9U]
                                             : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[9U]);
    vlSelfRef.tb__DOT__sel_bank1[10U] = (vlSelfRef.tb__DOT__sel_bank[0U][10U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][10U]);
    vlSelfRef.tb__DOT__register_file[10U] = (vlSelfRef.tb__DOT__sel_bank1[10U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[10U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[10U]);
    vlSelfRef.tb__DOT__sel_bank1[11U] = (vlSelfRef.tb__DOT__sel_bank[0U][11U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][11U]);
    vlSelfRef.tb__DOT__register_file[11U] = (vlSelfRef.tb__DOT__sel_bank1[11U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[11U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[11U]);
    vlSelfRef.tb__DOT__sel_bank1[12U] = (vlSelfRef.tb__DOT__sel_bank[0U][12U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][12U]);
    vlSelfRef.tb__DOT__register_file[12U] = (vlSelfRef.tb__DOT__sel_bank1[12U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[12U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[12U]);
    vlSelfRef.tb__DOT__sel_bank1[13U] = (vlSelfRef.tb__DOT__sel_bank[0U][13U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][13U]);
    vlSelfRef.tb__DOT__register_file[13U] = (vlSelfRef.tb__DOT__sel_bank1[13U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[13U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[13U]);
    vlSelfRef.tb__DOT__sel_bank1[14U] = (vlSelfRef.tb__DOT__sel_bank[0U][14U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][14U]);
    vlSelfRef.tb__DOT__register_file[14U] = (vlSelfRef.tb__DOT__sel_bank1[14U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[14U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[14U]);
    vlSelfRef.tb__DOT__sel_bank1[15U] = (vlSelfRef.tb__DOT__sel_bank[0U][15U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][15U]);
    vlSelfRef.tb__DOT__register_file[15U] = (vlSelfRef.tb__DOT__sel_bank1[15U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[15U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[15U]);
    vlSelfRef.tb__DOT__sel_bank1[16U] = (vlSelfRef.tb__DOT__sel_bank[0U][16U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][16U]);
    vlSelfRef.tb__DOT__register_file[16U] = (vlSelfRef.tb__DOT__sel_bank1[16U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[16U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[16U]);
    vlSelfRef.tb__DOT__sel_bank1[17U] = (vlSelfRef.tb__DOT__sel_bank[0U][17U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][17U]);
    vlSelfRef.tb__DOT__register_file[17U] = (vlSelfRef.tb__DOT__sel_bank1[17U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[17U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[17U]);
    vlSelfRef.tb__DOT__sel_bank1[18U] = (vlSelfRef.tb__DOT__sel_bank[0U][18U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][18U]);
    vlSelfRef.tb__DOT__register_file[18U] = (vlSelfRef.tb__DOT__sel_bank1[18U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[18U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[18U]);
    vlSelfRef.tb__DOT__sel_bank1[19U] = (vlSelfRef.tb__DOT__sel_bank[0U][19U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][19U]);
    vlSelfRef.tb__DOT__register_file[19U] = (vlSelfRef.tb__DOT__sel_bank1[19U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[19U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[19U]);
    vlSelfRef.tb__DOT__sel_bank1[20U] = (vlSelfRef.tb__DOT__sel_bank[0U][20U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][20U]);
    vlSelfRef.tb__DOT__register_file[20U] = (vlSelfRef.tb__DOT__sel_bank1[20U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[20U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[20U]);
    vlSelfRef.tb__DOT__sel_bank1[21U] = (vlSelfRef.tb__DOT__sel_bank[0U][21U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][21U]);
    vlSelfRef.tb__DOT__register_file[21U] = (vlSelfRef.tb__DOT__sel_bank1[21U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[21U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[21U]);
    vlSelfRef.tb__DOT__sel_bank1[22U] = (vlSelfRef.tb__DOT__sel_bank[0U][22U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][22U]);
    vlSelfRef.tb__DOT__register_file[22U] = (vlSelfRef.tb__DOT__sel_bank1[22U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[22U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[22U]);
    vlSelfRef.tb__DOT__sel_bank1[23U] = (vlSelfRef.tb__DOT__sel_bank[0U][23U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][23U]);
    vlSelfRef.tb__DOT__register_file[23U] = (vlSelfRef.tb__DOT__sel_bank1[23U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[23U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[23U]);
    vlSelfRef.tb__DOT__sel_bank1[24U] = (vlSelfRef.tb__DOT__sel_bank[0U][24U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][24U]);
    vlSelfRef.tb__DOT__register_file[24U] = (vlSelfRef.tb__DOT__sel_bank1[24U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[24U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[24U]);
    vlSelfRef.tb__DOT__sel_bank1[25U] = (vlSelfRef.tb__DOT__sel_bank[0U][25U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][25U]);
    vlSelfRef.tb__DOT__register_file[25U] = (vlSelfRef.tb__DOT__sel_bank1[25U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[25U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[25U]);
    vlSelfRef.tb__DOT__sel_bank1[26U] = (vlSelfRef.tb__DOT__sel_bank[0U][26U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][26U]);
    vlSelfRef.tb__DOT__register_file[26U] = (vlSelfRef.tb__DOT__sel_bank1[26U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[26U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[26U]);
    vlSelfRef.tb__DOT__sel_bank1[27U] = (vlSelfRef.tb__DOT__sel_bank[0U][27U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][27U]);
    vlSelfRef.tb__DOT__register_file[27U] = (vlSelfRef.tb__DOT__sel_bank1[27U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[27U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[27U]);
    vlSelfRef.tb__DOT__sel_bank1[28U] = (vlSelfRef.tb__DOT__sel_bank[0U][28U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][28U]);
    vlSelfRef.tb__DOT__register_file[28U] = (vlSelfRef.tb__DOT__sel_bank1[28U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[28U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[28U]);
    vlSelfRef.tb__DOT__sel_bank1[29U] = (vlSelfRef.tb__DOT__sel_bank[0U][29U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][29U]);
    vlSelfRef.tb__DOT__register_file[29U] = (vlSelfRef.tb__DOT__sel_bank1[29U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[29U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[29U]);
    vlSelfRef.tb__DOT__sel_bank1[30U] = (vlSelfRef.tb__DOT__sel_bank[0U][30U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][30U]);
    vlSelfRef.tb__DOT__register_file[30U] = (vlSelfRef.tb__DOT__sel_bank1[30U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[30U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[30U]);
    vlSelfRef.tb__DOT__sel_bank1[31U] = (vlSelfRef.tb__DOT__sel_bank[0U][31U] 
                                         ^ vlSelfRef.tb__DOT__sel_bank[1U][31U]);
    vlSelfRef.tb__DOT__register_file[31U] = (vlSelfRef.tb__DOT__sel_bank1[31U]
                                              ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[31U]
                                              : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[31U]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x0000000dU))];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x00000012U))];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[1U][0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[1U][1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[1U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[0U][0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[0U][1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[1U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[0U]][0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[1U]][1U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U] 
        = ((0xf8000000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U]) 
           | ((((4U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                       << 1U)) | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed) 
                                   << 1U) | (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                   >> 0x0000001aU)))) 
               << 0x00000018U) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57) 
                                   << 0x00000017U) 
                                  | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_call) 
                                      << 0x00000016U) 
                                     | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_return) 
                                         << 0x00000015U) 
                                        | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pc_offset_r)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U] 
        = ((0x07ffffffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U]) 
           | ((IData)((((QData)((IData)((7U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                                << 2U) 
                                               | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                  >> 0x0000001eU))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
                                                            << 0x0000001fU) 
                                                           | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                                              >> 1U)))))) 
              << 0x0000001bU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[1U] 
        = (((IData)((((QData)((IData)((7U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                              << 2U) 
                                             | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                >> 0x0000001eU))))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
                                                          << 0x0000001fU) 
                                                         | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                                            >> 1U)))))) 
            >> 5U) | ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
                       << 0x0000001eU) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (7U 
                                                                      & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                                                          << 2U) 
                                                                         | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                                            >> 0x0000001eU))))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
                                                                        << 0x0000001fU) 
                                                                       | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                                                          >> 1U))))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000001bU)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[2U] 
        = ((0xc0000000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[2U]) 
           | (((0x07ffffffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
                               >> 2U)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (7U 
                                                                      & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                                                          << 2U) 
                                                                         | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                                            >> 0x0000001eU))))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
                                                                        << 0x0000001fU) 
                                                                       | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                                                          >> 1U))))) 
                                                   >> 0x00000020U)) 
                                          >> 5U)) | 
              (0x38000000U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
                              >> 2U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[2U] 
        = ((0x3fffffffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[2U]) 
           | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
              << 0x0000001eU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[3U] 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
           >> 2U);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs2_use_regfile)
            ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U]
            : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_alu_rs2_r);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__shift_amount 
        = (0x0000001fU & ((0x10000000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U])
                           ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U]
                           : ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                               << 0x0000000eU) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                  >> 0x00000012U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs1_data 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_use_regfile)
            ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U]
            : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_alu_rs1_r);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a 
        = (((QData)((IData)(((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed) 
                             & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
                                >> 0x0000001fU)))) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b 
        = (((QData)((IData)(((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed) 
                             & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
                                >> 0x0000001fU)))) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U])));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
        = ((0xe0000000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U]) 
           | ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ls_offset) 
                << 0x00000011U) | (0x0001c000U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                                   << 0x00000010U) 
                                                  | (0x0000c000U 
                                                     & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                        >> 0x00000010U))))) 
              | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_load_r) 
                  << 0x0000000dU) | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_store_r) 
                                      << 0x0000000cU) 
                                     | (((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store) 
                                         << 0x0000000bU) 
                                        | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U]) 
                                           << 8U))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
        = ((0x1fffffffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U])))) 
              << 0x0000001dU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U])))) 
            >> 3U) | ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U]))) 
                               >> 0x00000020U)) << 0x0000001dU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[2U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U]))) 
                    >> 0x00000020U)) >> 3U);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U] 
        = ((0xffffffc0U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U]) 
           | ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr_r) 
                << 5U) | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_fence) 
                           << 4U) | (0xfffffff8U & 
                                     (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ifence_r) 
                                       << 3U) & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to))))) 
              | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ecall) 
                  << 2U) | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ebreak) 
                             << 1U) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ret)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U] 
        = ((0x0000003fU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U]) 
           | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
              << 6U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[1U] 
        = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
            >> 0x0000001aU) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
                               << 6U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[2U] 
        = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
            >> 0x0000001aU) | ((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                                         << 0x0000003fU) 
                                        | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                            << 0x0000001fU) 
                                           | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                              >> 1U)))) 
                               << 6U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                      << 0x0000003fU) | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                          << 0x0000001fU) 
                                         | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                            >> 1U)))) 
            >> 0x0000001aU) | ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                                          << 0x0000003fU) 
                                         | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                             << 0x0000001fU) 
                                            | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                               >> 1U))) 
                                        >> 0x00000020U)) 
                               << 6U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[4U] 
        = ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U])) 
                      << 0x0000003fU) | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U])) 
                                          << 0x0000001fU) 
                                         | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])) 
                                            >> 1U))) 
                    >> 0x00000020U)) >> 0x0000001aU);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__arith 
        = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs1_data 
            & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U]) 
           >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = (0x7fffffffU 
                                                & (((~ (IData)(
                                                               (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b 
                                                                >> 2U))) 
                                                    & (~ (IData)(
                                                                 (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a 
                                                                  >> 2U)))) 
                                                   | ((IData)(
                                                              (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b 
                                                               >> 2U)) 
                                                      & (IData)(
                                                                (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a 
                                                                 >> 2U)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_80 = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a 
                                                 | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_81 = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a 
                                                 & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b);
    __VdfgRegularize_hebeb780c_0_1 = (0x7fffffffU & 
                                      ((0x80000000U 
                                        | (0x7fffffffU 
                                           & (~ (IData)(
                                                        (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b 
                                                         >> 2U))))) 
                                       & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a 
                                                  >> 2U))));
    __VdfgRegularize_hebeb780c_0_2 = (0x80000000U | 
                                      (0x7fffffffU 
                                       & ((~ (IData)(
                                                     (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b 
                                                      >> 2U))) 
                                          | (IData)(
                                                    (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a 
                                                     >> 2U)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[0U] 
        = ((0xfffff000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[0U]) 
           | ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__shift_amount) 
                << 7U) | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_subtract) 
                          << 6U)) | ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__arith) 
                                       << 5U) | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_lshift) 
                                                 << 4U)) 
                                     | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_shifter_path) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_slt_path))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[0U] 
        = ((0x00000fffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[0U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])))) 
              << 0x0000000cU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])))) 
            >> 0x00000014U) | ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U]))) 
                                        >> 0x00000020U)) 
                               << 0x0000000cU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U] 
        = ((0xfffff000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U]))) 
                       >> 0x00000020U)) >> 0x00000014U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U] 
        = ((0xffffefffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U]) 
           | (0x00001000U & (((~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                  >> 0x0000001eU)) 
                              << 0x0000000cU) & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data 
                                                 >> 0x00000013U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U] 
        = ((0x00001fffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U]) 
           | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs1_data 
              << 0x0000000dU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U] 
        = ((0x00002000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U]) 
           | (0x00003fffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs1_data 
                             >> 0x00000013U)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U] 
        = ((0x00001fffU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U]) 
           | (0x00002000U & (((~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                  >> 0x0000001eU)) 
                              << 0x0000000dU) & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
                                                 >> 0x00000012U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in 
        = (1U & ((1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])
                  ? (((~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
                          >> 1U)) & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
                                     >> 1U)) | (((~ 
                                                  (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
                                                   >> 1U)) 
                                                 | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
                                                    >> 1U)) 
                                                & ((~ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U]) 
                                                   | vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])))
                  : (((~ (IData)((vlSelfRef.__VdfgRegularize_hebeb780c_0_80 
                                  >> 1U))) | (IData)(
                                                     (vlSelfRef.__VdfgRegularize_hebeb780c_0_81 
                                                      >> 1U))) 
                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_80)) 
                        | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_81)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_64 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x0000001fU) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x0000001eU) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x0000001fU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_65 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x0000001dU) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x0000001cU) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x0000001dU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_66 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x0000001bU) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x0000001aU) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x0000001bU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_67 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000019U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x00000018U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x00000019U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_68 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000017U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x00000016U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x00000017U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_69 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000015U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x00000014U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x00000015U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_70 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000013U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x00000012U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x00000013U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_71 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x00000011U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x00000010U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x00000011U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_72 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x0000000fU) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x0000000eU) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x0000000fU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_73 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x0000000dU) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x0000000cU) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x0000000dU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_74 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 0x0000000bU) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 0x0000000aU) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 0x0000000bU))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_75 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 9U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 8U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 9U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_76 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 7U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 6U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 7U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_77 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 5U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 4U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 5U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_78 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 3U) 
                                                    | ((__VdfgRegularize_hebeb780c_0_1 
                                                        >> 2U) 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 3U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_79 = (1U 
                                                 & ((__VdfgRegularize_hebeb780c_0_1 
                                                     >> 1U) 
                                                    | (__VdfgRegularize_hebeb780c_0_1 
                                                       & (__VdfgRegularize_hebeb780c_0_2 
                                                          >> 1U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_29 = (0x00000003ffffffffULL 
                                                 & (((0x00000003fffffffeULL 
                                                      & (((2U 
                                                           & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r))
                                                            ? 
                                                           (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                             << 0x00000033U) 
                                                            | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                                << 0x00000013U) 
                                                               | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                  >> 0x0000000dU)))
                                                            : 
                                                           ((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                              << 0x00000033U) 
                                                             | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                                 << 0x00000013U) 
                                                                | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                   >> 0x0000000dU))) 
                                                            & (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                << 0x00000034U) 
                                                               | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                   << 0x00000014U) 
                                                                  | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[1U])) 
                                                                     >> 0x0000000cU)))))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r))
                                                            ? 
                                                           ((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                              << 0x00000033U) 
                                                             | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                                 << 0x00000013U) 
                                                                | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                   >> 0x0000000dU))) 
                                                            | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                << 0x00000034U) 
                                                               | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                   << 0x00000014U) 
                                                                  | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[1U])) 
                                                                     >> 0x0000000cU))))
                                                            : 
                                                           ((((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                              << 0x00000033U) 
                                                             | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[3U])) 
                                                                 << 0x00000013U) 
                                                                | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                   >> 0x0000000dU))) 
                                                            ^ 
                                                            (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                              << 0x00000034U) 
                                                             | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                 << 0x00000014U) 
                                                                | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[1U])) 
                                                                   >> 0x0000000cU)))))) 
                                                         << 1U)) 
                                                     | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_subtract))) 
                                                    + 
                                                    ((0x00000003fffffffeULL 
                                                      & (((- (QData)((IData)(
                                                                             (3U 
                                                                              == (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r))))) 
                                                          & ((- (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_subtract))) 
                                                             ^ 
                                                             (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                               << 0x00000034U) 
                                                              | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[2U])) 
                                                                  << 0x00000014U) 
                                                                 | ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs[1U])) 
                                                                    >> 0x0000000cU))))) 
                                                         << 1U)) 
                                                     | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_subtract)))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b 
        = ((((((((3U == (__VdfgRegularize_hebeb780c_0_2 
                         >> 0x0000001eU)) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64)) 
                << 3U) | (((3U == (3U & (__VdfgRegularize_hebeb780c_0_2 
                                         >> 0x0000001cU))) 
                           | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_65)) 
                          << 2U)) | ((((3U == (3U & 
                                               (__VdfgRegularize_hebeb780c_0_2 
                                                >> 0x0000001aU))) 
                                       | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66)) 
                                      << 1U) | ((3U 
                                                 == 
                                                 (3U 
                                                  & (__VdfgRegularize_hebeb780c_0_2 
                                                     >> 0x00000018U))) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_67)))) 
             << 0x0000000cU) | ((((((3U == (3U & (__VdfgRegularize_hebeb780c_0_2 
                                                  >> 0x00000016U))) 
                                    | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68)) 
                                   << 3U) | (((3U == 
                                               (3U 
                                                & (__VdfgRegularize_hebeb780c_0_2 
                                                   >> 0x00000014U))) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_69)) 
                                             << 2U)) 
                                 | ((((3U == (3U & 
                                              (__VdfgRegularize_hebeb780c_0_2 
                                               >> 0x00000012U))) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_70)) 
                                     << 1U) | ((3U 
                                                == 
                                                (3U 
                                                 & (__VdfgRegularize_hebeb780c_0_2 
                                                    >> 0x00000010U))) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71)))) 
                                << 8U)) | (((((((3U 
                                                 == 
                                                 (3U 
                                                  & (__VdfgRegularize_hebeb780c_0_2 
                                                     >> 0x0000000eU))) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72)) 
                                               << 3U) 
                                              | (((3U 
                                                   == 
                                                   (3U 
                                                    & (__VdfgRegularize_hebeb780c_0_2 
                                                       >> 0x0000000cU))) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_73)) 
                                                 << 2U)) 
                                             | ((((3U 
                                                   == 
                                                   (3U 
                                                    & (__VdfgRegularize_hebeb780c_0_2 
                                                       >> 0x0000000aU))) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_74)) 
                                                 << 1U) 
                                                | ((3U 
                                                    == 
                                                    (3U 
                                                     & (__VdfgRegularize_hebeb780c_0_2 
                                                        >> 8U))) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_75)))) 
                                            << 4U) 
                                           | (((((3U 
                                                  == 
                                                  (3U 
                                                   & (__VdfgRegularize_hebeb780c_0_2 
                                                      >> 6U))) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76)) 
                                                << 3U) 
                                               | (((3U 
                                                    == 
                                                    (3U 
                                                     & (__VdfgRegularize_hebeb780c_0_2 
                                                        >> 4U))) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77)) 
                                                  << 2U)) 
                                              | ((((3U 
                                                    == 
                                                    (3U 
                                                     & (__VdfgRegularize_hebeb780c_0_2 
                                                        >> 2U))) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_78)) 
                                                  << 1U) 
                                                 | ((3U 
                                                     == 
                                                     (3U 
                                                      & __VdfgRegularize_hebeb780c_0_2)) 
                                                    | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_49 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_shifter_path)
                                                  ? (IData)(
                                                            (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_lshift)
                                                               ? 
                                                              ((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])) 
                                                               << 0x0000001fU)
                                                               : 
                                                              (((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__arith)))))) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U])))) 
                                                             >> 
                                                             (0x0000001fU 
                                                              & ((- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_lshift))) 
                                                                 ^ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__shift_amount)))))
                                                  : (IData)(
                                                            (vlSelfRef.__VdfgRegularize_hebeb780c_0_29 
                                                             >> 1U)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken 
        = (1U & ((0U != (0x01800000U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs[0U])) 
                 | (1U & (((1U & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U])
                            ? ((((((((4U & ((0x0000000cU 
                                             & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                >> 0x0000001cU)) 
                                            ^ ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_64) 
                                               << 2U))) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_65) 
                                         << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_66))) 
                                    << 6U) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_67) 
                                               << 5U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_68) 
                                                 << 4U))) 
                                  | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_69) 
                                       << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_70) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_71) 
                                         << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_72)))) 
                                 << 8U) | ((((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_73) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_74) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_75) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_76))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_77) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_78) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_79) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in))))) 
                               + (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b) 
                                   << 1U) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in)))
                            : ((((((((4U & ((0x0000000cU 
                                             & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                >> 0x0000001cU)) 
                                            ^ ((3U 
                                                == 
                                                (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                 >> 0x0000001eU)) 
                                               << 2U))) 
                                     | (((3U == (3U 
                                                 & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                    >> 0x0000001cU))) 
                                         << 1U) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                       >> 0x0000001aU))))) 
                                    << 6U) | (((3U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                    >> 0x00000018U))) 
                                               << 5U) 
                                              | ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                      >> 0x00000016U))) 
                                                 << 4U))) 
                                  | ((((3U == (3U & 
                                               (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                >> 0x00000014U))) 
                                       << 3U) | ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                      >> 0x00000012U))) 
                                                 << 2U)) 
                                     | (((3U == (3U 
                                                 & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                    >> 0x00000010U))) 
                                         << 1U) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                       >> 0x0000000eU)))))) 
                                 << 8U) | ((((((3U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                    >> 0x0000000cU))) 
                                               << 3U) 
                                              | ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                      >> 0x0000000aU))) 
                                                 << 2U)) 
                                             | (((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                      >> 8U))) 
                                                 << 1U) 
                                                | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                       >> 6U))))) 
                                            << 4U) 
                                           | ((((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                     >> 4U))) 
                                                << 3U) 
                                               | ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.__VdfgRegularize_hebeb780c_0_6 
                                                       >> 2U))) 
                                                  << 2U)) 
                                              | (((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.__VdfgRegularize_hebeb780c_0_6)) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in))))) 
                               + (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in))) 
                          >> 0x00000010U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc 
        = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_57)
             ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U]
             : ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
                 << 0x0000001fU) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                    >> 1U))) + ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken)
                                                 ? 
                                                VL_EXTENDS_II(32,21, vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pc_offset_r)
                                                 : 4U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__potential_branch_exception 
        = (1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc 
                  >> 1U) & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                            >> 2U)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__alu_issued 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__potential_branch_exception)) 
                 & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to)));
}

void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_24;
    __VdfgRegularize_hebeb780c_0_24 = 0;
    // Body
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr 
        = (1U & ((1U == (7U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                << 2U) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                          >> 0x0000001eU))))
                  ? vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address
                  : ((5U == (7U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                    << 2U) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                              >> 0x0000001eU))))
                      ? vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address
                      : ((2U == (7U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                        << 2U) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                  >> 0x0000001eU)))) 
                         & (0U != (3U & vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be = 0U;
    if ((0U == (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
                      >> 0x0000000eU)))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
               | (0x0fU & ((IData)(1U) << (3U & vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address))));
    } else if ((1U == (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
                             >> 0x0000000eU)))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
               | (0x0fU & ((IData)(1U) << (3U & vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address))));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be 
            = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
               | (0x0fU & ((IData)(1U) << (1U | (2U 
                                                 & vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address)))));
    } else {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be = 0x0fU;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be) 
           & (- (IData)((1U & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs[0U] 
                                  >> 0x0000000dU))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[0U][0U] 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__.rd;
    __VdfgRegularize_hebeb780c_0_24 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr) 
                                       & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                          >> 1U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_ack[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_ack[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_ack[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__alu_issued;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__alu_issued;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_instruction_id[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_data[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[0U][0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_unit_select[1U] = 1U;
    if (((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_done[1U] 
          & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_ack[1U]))) 
         & (~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U])))) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_unit_select[1U] = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_ack[1U] = 1U;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] = 1U;
    }
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_instruction_id
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_unit_select[1U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_data[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[1U]
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_unit_select[1U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_exception 
        = (((QData)((IData)((((IData)(__VdfgRegularize_hebeb780c_0_24) 
                              << 5U) | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_store_r)
                                         ? 6U : 4U)))) 
            << 0x00000023U) | (((QData)((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.virtual_address)) 
                                << 3U) | (QData)((IData)(
                                                         (7U 
                                                          & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                             >> 2U))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state 
        = ((0U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
            ? 1U : ((1U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
                     ? 2U : ((2U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
                              ? ((0x00000080U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__init_clear_counter__DOT__counter))
                                  ? 3U : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
                              : ((3U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
                                  ? (((IData)(__VdfgRegularize_hebeb780c_0_24) 
                                      | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__potential_branch_exception))
                                      ? 5U : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
                                  : ((4U == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
                                      ? ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__tlb_clear_counter__DOT__counter 
                                          >> 0x0000001fU)
                                          ? 3U : vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)
                                      : (3U & (- (IData)(
                                                         (5U 
                                                          == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state)))))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U] 
        = (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                          >> 8U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception 
        = ((7ULL & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception) 
           | (((QData)((IData)((1U & ((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                        >> 3U) & (0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs[0U] 
                                                      >> 1U)))) 
                                      | ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__illegal_instruction) 
                                         | ((IData)(
                                                    (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_exception 
                                                     >> 0x00000028U)) 
                                            | (IData)(
                                                      (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__br_exception 
                                                       >> 0x00000028U)))))))) 
               << 0x00000028U) | (0x000000fffffffff8ULL 
                                  & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16)
                                       ? (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__br_exception 
                                          >> 3U) : 
                                      ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__illegal_instruction)
                                        ? (0x0000000200000000ULL 
                                           | (QData)((IData)(
                                                             ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                                               << 0x0000001fU) 
                                                              | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                                                 >> 1U)))))
                                        : ((IData)(__VdfgRegularize_hebeb780c_0_24)
                                            ? (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_exception 
                                               >> 3U)
                                            : ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ecall)
                                                ? ((QData)((IData)(
                                                                   (0x0000001fU 
                                                                    & (0x0005a128U 
                                                                       >> 
                                                                       ((IData)(5U) 
                                                                        * (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level)))))) 
                                                   << 0x00000020U)
                                                : 0x0000000300000000ULL)))) 
                                     << 3U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[0U] 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[0U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U]
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U]]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[1U] = 1U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[1U] 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[1U] 
           ^ vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U]
           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U]]);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_for_rd[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_for_rd[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U]];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__update_lvt[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__update_lvt[1U] 
        = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] 
            & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_for_rd[1U] 
               == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U])) 
           & (~ (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[0U] 
                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U] 
                    == vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U]))));
}

void Vtb_writeback_store_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store__0(Vtb_writeback_store_interface* vlSelf);
void Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0(Vtb_ras_interface* vlSelf);
void Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__0(Vtb_load_store_queue_interface* vlSelf);
void Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__1(Vtb_fifo_interface__D2* vlSelf);
void Vtb_fetch_sub_unit_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____1(Vtb_fetch_sub_unit_interface* vlSelf);
void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__0(Vtb_local_memory_interface* vlSelf);
void Vtb_branch_predictor_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0(Vtb_branch_predictor_interface* vlSelf);
void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__instruction_bram__0(Vtb_local_memory_interface* vlSelf);
void Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____0(Vtb_unit_writeback_interface* vlSelf);
void Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__2(Vtb_fifo_interface__D2* vlSelf);
void Vtb_fifo_interface__D3___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0(Vtb_fifo_interface__D3* vlSelf);
void Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__1(Vtb_ras_interface* vlSelf);
void Vtb_fifo_interface__D9___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__2(Vtb_fifo_interface__D9* vlSelf);
void Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__1(Vtb_load_store_queue_interface* vlSelf);
void Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET____2(Vtb_unit_issue_interface* vlSelf);
void Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET____2(Vtb_unit_issue_interface* vlSelf);
void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__1(Vtb_local_memory_interface* vlSelf);
void Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____1(Vtb_unit_writeback_interface* vlSelf);
void Vtb_tlb_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb__0(Vtb_tlb_interface* vlSelf);
void Vtb_unit_writeback_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET____0(Vtb_unit_writeback_interface* vlSelf);
void Vtb_fifo_interface__D3___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0(Vtb_fifo_interface__D3* vlSelf);

void Vtb___024root___eval_body__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_body__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vtb_writeback_store_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store));
        Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras));
        Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq));
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
        Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo));
        Vtb_fetch_sub_unit_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__));
        Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__0((&vlSymsp->TOP__tb__DOT__uut__DOT__data_bram));
        Vtb_branch_predictor_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp));
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__instruction_bram__0((&vlSymsp->TOP__tb__DOT__uut__DOT__instruction_bram));
        Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__));
        Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__2((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo));
        Vtb_fifo_interface__D3___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo));
        Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras));
        Vtb_fifo_interface__D9___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__2((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes));
        Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq));
        Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET____2((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__));
        Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET____2((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__));
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_instruction_id[1U] 
                = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.id;
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__toggle 
                = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                    >> 0x0000000eU) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop));
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__new_index 
                = (7U & ((((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count) 
                             >> 3U) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush))
                            ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram
                           [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__read_index]
                            : (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index)) 
                          + (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras.push)) 
                         - ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction) 
                            & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.is_return) 
                               & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.__VdfgRegularize_hebeb780c_0_95)))));
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data 
                = ((vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.__VdfgRegularize_hebeb780c_0_98 
                    << 8U) | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.__VdfgRegularize_hebeb780c_0_25));
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_done[0U] 
                = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__.possible_issue;
        }
        Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__1((&vlSymsp->TOP__tb__DOT__uut__DOT__data_bram));
        Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__));
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_done[1U] 
                = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.done;
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[0U][1U] 
                = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.rd;
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[1U][1U] 
                = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.rd;
        }
    }
    if (VL_UNLIKELY(((2ULL & vlSelfRef.__VnbaTriggered[0U])))) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__trace_fd,"%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h,%h\n",48
                          , '#',32,(vlSelfRef.tb__DOT__cyc_cnt_reg 
                                    & (- (IData)((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tb__DOT__ext_reset) 
                                                      | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_hold)))))))
                          , '#',1,(IData)(vlSelfRef.tb__DOT__ext_reset)
                          , '#',1,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_hold
                          , '#',1,(IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush)
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc
                          , '#',3,(IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__pc_id)
                          , '#',1,vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push
                          , '#',1,(IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.pop)
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetch_instruction
                          , '#',1,(1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
                                         >> 1U)), '#',3,
                          (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U] 
                                 >> 2U)), '#',32,((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[2U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
                                                     >> 2U))
                          , '#',32,((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[1U] 
                                     << 0x0000001eU) 
                                    | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode[0U] 
                                       >> 2U)), '#',1,(IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance)
                          , '#',1,(1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                         >> 1U)), '#',3,
                          (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                 >> 2U)), '#',32,((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[3U] 
                                                   << 0x0000001fU) 
                                                  | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                                     >> 1U))
                          , '#',32,((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[2U] 
                                     << 0x0000001fU) 
                                    | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[1U] 
                                       >> 1U)), '#',1,(IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict)
                          , '#',1,vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__predicted_pc
                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way]
                          , '#',1,vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction
                          , '#',1,(IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__toggle)
                          , '#',1,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush
                          , '#',32,vlSelfRef.tb__DOT__register_file[31U]
                          , '#',32,vlSelfRef.tb__DOT__register_file[1U]
                          , '#',32,vlSelfRef.tb__DOT__register_file[2U]
                          , '#',32,vlSelfRef.tb__DOT__register_file[20U]
                          , '#',1,(1U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to))
                          , '#',3,(7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                         >> 2U)), '#',1,
                          (1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                 >> 1U)), '#',3,(7U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                                    >> 2U))
                          , '#',1,(1U & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                         >> 2U)), '#',3,
                          (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                 >> 2U)), '#',1,(IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__.possible_issue)
                          , '#',3,(7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                         >> 2U)), '#',32,vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__.rd
                          , '#',1,(IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.done)
                          , '#',3,vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.id
                          , '#',32,vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.rd
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[0U]
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[1U]
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[2U]
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[3U]
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[4U]
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[5U]
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[6U]
                          , '#',32,vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[7U]);
        }
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            if (vlSelfRef.__VdlySet__tb__DOT__sys_clk__v0) {
                vlSelfRef.__VdlySet__tb__DOT__sys_clk__v0 = 0U;
                vlSelfRef.tb__DOT__sys_clk = 0U;
            }
            if (vlSelfRef.__VdlySet__tb__DOT__sys_clk__v1) {
                vlSelfRef.__VdlySet__tb__DOT__sys_clk__v1 = 0U;
                vlSelfRef.tb__DOT__sys_clk = vlSelfRef.__VdlyVal__tb__DOT__sys_clk__v1;
            }
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__7(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            if (vlSelfRef.__VdlySet__tb__DOT__ext_reset__v0) {
                vlSelfRef.__VdlySet__tb__DOT__ext_reset__v0 = 0U;
                vlSelfRef.tb__DOT__ext_reset = 1U;
            }
            if (vlSelfRef.__VdlySet__tb__DOT__ext_reset__v1) {
                vlSelfRef.__VdlySet__tb__DOT__ext_reset__v1 = 0U;
                vlSelfRef.tb__DOT__ext_reset = 0U;
            }
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__rst 
                = ((IData)(vlSelfRef.tb__DOT__ext_reset) 
                   | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_issue_flush));
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vtb_tlb_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb));
        Vtb_unit_writeback_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__));
        Vtb___024root___nba_comb__TOP__1(vlSelf);
        Vtb_fifo_interface__D3___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo));
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__new_forwarded_store 
                = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store) 
                   & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.push));
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_id_match 
                = (2U & (- (IData)((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r) 
                                     | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__new_forwarded_store)) 
                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] 
                                       & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U] 
                                          == (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_needed)))))));
        }
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__rst 
                = ((IData)(vlSelfRef.tb__DOT__ext_reset) 
                   | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush));
        }
    }
}

void Vtb___024root___timing_ready(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_ready\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h0ee95ea3__0.ready("@(negedge tb.sys_clk)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h0ee95ea3__0.moveToResumeQueue(
                                                          "@(negedge tb.sys_clk)");
    vlSelfRef.__VtrigSched_h0ee95ea3__0.resume("@(negedge tb.sys_clk)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb___024root____VbeforeTrig_h0ee95ea3__0(Vtb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____VbeforeTrig_h0ee95ea3__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb__DOT__sys_clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sys_clk__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sys_clk__0 
        = vlSelfRef.tb__DOT__sys_clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h0ee95ea3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
