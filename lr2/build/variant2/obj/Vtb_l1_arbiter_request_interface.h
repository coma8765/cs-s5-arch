// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_L1_ARBITER_REQUEST_INTERFACE_H_
#define VERILATED_VTB_L1_ARBITER_REQUEST_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_l1_arbiter_request_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__rnw;
    CData/*3:0*/ __PVT__be;
    CData/*4:0*/ __PVT__size;
    CData/*0:0*/ __PVT__is_amo;
    CData/*4:0*/ __PVT__amo;
    CData/*0:0*/ __PVT__request;
    CData/*0:0*/ __PVT__ack;
    IData/*31:0*/ __PVT__addr;
    IData/*31:0*/ __PVT__data;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_l1_arbiter_request_interface();
    ~Vtb_l1_arbiter_request_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_l1_arbiter_request_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
