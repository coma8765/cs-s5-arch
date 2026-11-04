// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_FIFO_INTERFACE__D9_H_
#define VERILATED_VTB_FIFO_INTERFACE__D9_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo_interface__D9 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ push;
    CData/*0:0*/ valid;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_25;
    SData/*8:0*/ data_out;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_39;
    IData/*23:0*/ __VdfgRegularize_hebeb780c_0_98;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fifo_interface__D9();
    ~Vtb_fifo_interface__D9();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_fifo_interface__D9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
