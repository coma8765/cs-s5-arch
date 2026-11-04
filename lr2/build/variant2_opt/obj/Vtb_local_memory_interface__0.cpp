// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__instruction_bram__0(Vtb_local_memory_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__instruction_bram__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.en = ((8U == (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__pc 
                            >> 0x0000001cU)) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__fetch_block__DOT__fetch_attr_fifo.push));
}

void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__0(Vtb_local_memory_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.be = (0x0000000fU & (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                   [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                   [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                                   >> 0x0000000aU));
}

void Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__1(Vtb_local_memory_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_local_memory_interface___nba_sequent__TOP__tb__DOT__uut__DOT__data_bram__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.en = ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__sub_unit_select__DOT__one_hot) 
                    & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop));
}
