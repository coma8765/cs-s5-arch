// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_L2_REQUESTER_INTERFACE_H_
#define VERILATED_VTB_L2_REQUESTER_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_l2_requester_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__be;
    CData/*0:0*/ __PVT__rnw;
    CData/*0:0*/ __PVT__is_amo;
    CData/*4:0*/ __PVT__amo_type_or_burst_size;
    CData/*1:0*/ __PVT__sub_id;
    CData/*0:0*/ __PVT__request_push;
    CData/*0:0*/ __PVT__request_full;
    CData/*0:0*/ __PVT__inv_valid;
    CData/*0:0*/ __PVT__inv_ack;
    CData/*0:0*/ __PVT__con_result;
    CData/*0:0*/ __PVT__con_valid;
    CData/*0:0*/ __PVT__wr_data_push;
    CData/*0:0*/ __PVT__data_full;
    CData/*1:0*/ __PVT__rd_sub_id;
    CData/*0:0*/ __PVT__rd_data_valid;
    CData/*0:0*/ __PVT__rd_data_ack;
    IData/*29:0*/ __PVT__addr;
    IData/*29:0*/ __PVT__inv_addr;
    IData/*31:0*/ __PVT__wr_data;
    IData/*31:0*/ __PVT__rd_data;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_l2_requester_interface();
    ~Vtb_l2_requester_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_l2_requester_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
