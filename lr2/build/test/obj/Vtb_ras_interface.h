// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_RAS_INTERFACE_H_
#define VERILATED_VTB_RAS_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ras_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ push;
    CData/*0:0*/ branch_fetched;
    CData/*0:0*/ branch_retired;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_ras_interface();
    ~Vtb_ras_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_ras_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
