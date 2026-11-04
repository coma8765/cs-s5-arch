// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"


Vtb___024unit::Vtb___024unit() = default;
Vtb___024unit::~Vtb___024unit() = default;

void Vtb___024unit::ctor(Vtb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
