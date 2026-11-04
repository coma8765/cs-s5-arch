// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb_mmu_interface___ctor_var_reset(Vtb_mmu_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_mmu_interface___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__new_request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12843770214357168320ull);
    vlSelf->__PVT__execute = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13686316389475849630ull);
    vlSelf->__PVT__rnw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17929851660937197182ull);
    vlSelf->__PVT__virtual_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7128700217493028031ull);
    vlSelf->__PVT__write_entry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11120571343572270694ull);
    vlSelf->__PVT__new_phys_addr = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11452370130095353067ull);
    vlSelf->__PVT__ppn = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 3721252439675971778ull);
    vlSelf->__PVT__mxr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7158829078769891760ull);
    vlSelf->__PVT__pum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1768067902356871935ull);
    vlSelf->__PVT__privilege = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18213724051313607568ull);
}
