// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_fifo_interface__D3___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0(Vtb_fifo_interface__D3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D3___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pop = (((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_switch_stall)) 
                      & ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__inflight_count) 
                         >> 3U)) & ((~ (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_26)) 
                                    | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.id_done)));
}

void Vtb_fifo_interface__D3___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0(Vtb_fifo_interface__D3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D3___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.push = (1U & ((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unaligned_addr)) 
                            & ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__issue_to) 
                               >> 1U)));
}
