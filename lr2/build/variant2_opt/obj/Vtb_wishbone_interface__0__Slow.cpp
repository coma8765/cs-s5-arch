// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_wishbone_interface___ctor_var_reset(Vtb_wishbone_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_wishbone_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->__PVT__sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14660815779230110548ull);
    vlSelf->__PVT__readdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1044655640037865327ull);
    vlSelf->__PVT__writedata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9310491817601422360ull);
    vlSelf->__PVT__stb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11781378398562686851ull);
    vlSelf->__PVT__cyc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18120592264124505075ull);
    vlSelf->__PVT__ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4249660348707286186ull);
}
