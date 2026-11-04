// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_fifo_interface__D9___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__2(Vtb_fifo_interface__D9* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtb_fifo_interface__D9___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = (0x0000ffffU 
                                                 & ((0x00000020U 
                                                     & (IData)(vlSelfRef.data_out))
                                                     ? 
                                                    (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                                                     >> 0x00000010U)
                                                     : vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data));
    vlSelfRef.push = ((vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__lsq_entries
                       [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__lut_ram
                       [vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_id_fifo__DOT__genblk1__DOT__read_index]][1U] 
                       >> 0x0000000fU) & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__lsq_block__DOT__oldest_fifo.pop));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_25 = (0x000000ffU 
                                                 & ((0x00000010U 
                                                     & (IData)(vlSelfRef.data_out))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_98 = ((0x00ffff00U 
                                                  & (vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__unit_muxed_load_data 
                                                     >> 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39) 
                                                       >> 8U)));
}
