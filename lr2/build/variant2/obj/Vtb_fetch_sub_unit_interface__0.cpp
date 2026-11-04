// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_fetch_sub_unit_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____1(Vtb_fetch_sub_unit_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_fetch_sub_unit_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET____1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.flush = ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc_override) 
                       | (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush));
}
