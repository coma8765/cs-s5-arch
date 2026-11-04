// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__1(Vtb_fifo_interface__D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.push = ((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_hold)) 
                      & (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__pc_id_available));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_95 = ((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush)) 
                                                 & ((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc_override)) 
                                                    & (IData)(vlSelfRef.push)));
}

void Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__2(Vtb_fifo_interface__D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D2___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pop = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.data_valid) 
                     | ((~ ((IData)(vlSelfRef.data_out) 
                            >> 1U)) & (IData)(vlSelfRef.valid)));
}
