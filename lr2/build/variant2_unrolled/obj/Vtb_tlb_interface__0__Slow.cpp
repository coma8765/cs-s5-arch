// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_tlb_interface___ctor_var_reset(Vtb_tlb_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_tlb_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->virtual_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7128700217493028031ull);
    vlSelf->new_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12843770214357168320ull);
    vlSelf->__PVT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
    vlSelf->__PVT__flush_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12313104136083833228ull);
}
