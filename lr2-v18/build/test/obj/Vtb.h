// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_H_
#define VERILATED_VTB_H_  // guard

#include "verilated.h"

class Vtb__Syms;
class Vtb___024root;
class VerilatedVcdC;
class Vtb_avalon_interface;
class Vtb_axi_interface;
class Vtb_branch_predictor_interface;
class Vtb_fetch_sub_unit_interface;
class Vtb_fifo_interface__D2;
class Vtb_fifo_interface__D3;
class Vtb_fifo_interface__D9;
class Vtb_l1_arbiter_request_interface;
class Vtb_l1_arbiter_return_interface;
class Vtb_l2_memory_interface;
class Vtb_l2_requester_interface;
class Vtb_load_store_queue_interface;
class Vtb_local_memory_interface;
class Vtb_ls_sub_unit_interface__pi1;
class Vtb_ls_sub_unit_interface__pi2;
class Vtb_ls_sub_unit_interface__pi3;
class Vtb_mmu_interface;
class Vtb_ras_interface;
class Vtb_tlb_interface;
class Vtb_unit_issue_interface;
class Vtb_unit_writeback_interface;
class Vtb_wishbone_interface;
class Vtb_writeback_store_interface;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb VL_NOT_FINAL : public VerilatedModel {
    friend class Vtb__Syms;
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb__Syms* const vlSymsp;
    // Evaluation loop
    VerilatedEvalLoop m_evalLoop;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_axi_interface* const __PVT__tb__DOT__uut__DOT__m_axi;
    Vtb_avalon_interface* const __PVT__tb__DOT__uut__DOT__m_avalon;
    Vtb_wishbone_interface* const __PVT__tb__DOT__uut__DOT__m_wishbone;
    Vtb_l2_requester_interface* const __PVT__tb__DOT__uut__DOT__l2__BRA__1__KET__;
    Vtb_l2_requester_interface* const __PVT__tb__DOT__uut__DOT__l2__BRA__0__KET__;
    Vtb_l2_memory_interface* const __PVT__tb__DOT__uut__DOT__mem;
    Vtb_local_memory_interface* const __PVT__tb__DOT__uut__DOT__instruction_bram;
    Vtb_local_memory_interface* const __PVT__tb__DOT__uut__DOT__data_bram;
    Vtb_l1_arbiter_request_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__3__KET__;
    Vtb_l1_arbiter_request_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__2__KET__;
    Vtb_l1_arbiter_request_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__1__KET__;
    Vtb_l1_arbiter_request_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__0__KET__;
    Vtb_l1_arbiter_return_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__3__KET__;
    Vtb_l1_arbiter_return_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__2__KET__;
    Vtb_l1_arbiter_return_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__1__KET__;
    Vtb_l1_arbiter_return_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__0__KET__;
    Vtb_branch_predictor_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__bp;
    Vtb_ras_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__ras;
    Vtb_unit_issue_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__;
    Vtb_unit_issue_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__;
    Vtb_unit_issue_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__;
    Vtb_unit_issue_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__;
    Vtb_unit_writeback_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__;
    Vtb_unit_writeback_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__;
    Vtb_mmu_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__immu;
    Vtb_mmu_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__dmmu;
    Vtb_tlb_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__itlb;
    Vtb_tlb_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__dtlb;
    Vtb_writeback_store_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__wb_store;
    Vtb_ls_sub_unit_interface__pi1* const __PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram;
    Vtb_ls_sub_unit_interface__pi2* const __PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bus;
    Vtb_ls_sub_unit_interface__pi3* const __PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__cache;
    Vtb_fifo_interface__D9* const __PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes;
    Vtb_load_store_queue_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq;
    Vtb_fifo_interface__D3* const __PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo;
    Vtb_fetch_sub_unit_interface* const __PVT__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__;
    Vtb_fifo_interface__D2* const __PVT__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo;
    Vtb_fifo_interface__D3* const __PVT__tb__DOT__uut__DOT__cpu__DOT__ras_block__DOT__ri_fifo;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb();
  private:
    VL_UNCOPYABLE(Vtb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:

    // Internal functions - the model's evaluation entry points
    void evalBegin() override final;
    void evalEnd() override final;
    void evalStatic() override final;
    void evalInitial() override final;
    bool evalStl(bool firstIteration) override final;
    void evalSample() override final;
    bool evalIco(bool firstIteration) override final;
    bool evalAct() override final;
    bool evalInact() override final;
    bool evalNba() override final;
    bool evalObs() override final;
    bool evalReact() override final;
    void evalPostponed() override final;
    void evalFinal() override final;
    void dumpTriggersStl() override final;
    void dumpTriggersIco() override final;
    void dumpTriggersAct() override final;
    void dumpTriggersNba() override final;
    void dumpTriggersObs() override final;
    void dumpTriggersReact() override final;

    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
