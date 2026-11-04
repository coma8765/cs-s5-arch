// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_ls_sub_unit_interface__pi3___ctor_var_reset(Vtb_ls_sub_unit_interface__pi3* vlSelf);

Vtb_ls_sub_unit_interface__pi3::Vtb_ls_sub_unit_interface__pi3() = default;
Vtb_ls_sub_unit_interface__pi3::~Vtb_ls_sub_unit_interface__pi3() = default;

void Vtb_ls_sub_unit_interface__pi3::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_ls_sub_unit_interface__pi3___ctor_var_reset(this);
}

void Vtb_ls_sub_unit_interface__pi3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_ls_sub_unit_interface__pi3::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
