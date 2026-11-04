// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_fifo_interface__D2___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__0(Vtb_fifo_interface__D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D2___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pop = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.data_valid) 
                     | ((~ ((IData)(vlSelfRef.data_out) 
                            >> 1U)) & (IData)(vlSelfRef.valid)));
    vlSelfRef.push = ((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_hold)) 
                      & (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__pc_id_available));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_95 = ((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__branch_flush)) 
                                                 & ((~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_fetch_pc_override)) 
                                                    & (IData)(vlSelfRef.push)));
}

VL_ATTR_COLD void Vtb_fifo_interface__D2___ctor_var_reset(Vtb_fifo_interface__D2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D2___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649745423432011937ull);
    vlSelf->pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10750680354736310321ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11675680895196038875ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_95 = 0;
}
