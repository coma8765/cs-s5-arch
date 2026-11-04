// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_UNIT_WRITEBACK_INTERFACE_H_
#define VERILATED_VTB_UNIT_WRITEBACK_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_unit_writeback_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ id;
    CData/*0:0*/ done;
    IData/*31:0*/ rd;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_unit_writeback_interface();
    ~Vtb_unit_writeback_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_unit_writeback_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
