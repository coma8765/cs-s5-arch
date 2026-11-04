// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB__SYMS_H_
#define VERILATED_VTB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb.h"

// INCLUDE MODULE CLASSES
#include "Vtb___024root.h"
#include "Vtb___024unit.h"
#include "Vtb_l2_memory_interface.h"
#include "Vtb_l2_requester_interface.h"
#include "Vtb_branch_predictor_interface.h"
#include "Vtb_unit_issue_interface.h"
#include "Vtb_unit_writeback_interface.h"
#include "Vtb_ras_interface.h"
#include "Vtb_tlb_interface.h"
#include "Vtb_local_memory_interface.h"
#include "Vtb_mmu_interface.h"
#include "Vtb_load_store_queue_interface.h"
#include "Vtb_writeback_store_interface.h"
#include "Vtb_fetch_sub_unit_interface.h"
#include "Vtb_axi_interface.h"
#include "Vtb_avalon_interface.h"
#include "Vtb_wishbone_interface.h"
#include "Vtb_l1_arbiter_request_interface.h"
#include "Vtb_l1_arbiter_return_interface.h"
#include "Vtb_ls_sub_unit_interface__pi1.h"
#include "Vtb_ls_sub_unit_interface__pi2.h"
#include "Vtb_ls_sub_unit_interface__pi3.h"
#include "Vtb_fifo_interface__D2.h"
#include "Vtb_fifo_interface__D3.h"
#include "Vtb_fifo_interface__D9.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb___024root                  TOP;
    Vtb_branch_predictor_interface TOP__tb__DOT__uut__DOT__cpu__DOT__bp;
    Vtb_mmu_interface              TOP__tb__DOT__uut__DOT__cpu__DOT__dmmu;
    Vtb_tlb_interface              TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb;
    Vtb_fifo_interface__D2         TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo;
    Vtb_fetch_sub_unit_interface   TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__;
    Vtb_mmu_interface              TOP__tb__DOT__uut__DOT__cpu__DOT__immu;
    Vtb_tlb_interface              TOP__tb__DOT__uut__DOT__cpu__DOT__itlb;
    Vtb_l1_arbiter_request_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__0__KET__;
    Vtb_l1_arbiter_request_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__1__KET__;
    Vtb_l1_arbiter_request_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__2__KET__;
    Vtb_l1_arbiter_request_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__3__KET__;
    Vtb_l1_arbiter_return_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__0__KET__;
    Vtb_l1_arbiter_return_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__1__KET__;
    Vtb_l1_arbiter_return_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__2__KET__;
    Vtb_l1_arbiter_return_interface TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__3__KET__;
    Vtb_ls_sub_unit_interface__pi1 TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram;
    Vtb_ls_sub_unit_interface__pi2 TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bus;
    Vtb_ls_sub_unit_interface__pi3 TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__cache;
    Vtb_fifo_interface__D9         TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes;
    Vtb_load_store_queue_interface TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq;
    Vtb_fifo_interface__D3         TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo;
    Vtb_ras_interface              TOP__tb__DOT__uut__DOT__cpu__DOT__ras;
    Vtb_unit_issue_interface       TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__;
    Vtb_unit_issue_interface       TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__;
    Vtb_unit_issue_interface       TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__;
    Vtb_unit_issue_interface       TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__;
    Vtb_unit_writeback_interface   TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__;
    Vtb_unit_writeback_interface   TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__;
    Vtb_writeback_store_interface  TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store;
    Vtb_local_memory_interface     TOP__tb__DOT__uut__DOT__data_bram;
    Vtb_local_memory_interface     TOP__tb__DOT__uut__DOT__instruction_bram;
    Vtb_l2_requester_interface     TOP__tb__DOT__uut__DOT__l2__BRA__0__KET__;
    Vtb_l2_requester_interface     TOP__tb__DOT__uut__DOT__l2__BRA__1__KET__;
    Vtb_avalon_interface           TOP__tb__DOT__uut__DOT__m_avalon;
    Vtb_axi_interface              TOP__tb__DOT__uut__DOT__m_axi;
    Vtb_wishbone_interface         TOP__tb__DOT__uut__DOT__m_wishbone;
    Vtb_l2_memory_interface        TOP__tb__DOT__uut__DOT__mem;

    // CONSTRUCTORS
    Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp);
    ~Vtb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
