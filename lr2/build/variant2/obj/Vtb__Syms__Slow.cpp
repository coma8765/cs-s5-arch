// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb__pch.h"

Vtb__Syms::Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(413);
    // Setup sub module instances
    TOP__tb__DOT__uut__DOT__cpu__DOT__bp.ctor(this, "tb.uut.cpu.bp");
    TOP__tb__DOT__uut__DOT__cpu__DOT__dmmu.ctor(this, "tb.uut.cpu.dmmu");
    TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.ctor(this, "tb.uut.cpu.dtlb");
    TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.ctor(this, "tb.uut.cpu.fetch_block.fetch_attr_fifo");
    TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.ctor(this, "tb.uut.cpu.fetch_block.fetch_sub[0]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__immu.ctor(this, "tb.uut.cpu.immu");
    TOP__tb__DOT__uut__DOT__cpu__DOT__itlb.ctor(this, "tb.uut.cpu.itlb");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__0__KET__.ctor(this, "tb.uut.cpu.l1_request[0]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__1__KET__.ctor(this, "tb.uut.cpu.l1_request[1]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__2__KET__.ctor(this, "tb.uut.cpu.l1_request[2]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__3__KET__.ctor(this, "tb.uut.cpu.l1_request[3]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__0__KET__.ctor(this, "tb.uut.cpu.l1_response[0]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__1__KET__.ctor(this, "tb.uut.cpu.l1_response[1]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__2__KET__.ctor(this, "tb.uut.cpu.l1_response[2]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__3__KET__.ctor(this, "tb.uut.cpu.l1_response[3]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram.ctor(this, "tb.uut.cpu.load_store_unit_block.bram");
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bus.ctor(this, "tb.uut.cpu.load_store_unit_block.bus");
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__cache.ctor(this, "tb.uut.cpu.load_store_unit_block.cache");
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.ctor(this, "tb.uut.cpu.load_store_unit_block.load_attributes");
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.ctor(this, "tb.uut.cpu.load_store_unit_block.lsq");
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.ctor(this, "tb.uut.cpu.load_store_unit_block.lsq_block.oldest_fifo");
    TOP__tb__DOT__uut__DOT__cpu__DOT__ras.ctor(this, "tb.uut.cpu.ras");
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__.ctor(this, "tb.uut.cpu.unit_issue[0]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__.ctor(this, "tb.uut.cpu.unit_issue[1]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__.ctor(this, "tb.uut.cpu.unit_issue[2]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__.ctor(this, "tb.uut.cpu.unit_issue[3]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__.ctor(this, "tb.uut.cpu.unit_wb[0]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.ctor(this, "tb.uut.cpu.unit_wb[1]");
    TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.ctor(this, "tb.uut.cpu.wb_store");
    TOP__tb__DOT__uut__DOT__data_bram.ctor(this, "tb.uut.data_bram");
    TOP__tb__DOT__uut__DOT__instruction_bram.ctor(this, "tb.uut.instruction_bram");
    TOP__tb__DOT__uut__DOT__l2__BRA__0__KET__.ctor(this, "tb.uut.l2[0]");
    TOP__tb__DOT__uut__DOT__l2__BRA__1__KET__.ctor(this, "tb.uut.l2[1]");
    TOP__tb__DOT__uut__DOT__m_avalon.ctor(this, "tb.uut.m_avalon");
    TOP__tb__DOT__uut__DOT__m_axi.ctor(this, "tb.uut.m_axi");
    TOP__tb__DOT__uut__DOT__m_wishbone.ctor(this, "tb.uut.m_wishbone");
    TOP__tb__DOT__uut__DOT__mem.ctor(this, "tb.uut.mem");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__bp = &TOP__tb__DOT__uut__DOT__cpu__DOT__bp;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__dmmu = &TOP__tb__DOT__uut__DOT__cpu__DOT__dmmu;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__dtlb = &TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo = &TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__immu = &TOP__tb__DOT__uut__DOT__cpu__DOT__immu;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__itlb = &TOP__tb__DOT__uut__DOT__cpu__DOT__itlb;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__0__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__0__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__1__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__1__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__2__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__2__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__3__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__3__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__0__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__0__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__1__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__1__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__2__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__2__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__3__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__3__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram = &TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bus = &TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bus;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__cache = &TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__cache;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes = &TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq = &TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo = &TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__ras = &TOP__tb__DOT__uut__DOT__cpu__DOT__ras;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__ = &TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__cpu__DOT__wb_store = &TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store;
    TOP.__PVT__tb__DOT__uut__DOT__data_bram = &TOP__tb__DOT__uut__DOT__data_bram;
    TOP.__PVT__tb__DOT__uut__DOT__instruction_bram = &TOP__tb__DOT__uut__DOT__instruction_bram;
    TOP.__PVT__tb__DOT__uut__DOT__l2__BRA__0__KET__ = &TOP__tb__DOT__uut__DOT__l2__BRA__0__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__l2__BRA__1__KET__ = &TOP__tb__DOT__uut__DOT__l2__BRA__1__KET__;
    TOP.__PVT__tb__DOT__uut__DOT__m_avalon = &TOP__tb__DOT__uut__DOT__m_avalon;
    TOP.__PVT__tb__DOT__uut__DOT__m_axi = &TOP__tb__DOT__uut__DOT__m_axi;
    TOP.__PVT__tb__DOT__uut__DOT__m_wishbone = &TOP__tb__DOT__uut__DOT__m_wishbone;
    TOP.__PVT__tb__DOT__uut__DOT__mem = &TOP__tb__DOT__uut__DOT__mem;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__bp.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__dmmu.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__immu.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__itlb.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__0__KET__.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__1__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__2__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__3__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__0__KET__.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__1__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__2__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__3__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bus.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__cache.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__ras.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__data_bram.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__instruction_bram.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__l2__BRA__0__KET__.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__l2__BRA__1__KET__.__Vconfigure(false);
    TOP__tb__DOT__uut__DOT__m_avalon.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__m_axi.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__m_wishbone.__Vconfigure(true);
    TOP__tb__DOT__uut__DOT__mem.__Vconfigure(true);
}

Vtb__Syms::~Vtb__Syms() {
    if (__Vm_dumping) _traceDumpClose();
    // Tear down scopes
    // Tear down sub module instances
    TOP__tb__DOT__uut__DOT__mem.dtor();
    TOP__tb__DOT__uut__DOT__m_wishbone.dtor();
    TOP__tb__DOT__uut__DOT__m_axi.dtor();
    TOP__tb__DOT__uut__DOT__m_avalon.dtor();
    TOP__tb__DOT__uut__DOT__l2__BRA__1__KET__.dtor();
    TOP__tb__DOT__uut__DOT__l2__BRA__0__KET__.dtor();
    TOP__tb__DOT__uut__DOT__instruction_bram.dtor();
    TOP__tb__DOT__uut__DOT__data_bram.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__wb_store.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__3__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__2__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__1__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__unit_issue__BRA__0__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__ras.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__cache.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bus.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__3__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__2__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__1__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_response__BRA__0__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__3__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__2__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__1__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__l1_request__BRA__0__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__itlb.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__immu.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_sub__BRA__0__KET__.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__dtlb.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__dmmu.dtor();
    TOP__tb__DOT__uut__DOT__cpu__DOT__bp.dtor();
}

void Vtb__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
