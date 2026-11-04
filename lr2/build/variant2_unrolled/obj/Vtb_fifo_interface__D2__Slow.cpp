// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_fifo_interface__D2___ctor_var_reset(Vtb_fifo_interface__D2* vlSelf);

Vtb_fifo_interface__D2::Vtb_fifo_interface__D2() = default;
Vtb_fifo_interface__D2::~Vtb_fifo_interface__D2() = default;

void Vtb_fifo_interface__D2::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_fifo_interface__D2___ctor_var_reset(this);
}

void Vtb_fifo_interface__D2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_fifo_interface__D2::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
