// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_l2_memory_interface___ctor_var_reset(Vtb_l2_memory_interface* vlSelf);

Vtb_l2_memory_interface::Vtb_l2_memory_interface() = default;
Vtb_l2_memory_interface::~Vtb_l2_memory_interface() = default;

void Vtb_l2_memory_interface::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_l2_memory_interface___ctor_var_reset(this);
}

void Vtb_l2_memory_interface::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_l2_memory_interface::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
