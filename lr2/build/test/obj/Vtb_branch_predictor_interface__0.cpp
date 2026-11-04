// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_branch_predictor_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0(Vtb_branch_predictor_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_branch_predictor_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.use_prediction = ((IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_42) 
                                | (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_97));
    vlSelfRef.is_return = (1U & (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry
                                 [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way] 
                                 >> 3U));
    vlSelfRef.new_mem_request = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push) 
                                 | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush));
    vlSelfRef.next_pc = ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc_override)
                          ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc
                          : ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush)
                              ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__branch_unit_block__DOT__new_pc_ex
                              : ((IData)(vlSelfRef.use_prediction)
                                  ? ((IData)(vlSelfRef.is_return)
                                      ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__lut_ram
                                     [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__read_index]
                                      : vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__predicted_pc
                                     [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way])
                                  : ((IData)(4U) + vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc))));
}
