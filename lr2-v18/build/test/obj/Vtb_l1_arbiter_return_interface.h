// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_L1_ARBITER_RETURN_INTERFACE_H_
#define VERILATED_VTB_L1_ARBITER_RETURN_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_l1_arbiter_return_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__inv_valid;
    CData/*0:0*/ __PVT__inv_ack;
    CData/*0:0*/ __PVT__data_valid;
    IData/*29:0*/ __PVT__inv_addr;
    IData/*31:0*/ __PVT__data;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_l1_arbiter_return_interface();
    ~Vtb_l1_arbiter_return_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_l1_arbiter_return_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
