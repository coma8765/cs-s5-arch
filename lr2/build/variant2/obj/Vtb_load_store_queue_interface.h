// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_LOAD_STORE_QUEUE_INTERFACE_H_
#define VERILATED_VTB_LOAD_STORE_QUEUE_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_load_store_queue_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ forwarded_store;
    CData/*2:0*/ __PVT__id_needed_by_store;
    VlWide<3>/*75:0*/ transaction_out;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_load_store_queue_interface();
    ~Vtb_load_store_queue_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_load_store_queue_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
