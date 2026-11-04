// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0(Vtb_ras_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_retired = ((IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_27) 
                                & (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__toggle));
}

void Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__1(Vtb_ras_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_ras_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_fetched = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction) 
                                & ((vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry
                                    [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way] 
                                    >> 4U) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push)));
    vlSelfRef.push = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction) 
                      & ((vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry
                          [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way] 
                          >> 2U) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.__VdfgRegularize_hebeb780c_0_95)));
}
