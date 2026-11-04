// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_ras_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0(Vtb_ras_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_ras_interface___stl_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__ras__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_retired = ((IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_27) 
                                & (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__id_block__DOT__branch_toggle_mem__DOT__toggle));
    vlSelfRef.branch_fetched = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction) 
                                & ((vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry
                                    [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way] 
                                    >> 4U) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push)));
    vlSelfRef.push = ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__bp.use_prediction) 
                      & ((vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__if_entry
                          [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__bp_block__DOT__hit_way] 
                          >> 2U) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.__VdfgRegularize_hebeb780c_0_95)));
}

VL_ATTR_COLD void Vtb_ras_interface___ctor_var_reset(Vtb_ras_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_ras_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649745423432011937ull);
    vlSelf->branch_fetched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12556650465792151565ull);
    vlSelf->branch_retired = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6732468117460270274ull);
}
