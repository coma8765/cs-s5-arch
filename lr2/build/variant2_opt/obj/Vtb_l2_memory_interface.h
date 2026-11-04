// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_L2_MEMORY_INTERFACE_H_
#define VERILATED_VTB_L2_MEMORY_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_l2_memory_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__be;
    CData/*0:0*/ __PVT__rnw;
    CData/*0:0*/ __PVT__is_amo;
    CData/*4:0*/ __PVT__amo_type_or_burst_size;
    CData/*2:0*/ __PVT__id;
    CData/*0:0*/ __PVT__request_pop;
    CData/*0:0*/ __PVT__request_valid;
    CData/*0:0*/ __PVT__abort;
    CData/*0:0*/ __PVT__wr_data_valid;
    CData/*0:0*/ __PVT__wr_data_read;
    CData/*2:0*/ __PVT__rd_id;
    CData/*0:0*/ __PVT__rd_data_valid;
    IData/*29:0*/ __PVT__addr;
    IData/*31:0*/ __PVT__wr_data;
    IData/*31:0*/ __PVT__rd_data;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_l2_memory_interface();
    ~Vtb_l2_memory_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_l2_memory_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
