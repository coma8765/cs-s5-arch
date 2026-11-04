// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_fifo_interface__D9___ctor_var_reset(Vtb_fifo_interface__D9* vlSelf);

Vtb_fifo_interface__D9::Vtb_fifo_interface__D9() = default;
Vtb_fifo_interface__D9::~Vtb_fifo_interface__D9() = default;

void Vtb_fifo_interface__D9::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_fifo_interface__D9___ctor_var_reset(this);
}

void Vtb_fifo_interface__D9::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_fifo_interface__D9::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
