// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____0(Vtb_unit_writeback_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.id = (7U & ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r)
                           ? (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__csr_id)
                           : ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out) 
                              >> 1U)));
}

void Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____1(Vtb_unit_writeback_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_unit_writeback_interface___nba_sequent__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__1__KET____1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r) 
                      | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__bram.data_valid));
    vlSelfRef.rd = ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_ready_to_complete_r)
                     ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__gc_unit_block__DOT__csr_registers__DOT__selected_csr_r
                     : ((0x00000100U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out))
                         ? ((((0x00000080U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out))
                               ? vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.__VdfgRegularize_hebeb780c_0_98
                               : (0x000000ffU & (((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.__VdfgRegularize_hebeb780c_0_39) 
                                                  >> 8U) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out) 
                                                                  >> 6U))))))) 
                             << 8U) | (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.__VdfgRegularize_hebeb780c_0_25))
                         : ((0x00000080U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out))
                             ? vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data
                             : ((0x00000040U & (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.data_out))
                                 ? VL_EXTENDS_II(32,16, 
                                                 (0x0000ffffU 
                                                  & vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__aligned_load_data))
                                 : VL_EXTENDS_II(32,8, (IData)(vlSymsp->TOP__tb__DOT__uut__DOT__cpu__DOT__load_store_unit_block__DOT__load_attributes.__VdfgRegularize_hebeb780c_0_25))))));
}

void Vtb_unit_writeback_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET____0(Vtb_unit_writeback_interface* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_unit_writeback_interface___nba_comb__TOP__tb__DOT__uut__DOT__cpu__DOT__unit_wb__BRA__0__KET____0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd = ((0xfffffffeU & (((- (IData)((1U 
                                                 & (~ (IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_slt_path))))) 
                                     << 1U) & vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_49)) 
                    | (1U & ((IData)(vlSymsp->TOP.tb__DOT__uut__DOT__cpu__DOT__decode_and_issue_block__DOT__alu_slt_path)
                              ? (IData)((vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_29 
                                         >> 0x00000021U))
                              : vlSymsp->TOP.__VdfgRegularize_hebeb780c_0_49)));
}
