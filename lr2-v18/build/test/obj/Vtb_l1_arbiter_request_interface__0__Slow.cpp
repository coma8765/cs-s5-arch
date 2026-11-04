// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_l1_arbiter_request_interface___ctor_var_reset(Vtb_l1_arbiter_request_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_l1_arbiter_request_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10363016170300574568ull);
    vlSelf->__PVT__rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17929851660937197182ull);
    vlSelf->__PVT__be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5293259605002647980ull);
    vlSelf->__PVT__size = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7387879788838415890ull);
    vlSelf->__PVT__is_amo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13291368250699513737ull);
    vlSelf->__PVT__amo = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2019684297065208388ull);
    vlSelf->__PVT__request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16104405464408049176ull);
    vlSelf->__PVT__ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4249660348707286186ull);
}
