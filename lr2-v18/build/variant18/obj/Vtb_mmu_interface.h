// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_MMU_INTERFACE_H_
#define VERILATED_VTB_MMU_INTERFACE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mmu_interface final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__new_request;
    CData/*0:0*/ __PVT__execute;
    CData/*0:0*/ __PVT__rnw;
    CData/*0:0*/ __PVT__write_entry;
    CData/*0:0*/ __PVT__mxr;
    CData/*0:0*/ __PVT__pum;
    CData/*1:0*/ __PVT__privilege;
    IData/*31:0*/ __PVT__virtual_address;
    IData/*19:0*/ __PVT__new_phys_addr;
    IData/*21:0*/ __PVT__ppn;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mmu_interface();
    ~Vtb_mmu_interface();
    void ctor(Vtb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_mmu_interface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
