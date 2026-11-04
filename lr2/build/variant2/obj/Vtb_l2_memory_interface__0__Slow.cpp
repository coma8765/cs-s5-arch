// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_l2_memory_interface___ctor_var_reset(Vtb_l2_memory_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_l2_memory_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14934084843038794831ull);
    vlSelf->__PVT__be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5293259605002647980ull);
    vlSelf->__PVT__rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17929851660937197182ull);
    vlSelf->__PVT__is_amo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13291368250699513737ull);
    vlSelf->__PVT__amo_type_or_burst_size = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14819183104401565863ull);
    vlSelf->__PVT__id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12740855726555439340ull);
    vlSelf->__PVT__request_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16215128508199049655ull);
    vlSelf->__PVT__request_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11587701141688957350ull);
    vlSelf->__PVT__abort = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12056899397033618828ull);
    vlSelf->__PVT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12812822527505751231ull);
    vlSelf->__PVT__wr_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1205664041844020279ull);
    vlSelf->__PVT__wr_data_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 593410200819499601ull);
    vlSelf->__PVT__rd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17824471296722538975ull);
    vlSelf->__PVT__rd_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 33752021820628140ull);
    vlSelf->__PVT__rd_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12151808864564566711ull);
}
