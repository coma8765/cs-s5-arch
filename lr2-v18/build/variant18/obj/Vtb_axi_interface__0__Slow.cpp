// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_axi_interface___ctor_var_reset(Vtb_axi_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_axi_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2587622265565774708ull);
    vlSelf->__PVT__arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16774798297805906817ull);
    vlSelf->__PVT__araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17685200476622543275ull);
    vlSelf->__PVT__arlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2795619241893056918ull);
    vlSelf->__PVT__arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 548378465311237866ull);
    vlSelf->__PVT__arburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17635634856046503333ull);
    vlSelf->__PVT__arcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5383566022461370443ull);
    vlSelf->__PVT__arid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2554568685633023ull);
    vlSelf->__PVT__rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8930348232195030647ull);
    vlSelf->__PVT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125721737830190460ull);
    vlSelf->__PVT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10065165116613087284ull);
    vlSelf->__PVT__rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 810448354640171968ull);
    vlSelf->__PVT__rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5670148758994432807ull);
    vlSelf->__PVT__rid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17711635114162165067ull);
    vlSelf->__PVT__awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9399710217136046492ull);
    vlSelf->__PVT__awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14077405313628979207ull);
    vlSelf->__PVT__awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10741232094138379896ull);
    vlSelf->__PVT__awlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13823799410002427218ull);
    vlSelf->__PVT__awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14063175441069765856ull);
    vlSelf->__PVT__awburst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2194945690521623954ull);
    vlSelf->__PVT__awcache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12571631497265920282ull);
    vlSelf->__PVT__awid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3795331727834872933ull);
    vlSelf->__PVT__wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2694481459927628098ull);
    vlSelf->__PVT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13135585445238253745ull);
    vlSelf->__PVT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12890271867161903902ull);
    vlSelf->__PVT__wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15125268524300477597ull);
    vlSelf->__PVT__wlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447900327780902047ull);
    vlSelf->__PVT__bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16336171827316305440ull);
    vlSelf->__PVT__bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14655036748745407948ull);
    vlSelf->__PVT__bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3607396732575112162ull);
    vlSelf->__PVT__bid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3323000146968766057ull);
}
