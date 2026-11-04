// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_writeback_store_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store__0(Vtb_writeback_store_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_writeback_store_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.id_needed = ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__waiting_r)
                            ? (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__needed_id_r)
                            : vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__rs_id[1U]);
}
