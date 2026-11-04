// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf);
void Vtb___024root___timing_ready(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sys_clk__0 
        = vlSelfRef.tb__DOT__sys_clk;
    Vtb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__0(Vtb_local_memory_interface* vlSelf);
VL_ATTR_COLD void Vtb_fifo_interface__D2___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__0(Vtb_fifo_interface__D2* vlSelf);
VL_ATTR_COLD void Vtb_unit_writeback_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____0(Vtb_unit_writeback_interface* vlSelf);
void Vtb_fifo_interface__D3___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0(Vtb_fifo_interface__D3* vlSelf);
VL_ATTR_COLD void Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0(Vtb_branch_predictor_interface* vlSelf);
void Vtb_writeback_store_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store__0(Vtb_writeback_store_interface* vlSelf);
VL_ATTR_COLD void Vtb_load_store_queue_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__0(Vtb_load_store_queue_interface* vlSelf);
VL_ATTR_COLD void Vtb_ras_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0(Vtb_ras_interface* vlSelf);
void Vtb_fetch_sub_unit_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____1(Vtb_fetch_sub_unit_interface* vlSelf);
void Vtb_fifo_interface__D9___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__2(Vtb_fifo_interface__D9* vlSelf);
void Vtb_tlb_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb__0(Vtb_tlb_interface* vlSelf);
void Vtb_unit_writeback_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET____0(Vtb_unit_writeback_interface* vlSelf);
void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__instruction_bram__0(Vtb_local_memory_interface* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__1(Vtb_local_memory_interface* vlSelf);
VL_ATTR_COLD void Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__1(Vtb_branch_predictor_interface* vlSelf);
void Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET____2(Vtb_unit_issue_interface* vlSelf);
void Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET____2(Vtb_unit_issue_interface* vlSelf);
VL_ATTR_COLD void Vtb_unit_writeback_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____1(Vtb_unit_writeback_interface* vlSelf);
void Vtb_fifo_interface__D3___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0(Vtb_fifo_interface__D3* vlSelf);
VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__2(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_stl(Vtb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                }
                Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__0((&vlSymsp->TOP__tb__DOT__uut__DOT__data_bram));
                Vtb_fifo_interface__D2___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo));
                Vtb_unit_writeback_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__));
                Vtb_fifo_interface__D3___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo));
                Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp));
                Vtb_writeback_store_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store));
                Vtb_load_store_queue_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq));
                Vtb_ras_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__ras));
                Vtb_fetch_sub_unit_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__));
                Vtb_fifo_interface__D9___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__2((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes));
                Vtb_tlb_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb));
                Vtb_unit_writeback_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET____0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__));
                Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__instruction_bram__0((&vlSymsp->TOP__tb__DOT__uut__DOT__instruction_bram));
                Vtb___024root___stl_sequent__TOP__1(vlSelf);
                Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__1((&vlSymsp->TOP__tb__DOT__uut__DOT__data_bram));
                Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp));
                Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET____2((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__));
                Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET____2((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__));
                Vtb_unit_writeback_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____1((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__));
                Vtb_fifo_interface__D3___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0((&vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo));
                Vtb___024root___stl_sequent__TOP__2(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__ico(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__ico\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__obs(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__obs\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__react(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_dump_triggers__react\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__DOT__branch_ram 
        = VlUnpacked<IData/*31:0*/, 512>{{
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U
    }};
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__DOT__branch_ram 
        = VlUnpacked<IData/*31:0*/, 512>{{
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U
    }};
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__DOT__branch_ram 
        = VlUnpacked<SData/*11:0*/, 512>{{
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }};
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__branch_ram 
        = VlUnpacked<SData/*11:0*/, 512>{{
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
    }};
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][8U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][9U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][10U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][11U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][12U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][13U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][14U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][15U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][16U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][17U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][18U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][19U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][20U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][21U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][22U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][23U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][24U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][25U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][26U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][27U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][28U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][29U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][30U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[0U][31U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][8U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][9U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][10U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][11U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][12U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][13U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][14U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][15U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][16U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][17U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][18U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][19U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][20U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][21U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][22U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][23U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][24U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][25U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][26U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][27U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][28U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][29U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][30U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__sel_bank[1U][31U] = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[1U][0U] = 0U;
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 0x00000020U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[8U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[9U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[10U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[11U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[12U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[13U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[14U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[15U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[16U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[17U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[18U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[19U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[20U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[21U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[22U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[23U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[24U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[25U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[26U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[27U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[28U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[29U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[30U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[31U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[7U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__last_unit = 0U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v1 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v2 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v3 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v4 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v5 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v6 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v7 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v8 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v9 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v10 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v11 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v12 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v13 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v14 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v15 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v16 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v17 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v18 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v19 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v20 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v21 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v22 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v23 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v24 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v25 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v26 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v27 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v28 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v29 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v30 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v31 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v0 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v1 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v2 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v3 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v4 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v5 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v6 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v7 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v8 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v9 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v10 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v11 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v12 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v13 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v14 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v15 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v16 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v17 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v18 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v19 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v20 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v21 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v22 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v23 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v24 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v25 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v26 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v27 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v28 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v29 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v30 = 1U;
    vlSelfRef.__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v31 = 1U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[0U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[1U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[2U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[3U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[4U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[5U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[6U] = 0U;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[7U] = 0U;
    VL_READMEM_N(true, 32, 4096, 0, "/Users/ananevn002/Documents/u/s5/arch/lr2/riscv-lab/src/variant2.hex"s
                 ,  &(vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram)
                 , 0U, 0x00000fffU);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
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
    // Body
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__rst 
        = ((IData)(vlSelfRef.tb__DOT__ext_reset) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_issue_flush));
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
    vlSelfRef.tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b 
        = (0x00000fffU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                          [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                          >> 0x00000012U));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__unit_data_array[0U] 
        = vlSelfRef.tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_a;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = (0x0000001fU 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                    >> 7U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_15 = (0x0000001fU 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                    >> 0x0000000fU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle 
        = (1U & ((~ ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count) 
                     >> 3U)) & (~ (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.valid))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (7U 
                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                   >> 0x0000000cU));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_select__DOT__one_hot 
        = (8U == (0x0000000fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                 [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][2U] 
                                 >> 0x0000000cU)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_59 = ((4U 
                                                  & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jal_jalr_ex)) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_return) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_call)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = (3U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                                                    >> 0x00000010U));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__predicted_pc[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__read_data;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__predicted_pc[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__read_data;
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
    __VdfgRegularize_hebeb780c_0_44 = (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table
                                             [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex] 
                                             >> 3U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000001fU 
                                                & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table
                                                   [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id] 
                                                   >> 2U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_43 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex] 
                                                    >> 4U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex] 
                                                    >> 2U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__machine_write 
        = (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r) 
            & (0x0000000cU == (0x0000000cU & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U]))) 
           & (3U != (3U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1[3U] 
                           >> 4U))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_45 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__mret) 
                                                 | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__sret));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_26 = (1U 
                                                 & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                    [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][0U] 
                                                    >> 3U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex) 
                                                 & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r) 
                                                    & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex 
                                                       >> 1U)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__read_data;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__read_data;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_instruction_id[0U] 
        = (7U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                 >> 2U));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (IData)(
                                                        (0x02000000U 
                                                         == 
                                                         (0x06000000U 
                                                          & vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U])));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r) 
           & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
              >> 1U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_data_array[0U] 
        = vlSelfRef.tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_b;
    if (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_init_clear) {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id 
            = (7U & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__toggle_id 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index;
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id[0U] 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index;
    } else {
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id 
            = (7U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                      << 0x0000001eU) | (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                         >> 2U)));
        vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__toggle_id 
            = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id;
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x0000000dU))];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x00000012U))];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x0000000dU))];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                         >> 0x00000012U))];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetch_instruction 
        = ((0U >= (1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out)))
            ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__unit_data_array
           [(1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.data_out))]
            : 0U);
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_link 
        = ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14)) 
           | (5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_14)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_link 
        = ((1U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15)) 
           | (5U == (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_15)));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr_m__DOT__clr 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr) 
           & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__next_privilege_level 
        = (3U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_45)
                  ? ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__mret)
                      ? (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                         >> 0x0000000bU) : (1U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus 
                                                  >> 8U)))
                  : ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level) 
                     | (- (IData)((1U & (IData)((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r 
                                                 >> 0x00000028U))))))));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__br_exception 
        = (((QData)((IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                             << 5U))) << 0x00000023U) 
           | (((QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex)) 
               << 3U) | (QData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jmp_id))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__one_hot 
        = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_97) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_42));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
        = ((0U >= (1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out)))
            ? vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_data_array
           [(1U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out))]
            : 0U);
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[1U][0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[1U][1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[1U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[0U][0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[0U][1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[1U];
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__write_data 
        = (0x00000800U | ((0x000007e0U & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex 
                                          >> 6U)) | 
                          (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_59) 
                            << 2U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_96))));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[0U]][0U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_data[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[1U]][1U];
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict 
        = (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[0U] 
           & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__rs_inuse[0U] 
              & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                 >> 7U)));
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
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_24;
    __VdfgRegularize_hebeb780c_0_24 = 0;
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_52;
    __VdfgRegularize_hebeb780c_0_52 = 0;
    // Body
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_done[1U] 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.done;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_instruction_id[1U] 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.id;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__toggle 
        = ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
            [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
            [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
            >> 0x0000000eU) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__operands_ready 
        = (1U & (~ ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store) 
                    | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready 
        = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
           & (0x0000000dU | (2U & ((~ (((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r) 
                                        | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_done)) 
                                       & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store))) 
                                   << 1U))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__rst 
        = ((IData)(vlSelfRef.tb__DOT__ext_reset) | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[0U][0U] 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__.rd;
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_operands_ready 
        = ((0x0000000cU & (- (IData)((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__operands_ready)))) 
           | ((2U & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict)) 
                     << 1U)) | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__operands_ready)));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = (0U 
                                                 != 
                                                 ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage) 
                                                  & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_operands_ready)));
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
    __VdfgRegularize_hebeb780c_0_24 = ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr) 
                                       & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                                          >> 1U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__potential_branch_exception 
        = (1U & ((vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc 
                  >> 1U) & ((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                            >> 2U)));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__alu_issued 
        = (1U & ((~ (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__potential_branch_exception)) 
                 & (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to)));
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
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_done[0U] 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__.possible_issue;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[0U][1U] 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.rd;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[1U][1U] 
        = vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.rd;
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__new_forwarded_store 
        = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.forwarded_store) 
           & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.push));
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
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_id_match 
        = (2U & (- (IData)((((IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r) 
                             | (IData)(vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__new_forwarded_store)) 
                            & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired[1U] 
                               & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U] 
                                  == (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_needed)))))));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[0U] 
        = (0x0000001fU & (vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                          >> 8U));
    vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[1U] 
        = vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table
        [vlSelfRef.tb__DOT__uut__DOT__cpu__DOT__ids_retiring[1U]];
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

bool Vtb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.sys_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb.sys_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([initial_nba])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__sys_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15606994203392263511ull);
    vlSelf->tb__DOT__ext_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2156234230936896906ull);
    VL_SCOPED_RAND_RESET_W(95, vlSelf->tb__DOT__tr, __VscopeHash, 5535883319018078976ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->tb__DOT__sel_bank[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6976384873845570111ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__sel_bank1[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13003687481250281727ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__register_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15587067868096797879ull);
    }
    vlSelf->tb__DOT__cyc_cnt_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8495549070312337801ull);
    vlSelf->tb__DOT__trace_fd = 0;
    vlSelf->tb__DOT__uut__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10902351011875088038ull);
    vlSelf->tb__DOT__uut__DOT__processor_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 659135396152163868ull);
    vlSelf->tb__DOT__uut__DOT__axi_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17184699719492994867ull);
    vlSelf->tb__DOT__uut__DOT__processor_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17457634992162405446ull);
    vlSelf->tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_b = 0;
    vlSelf->tb__DOT__uut__DOT____Vcellout__inst_data_ram__data_out_a = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__sc_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2823765982951834367ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__sc_success = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 285745784467087323ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_exception_is_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5187740897550209926ull);
    VL_SCOPED_RAND_RESET_W(97, vlSelf->tb__DOT__uut__DOT__cpu__DOT__issue, __VscopeHash, 3978332506820610220ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__rs_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9972857795320367680ull);
    }
    VL_SCOPED_RAND_RESET_W(77, vlSelf->tb__DOT__uut__DOT__cpu__DOT__pg_inputs, __VscopeHash, 7639358597344937101ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->tb__DOT__uut__DOT__cpu__DOT__mul_inputs, __VscopeHash, 13267991461121864190ull);
    VL_SCOPED_RAND_RESET_W(67, vlSelf->tb__DOT__uut__DOT__cpu__DOT__div_inputs, __VscopeHash, 13373787956004463549ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tlb_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16593317465894183588ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__asid = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4502147430689482805ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__pc_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13363227967109218010ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__pc_id_available = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6153011866705874457ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__fetch_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 980493725778631952ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__rs_id[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13739990299531124129ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__rs_inuse[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 780020392615486069ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2723799659492296458ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 166057892233466014ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__exception_with_rd_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3051681278533631043ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__system_op_or_exception_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9027109384192360883ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__instruction_retired = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14331091070441260369ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__retire_inc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14064316073943146000ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__exception_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2439230094747646071ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_init_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14141993121401009157ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_fetch_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2873388383524414499ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_issue_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12634058944042940411ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_issue_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137069779357390380ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc_override = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13082984983575650426ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_supress_writeback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10433934723509628399ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6886588748440345525ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__csr_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 309449727998124600ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__ids_retiring[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10125448455235675440ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__retired[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12008146875056974725ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__retired_rd_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12478833146761268561ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_for_rd[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14768130653596263714ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_alu_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12327066544323562877ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_branch_or_jump_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9947338996554797876ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_load_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5903294471831969865ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_store_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13246590372249666353ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_mul_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3668811508798726897ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_div_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3904806763225401434ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_misc_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8010713576622089071ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_rs1_forwarding_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16449367214105236256ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_rs2_forwarding_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1746902030886194378ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_rs1_and_rs2_forwarding_needed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11954053805356501257ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_num_instructions_completing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916210946818072333ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_num_instructions_in_flight = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2989461615155973998ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__tr_num_of_instructions_pending_writeback = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6545804355414081666ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetch_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3674701247768002783ull);
    VL_SCOPED_RAND_RESET_W(69, vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode, __VscopeHash, 7735599703809456883ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12908902507245697673ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_issued = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 945032293470429730ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__pc_table[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3634198237833021154ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__instruction_table[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12196448254743631033ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__valid_fetch_addr_table[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9190945579046652409ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_addr_table[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16116344268220788583ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_metadata_table[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11231438569519734384ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_table[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15993580481012797909ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__clear_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17458921254163853562ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2383223490909186438ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__fetched_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 43574031886902486ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_status_rs[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4004339964902920694ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__exception_with_rd_complete_status_rs[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13128070854388452020ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__retired_status_rs[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9699503486193583482ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__rd_to_id_table[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11616325698069356807ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3350923939414740573ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1111930261769008392ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__1__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13535901380370753455ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__1__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11980463532070573210ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__for4__BRA__0__KET____DOT__retired_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1824104198802522632ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for3__BRA__0__KET____DOT__retired_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5067034872166517796ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__1__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7305855755652803649ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for2__BRA__0__KET____DOT__exception_complete_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14222343078797659064ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__1__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1329476169129064838ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__toggle_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7602281200062439584ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__for1__BRA__0__KET____DOT__issued_toggle_mem_rs__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15144112067171397592ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__system_op_or_exception_complete_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3156708055787245784ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__toggle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4559736799459741823ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__store_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2400616248866050520ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__toggle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3673123307441077039ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__read_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12275689217408290624ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7373212590039917332ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__issued_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11899405045563168035ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decoded_issued_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2659210128175193795ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__toggle_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15421912661768777728ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_toggle_mem__DOT__id_toggle_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18162376720275810590ull);
    }
    VL_SCOPED_RAND_RESET_W(93, vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_inputs, __VscopeHash, 9491225652625567938ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3899006007550442577ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_exception = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 7869699704997657439ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6429106898239510154ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17783404887741797847ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18371710054051211948ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_data_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18216705116796029432ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__last_unit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10072998651226260103ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15471060777993243778ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15773280598642590312ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__compare_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4357908827811018674ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__address_conflict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3558866865166114808ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__wb_hold_for_store_ids = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2073710132847339336ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7283300857506108932ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(80, vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries[__Vi0], __VscopeHash, 1344186426298179872ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__new_forwarded_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1426108263483134027ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__needed_id_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5767751508412285807ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13471214778900088313ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1207870626264420690ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12908132891041563922ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8972983317028226730ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__write_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7457866775904286880ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1400015527717333769ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9876762573094095971ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_select__DOT__one_hot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6663736407702318917ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_select__DOT__int_array[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8498746900415516361ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8126707193369177520ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__new_jump_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13942997877313135539ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__predicted_pc[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4342232508282576831ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__replacement_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4185811487140052498ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__tag_update_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7950412461232915931ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__target_update_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3348073985848371137ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13973018521102153197ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__read_data = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk1__DOT__branch_tag_banks__BRA__1__KET____DOT__tag_bank__read_data = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__0__KET____DOT__addr_table__read_data = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT____Vcellout__genblk2__DOT__branch_table_banks__BRA__1__KET____DOT__addr_table__read_data = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk1__DOT__branch_tag_banks__BRA__0__KET____DOT__tag_bank__DOT__write_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1982126910227704485ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__one_hot = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1979601225969082798ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__genblk4__DOT__hit_way_conv__DOT__int_array[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5481750832536524881ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__unit_data_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 821011010706779169ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15189503277320608082ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__stage2_phys_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15105041699192685676ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__hit_way_conv__DOT__int_array[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14837310641572165298ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__attributes_fifo__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906666952795749870ull);
    VL_SCOPED_RAND_RESET_W(134, vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_inputs, __VscopeHash, 7825714540073158471ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_flush_required = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3450935203446452114ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12059087087643821497ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__potential_branch_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784087388894711247ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__br_exception = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 15395207122045425602ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__illegal_instruction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7427572450197892409ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__state = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__next_state = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__prev_state = 0;
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__i_fence_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15378481779343029203ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__second_cycle_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16003071275764237902ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8088197990945832944ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__sret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11899771132586507490ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 12787244988928745984ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__gc_exception_r = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 3775758509540678050ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_exception = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 8021080532608793433ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_sepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6685937248878963069ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8445129735400281085ull);
    VL_SCOPED_RAND_RESET_W(134, vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__stage1, __VscopeHash, 12054918916510145146ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12666421646624902204ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10588196971033763963ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__instruction_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8602944293114649022ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__processing_csr_m__DOT__clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15175010501785433916ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scratch_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8625135186263262572ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__sip_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17731791326258485504ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__sepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4979644722034467678ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__stime = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11063356550761085571ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__stimecmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2618211989192066683ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__scause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10022121610355263481ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__stval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 500923960109559433ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__sstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1293622923987349376ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__stvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16317167822940370981ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__satp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3602064658082993384ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcycle = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1627251000040371663ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtime = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3331963116937791686ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__minst_ret = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3160877179998873493ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__inst_ret_inc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3120369781153023714ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__machine_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14570643727492928722ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1096038579629734815ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13152859357132033927ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__updated_csr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1721070165154949285ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__invalid_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12904563104735336081ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15933281791609360864ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__swrite_decoder, __VscopeHash, 17308202467141565025ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mwrite_decoder, __VscopeHash, 1148218710551993753ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2623250547143500834ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__privilege_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2597589712957697893ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__next_privilege_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 452716492603672133ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10013950657061011778ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__medeleg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2474084486491492289ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mideleg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11078882095580263653ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mip = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6539478571072126405ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mie_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7464500539167668086ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1948256114195770058ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtimecmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7862859090532940927ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11299644713461967016ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16917804530546395752ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__genblk1__DOT__mstatus_new = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13560672966468287002ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__genblk1__DOT__mcause_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 989362958700085335ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__tlb_clear_counter__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2058806420235967799ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__init_clear_counter__DOT__counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 956885746878111635ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__alu_issued = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3731833658753449066ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_sel[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9093639385076057716ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__alu_selected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6801348419136171180ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_ack[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5935878948545996775ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_instruction_id[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13543576859419330377ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_done[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9087783081166430331ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__unit_rd[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1834281193987191361ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_unit_select[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1704354491359758451ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__retiring_data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9430957295414897428ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__rs_data_set[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11637881121451494663ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__update_lvt[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12845166058489040884ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__commit_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12042012124079100000ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_reg_sel_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16298828055705769968ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__store_id_match = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13767465740204733759ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__0__KET____DOT__register_file_blocks__data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT____Vcellout__for2__BRA__1__KET____DOT__register_file_blocks__data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9492547796906356336ull);
    }
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__sim_registers_unamed, __VscopeHash, 9754402060263404640ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4054612766654356655ull);
    }
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__sim_registers_unamed, __VscopeHash, 5142537142738256160ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__regfile_lvt__DOT__new_bank_sel[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2654480781312034983ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 934654092396696996ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2915866872380863765ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__new_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12870672737670847056ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__lut_ram[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11072332258443303137ull);
    }
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__write_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3248861743816590931ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__read_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1150751057089466219ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5768183604572715736ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_issued_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13443433860905141567ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1707204999071352140ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__branch_taken_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 908334862441752990ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__id_ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4429960278971040221ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4778150237776556905ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2701739107652755242ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__pc_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13923826920974390993ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__instruction_is_completing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12799190260050059236ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jal_jalr_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14089113307310920615ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__jmp_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17461963665142390841ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_return = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1840445054913010684ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__is_call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17332906395122142386ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8529533786346739829ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sign_extended_b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6184874664857685596ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__sub_ls_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11672400723688949037ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14524073219168712105ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__bc__DOT__carry_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15504795540680081717ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__shift_amount = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1404194579865898280ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__alu_unit_block__DOT__shifter__DOT__arith = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1612268052037315297ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_inputs, __VscopeHash, 10806831934867737234ull);
    VL_SCOPED_RAND_RESET_W(126, vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__branch_inputs, __VscopeHash, 16616600918572846174ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_operand_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5036412504954542079ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_unit_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16753270615036663260ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_no_instruction_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18005676182957642708ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__tr_ls_operand_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4036450039169970911ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__environment_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2775602087401422862ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9766850518103372405ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__operands_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16431511053217482751ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_operands_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10873100220007932339ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_for_id_gen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 70897357980045961ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_for_id_gen_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1401215969169261351ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__unit_needed_issue_stage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10280802680574377440ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16282548798459114289ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8858720826666130071ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_stage_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11890848017115873176ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_conflict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15026246016410341436ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14555018874228819668ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13646689034514119716ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_alu_rs2_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17061442871757292051ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pre_alu_rs1_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2618205769885311488ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_use_regfile = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14295788706417391310ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs2_use_regfile = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4758553689332102147ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_logic_op_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12456371573027726280ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_subtract = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14634342976181814577ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_lshift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 341932581148097617ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_shifter_path = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17169475344183134157ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_slt_path = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7467617871324499511ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ls_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11791229086085518729ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_load_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11469926269720814148ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_store_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18422331591579262172ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rs1_link = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17139766183105816940ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__rd_link = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15780405431880103437ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_return = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16175391593567033582ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15227760404359386330ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__br_use_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16791709008631616459ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__pc_offset_r = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2150103922037387665ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ifence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11418356552717476109ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_csr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974800812610525141ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__potential_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17317422072072209842ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1171282488125974578ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2960918169605586066ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2770473024998645123ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5513638490648386886ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__is_ifence_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8847233149597241251ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__illegal_instruction_pattern_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7008195696362198169ull);
    vlSelf->tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__genblk8__DOT__illegal_op_check__DOT__base_legal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11222051917486142762ull);
    vlSelf->tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__addr_b = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4146290190864267642ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb__DOT__uut__DOT__inst_data_ram__DOT__ram_block__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5788466912965119665ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_6 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_9 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_14 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_15 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_19 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_26 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_27 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_29 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_30 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_35 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_42 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_43 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_45 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_49 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_53 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_54 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_57 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_58 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_59 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_60 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_61 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_62 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_64 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_65 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_66 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_67 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_68 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_69 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_70 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_71 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_72 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_73 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_74 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_75 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_76 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_77 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_78 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_79 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_80 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_81 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_83 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_84 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_93 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_94 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_96 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_97 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_99 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_100 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_101 = 0;
    vlSelf->__Vdly__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index = 0;
    vlSelf->__VdlySet__tb__DOT__sys_clk__v0 = 0;
    vlSelf->__VdlyVal__tb__DOT__sys_clk__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__sys_clk__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__ext_reset__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__ext_reset__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v2 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v3 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v4 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v5 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v6 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v7 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v8 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v9 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v10 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v11 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v12 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v13 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v14 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v15 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v16 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v17 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v18 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v19 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v20 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v21 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v22 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v23 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v24 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v25 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v26 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v27 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v28 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v29 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v30 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v31 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v1 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v2 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v3 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v4 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v5 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v6 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v7 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v8 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v9 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v10 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v11 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v12 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v13 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v14 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v15 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v16 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v17 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v18 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v19 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v20 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v21 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v22 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v23 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v24 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v25 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v26 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v27 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v28 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v29 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v30 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v31 = 0;
    VL_ZERO_RESET_W(80, vlSelf->__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0);
    vlSelf->__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries__v0 = 0;
    vlSelf->__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0;
    vlSelf->__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram__v0 = 0;
    vlSelf->__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0;
    vlSelf->__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__1__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0;
    vlSelf->__VdlyVal__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0;
    vlSelf->__VdlyDim0__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0;
    vlSelf->__VdlySet__tb__DOT__uut__DOT__cpu__DOT__register_file_and_writeback_block__DOT__for2__BRA__0__KET____DOT__register_file_blocks__DOT__register_file__v32 = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__pc_id_available = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__push = 0;
    VL_ZERO_RESET_W(69, vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode);
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__decode_advance = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram__data_valid = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__valid = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__data_out = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__ls_is_idle = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__push = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__pop = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__push = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____data_valid = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__valid = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__data_out = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__pop = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras__branch_fetched = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index_fifo__DOT__genblk1__DOT__inflight_count = 0;
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__ras__branch_retired = 0;
    VL_ZERO_RESET_W(97, vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__issue);
    vlSelf->__Vsampled_TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____flush = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__sys_clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
