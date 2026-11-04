// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_LS_SUB_UNIT_INTERFACE__PI1_H_
#define VERILATED_VTB_LS_SUB_UNIT_INTERFACE__PI1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ls_sub_unit_interface__pi1 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ data_valid;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_ls_sub_unit_interface__pi1();
    ~Vtb_ls_sub_unit_interface__pi1();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_ls_sub_unit_interface__pi1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
