// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_avalon_interface___ctor_var_reset(Vtb_avalon_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_avalon_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916498648420597437ull);
    vlSelf->__PVT__write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996823270756637333ull);
    vlSelf->__PVT__byteenable = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3716190460747184926ull);
    vlSelf->__PVT__readdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1044655640037865327ull);
    vlSelf->__PVT__writedata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9310491817601422360ull);
    vlSelf->__PVT__waitrequest = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15797475948252536538ull);
    vlSelf->__PVT__readdatavalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8969373282490383335ull);
    vlSelf->__PVT__writeresponsevalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2606922946134450979ull);
}
