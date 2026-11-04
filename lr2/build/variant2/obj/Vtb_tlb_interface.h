// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_TLB_INTERFACE_H_
#define VERILATED_VTB_TLB_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tlb_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ new_request;
    CData/*0:0*/ __PVT__flush;
    CData/*0:0*/ __PVT__flush_complete;
    IData/*31:0*/ virtual_address;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_tlb_interface();
    ~Vtb_tlb_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_tlb_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
