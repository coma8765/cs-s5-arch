// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0(Vtb_branch_predictor_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.use_prediction = ((IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_42) 
                                | (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_97));
    vlSelfRef.is_return = (1U & (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry
                                 [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way] 
                                 >> 3U));
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

VL_ATTR_COLD void Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__1(Vtb_branch_predictor_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_branch_predictor_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__bp__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.new_mem_request = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push) 
                                 | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.flush));
}

VL_ATTR_COLD void Vtb_branch_predictor_interface___ctor_var_reset(Vtb_branch_predictor_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_branch_predictor_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__if_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12998497079675900569ull);
    vlSelf->new_mem_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7853174778908469271ull);
    vlSelf->next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13592750897586193959ull);
    vlSelf->use_prediction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8529335574686170717ull);
    vlSelf->is_return = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14035273606014880315ull);
}
