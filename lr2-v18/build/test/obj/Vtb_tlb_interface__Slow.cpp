// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tlb_interface___ctor_var_reset(Vtb_tlb_interface* vlSelf);

Vtb_tlb_interface::Vtb_tlb_interface() = default;
Vtb_tlb_interface::~Vtb_tlb_interface() = default;

void Vtb_tlb_interface::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_tlb_interface___ctor_var_reset(this);
}

void Vtb_tlb_interface::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_tlb_interface::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
