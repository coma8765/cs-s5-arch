// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_AXI_INTERFACE_H_
#define VERILATED_VTB_AXI_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axi_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__arready;
    CData/*0:0*/ __PVT__arvalid;
    CData/*7:0*/ __PVT__arlen;
    CData/*2:0*/ __PVT__arsize;
    CData/*1:0*/ __PVT__arburst;
    CData/*3:0*/ __PVT__arcache;
    CData/*5:0*/ __PVT__arid;
    CData/*0:0*/ __PVT__rready;
    CData/*0:0*/ __PVT__rvalid;
    CData/*1:0*/ __PVT__rresp;
    CData/*0:0*/ __PVT__rlast;
    CData/*5:0*/ __PVT__rid;
    CData/*0:0*/ __PVT__awready;
    CData/*0:0*/ __PVT__awvalid;
    CData/*7:0*/ __PVT__awlen;
    CData/*2:0*/ __PVT__awsize;
    CData/*1:0*/ __PVT__awburst;
    CData/*3:0*/ __PVT__awcache;
    CData/*5:0*/ __PVT__awid;
    CData/*0:0*/ __PVT__wready;
    CData/*0:0*/ __PVT__wvalid;
    CData/*3:0*/ __PVT__wstrb;
    CData/*0:0*/ __PVT__wlast;
    CData/*0:0*/ __PVT__bready;
    CData/*0:0*/ __PVT__bvalid;
    CData/*1:0*/ __PVT__bresp;
    CData/*5:0*/ __PVT__bid;
    IData/*31:0*/ __PVT__araddr;
    IData/*31:0*/ __PVT__rdata;
    IData/*31:0*/ __PVT__awaddr;
    IData/*31:0*/ __PVT__wdata;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_axi_interface();
    ~Vtb_axi_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_axi_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
