// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_local_memory_interface___ctor_var_reset(Vtb_local_memory_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_local_memory_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5293259605002647980ull);
}
