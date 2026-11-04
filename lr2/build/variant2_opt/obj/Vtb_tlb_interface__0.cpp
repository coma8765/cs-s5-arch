// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tlb_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb__0(Vtb_tlb_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_tlb_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.virtual_address = (VL_EXTENDS_II(32,12, (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__ls_offset)) 
                                 + vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__rs_data[0U]);
}
