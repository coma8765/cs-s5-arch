// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__0(Vtb_load_store_queue_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.forwarded_store = (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__rs_id_inuse[1U] 
                                 & (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__rs_inuse[1U] 
                                    & (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__issue[0U] 
                                       >> 6U)));
}

void Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__1(Vtb_load_store_queue_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtb_load_store_queue_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.transaction_out[0U] = ((0xfff80000U & vlSelfRef.transaction_out[0U]) 
                                     | ((0x0007f800U 
                                         & (((1U == (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_19))
                                              ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment
                                              : (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
                                                 >> 8U)) 
                                            << 0x0000000bU)) 
                                        | ((0x000007f8U 
                                            & (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
                                               << 3U)) 
                                           | vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                           [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index])));
    vlSelfRef.transaction_out[0U] = ((0xf807ffffU & vlSelfRef.transaction_out[0U]) 
                                     | (0x07f80000U 
                                        & (((2U == (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_19))
                                             ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment
                                             : (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
                                                >> 0x00000010U)) 
                                           << 0x00000013U)));
    vlSelfRef.transaction_out[0U] = ((0x07ffffffU & vlSelfRef.transaction_out[0U]) 
                                     | (((2U == (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_19))
                                          ? (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
                                             >> 8U)
                                          : ((3U == (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_19))
                                              ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment
                                              : (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
                                                 >> 0x00000018U))) 
                                        << 0x0000001bU));
    vlSelfRef.transaction_out[1U] = ((0xfffffff8U & vlSelfRef.transaction_out[1U]) 
                                     | (7U & (((2U 
                                                == (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_19))
                                                ? (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
                                                   >> 8U)
                                                : (
                                                   (3U 
                                                    == (IData)(vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_19))
                                                    ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment
                                                    : 
                                                   (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__data_for_alignment 
                                                    >> 0x00000018U))) 
                                              >> 5U)));
    vlSelfRef.transaction_out[1U] = ((7U & vlSelfRef.transaction_out[1U]) 
                                     | ((IData)((0x000001ffffffffffULL 
                                                 & (((QData)((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                                     [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                                     [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][2U])) 
                                                     << 0x00000019U) 
                                                    | ((QData)((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                                       [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                                       [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U])) 
                                                       >> 7U)))) 
                                        << 3U));
    vlSelfRef.transaction_out[2U] = (0x00000fffU & 
                                     (((IData)((0x000001ffffffffffULL 
                                                & (((QData)((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                                    [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                                    [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][2U])) 
                                                    << 0x00000019U) 
                                                   | ((QData)((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                                      [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                                      [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U])) 
                                                      >> 7U)))) 
                                       >> 0x0000001dU) 
                                      | ((IData)(((0x000001ffffffffffULL 
                                                   & (((QData)((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                                       [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                                       [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][2U])) 
                                                       << 0x00000019U) 
                                                      | ((QData)((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                                                                         [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                                                                         [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U])) 
                                                         >> 7U))) 
                                                  >> 0x00000020U)) 
                                         << 3U)));
}
