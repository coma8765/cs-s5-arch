// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_unit_issue_interface___ctor_var_reset(Vtb_unit_issue_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_unit_issue_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->possible_issue = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12427673410300740882ull);
    vlSelf->new_request_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17225821190744971654ull);
}
