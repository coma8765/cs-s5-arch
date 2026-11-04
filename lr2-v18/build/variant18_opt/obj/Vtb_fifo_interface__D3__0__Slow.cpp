// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_fifo_interface__D3___ctor_var_reset(Vtb_fifo_interface__D3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D3___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649745423432011937ull);
    vlSelf->pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10750680354736310321ull);
}
