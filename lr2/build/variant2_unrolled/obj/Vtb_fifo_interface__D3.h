// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_FIFO_INTERFACE__D3_H_
#define VERILATED_VTB_FIFO_INTERFACE__D3_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo_interface__D3 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ push;
    CData/*0:0*/ pop;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fifo_interface__D3();
    ~Vtb_fifo_interface__D3();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_fifo_interface__D3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
