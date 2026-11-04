// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_LS_SUB_UNIT_INTERFACE__PI2_H_
#define VERILATED_VTB_LS_SUB_UNIT_INTERFACE__PI2_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ls_sub_unit_interface__pi2 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__data_valid;
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__new_request;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_ls_sub_unit_interface__pi2();
    ~Vtb_ls_sub_unit_interface__pi2();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_ls_sub_unit_interface__pi2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
