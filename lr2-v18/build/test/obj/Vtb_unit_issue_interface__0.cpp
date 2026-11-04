// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET____2(Vtb_unit_issue_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET____2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.possible_issue = (1U & ((vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                       & (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready)) 
                                      >> 1U));
}

void Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET____2(Vtb_unit_issue_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_unit_issue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET____2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.possible_issue = (1U & ((vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                       >> 1U) & (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_ready)));
}
