// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_fetch_sub_unit_interface___ctor_var_reset(Vtb_fetch_sub_unit_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_fetch_sub_unit_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10948900208641353254ull);
    vlSelf->flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
}
