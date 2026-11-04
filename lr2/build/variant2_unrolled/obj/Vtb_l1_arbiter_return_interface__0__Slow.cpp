// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_l1_arbiter_return_interface___ctor_var_reset(Vtb_l1_arbiter_return_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_l1_arbiter_return_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__inv_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 12706032347375221410ull);
    vlSelf->__PVT__inv_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5749337151870049197ull);
    vlSelf->__PVT__inv_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8276819676318584907ull);
    vlSelf->__PVT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10363016170300574568ull);
    vlSelf->__PVT__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10948900208641353254ull);
}
