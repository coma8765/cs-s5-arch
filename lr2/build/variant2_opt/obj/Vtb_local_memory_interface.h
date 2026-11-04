// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_LOCAL_MEMORY_INTERFACE_H_
#define VERILATED_VTB_LOCAL_MEMORY_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_local_memory_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ en;
    CData/*3:0*/ be;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_local_memory_interface();
    ~Vtb_local_memory_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_local_memory_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
