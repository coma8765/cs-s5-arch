// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_BRANCH_PREDICTOR_INTERFACE_H_
#define VERILATED_VTB_BRANCH_PREDICTOR_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_branch_predictor_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ __PVT__if_id;
    CData/*0:0*/ new_mem_request;
    CData/*0:0*/ use_prediction;
    CData/*0:0*/ is_return;
    IData/*31:0*/ next_pc;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_branch_predictor_interface();
    ~Vtb_branch_predictor_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_branch_predictor_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
