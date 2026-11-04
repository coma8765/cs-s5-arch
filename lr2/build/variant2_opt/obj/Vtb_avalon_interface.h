// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_AVALON_INTERFACE_H_
#define VERILATED_VTB_AVALON_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_avalon_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__read;
    CData/*0:0*/ __PVT__write;
    CData/*3:0*/ __PVT__byteenable;
    CData/*0:0*/ __PVT__waitrequest;
    CData/*0:0*/ __PVT__readdatavalid;
    CData/*0:0*/ __PVT__writeresponsevalid;
    IData/*31:0*/ __PVT__addr;
    IData/*31:0*/ __PVT__readdata;
    IData/*31:0*/ __PVT__writedata;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_avalon_interface();
    ~Vtb_avalon_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_avalon_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
