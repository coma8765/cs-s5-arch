// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_l2_requester_interface___ctor_var_reset(Vtb_l2_requester_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_l2_requester_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5293259605002647980ull);
    vlSelf->__PVT__rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17929851660937197182ull);
    vlSelf->__PVT__is_amo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13291368250699513737ull);
    vlSelf->__PVT__amo_type_or_burst_size = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14819183104401565863ull);
    vlSelf->__PVT__sub_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16402338674496077857ull);
    vlSelf->__PVT__request_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16865483686704503308ull);
    vlSelf->__PVT__request_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 987690409491880718ull);
    vlSelf->__PVT__inv_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 12706032347375221410ull);
    vlSelf->__PVT__inv_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5749337151870049197ull);
    vlSelf->__PVT__inv_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8276819676318584907ull);
    vlSelf->__PVT__con_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9578393993397417784ull);
    vlSelf->__PVT__con_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9786611240771971806ull);
    vlSelf->__PVT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12812822527505751231ull);
    vlSelf->__PVT__wr_data_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6053641569765525215ull);
    vlSelf->__PVT__data_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 819681128747713136ull);
    vlSelf->__PVT__rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17824471296722538975ull);
    vlSelf->__PVT__rd_sub_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 343673424639433211ull);
    vlSelf->__PVT__rd_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12151808864564566711ull);
    vlSelf->__PVT__rd_data_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11557703520154090234ull);
}
