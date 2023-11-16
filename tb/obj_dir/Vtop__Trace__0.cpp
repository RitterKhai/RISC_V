// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__start));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__dut__DOT__instr),32);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__imm_gen_sel),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__dut__DOT__reg_wr_en));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__dut__DOT__branch_u));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__dut__DOT__op_a_sel));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__dut__DOT__op_b_sel));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__wb_sel),2);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+13,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc)),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__dut__DOT__imm),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__dut__DOT__operand_a),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__dut__DOT__digit9),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__dut__DOT__digit8),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__dut__DOT__digit7),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__dut__DOT__digit6),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__dut__DOT__digit5),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__dut__DOT__digit4),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__digit3),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__dut__DOT__digit2),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__dut__DOT__digit1),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__dut__DOT__digit0),32);
        bufp->chgIData(oldp+27,(((vlSelf->top__DOT__dut__DOT__instr 
                                  >> 0x1fU) ? ((0x40000000U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? 0U
                                                : (
                                                   (0x20000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 0U
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? vlSelf->top__DOT__dut__DOT__digit9
                                                     : vlSelf->top__DOT__dut__DOT__digit8)))
                                  : ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr)
                                      ? ((0x20000000U 
                                          & vlSelf->top__DOT__dut__DOT__instr)
                                          ? ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? vlSelf->top__DOT__dut__DOT__digit7
                                              : vlSelf->top__DOT__dut__DOT__digit6)
                                          : ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? vlSelf->top__DOT__dut__DOT__digit5
                                              : vlSelf->top__DOT__dut__DOT__digit4))
                                      : ((0x20000000U 
                                          & vlSelf->top__DOT__dut__DOT__instr)
                                          ? ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? vlSelf->top__DOT__dut__DOT__digit3
                                              : vlSelf->top__DOT__dut__DOT__digit2)
                                          : ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? vlSelf->top__DOT__dut__DOT__digit1
                                              : vlSelf->top__DOT__dut__DOT__digit0))))),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__dut__DOT__temp9),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__dut__DOT__temp8),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__dut__DOT__temp7),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__temp6),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__dut__DOT__temp5),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__dut__DOT__temp4),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__dut__DOT__temp3),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__dut__DOT__temp2),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__dut__DOT__temp1),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__dut__DOT__temp0),32);
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__dut__DOT__busy9));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__dut__DOT__busy8));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__dut__DOT__busy7));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__dut__DOT__busy6));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__dut__DOT__busy5));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__dut__DOT__busy4));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__dut__DOT__busy3));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__dut__DOT__busy2));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__dut__DOT__busy1));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__dut__DOT__busy0));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__dut__DOT__valid9));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__dut__DOT__valid8));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__dut__DOT__valid7));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__dut__DOT__valid6));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__dut__DOT__valid5));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__dut__DOT__valid4));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__dut__DOT__valid3));
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__dut__DOT__valid2));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__dut__DOT__valid1));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__dut__DOT__valid0));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__dut__DOT__done9));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__dut__DOT__done8));
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__dut__DOT__done7));
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__dut__DOT__done6));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__dut__DOT__done5));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__dut__DOT__done4));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__dut__DOT__done3));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__dut__DOT__done2));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__dut__DOT__done1));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__dut__DOT__done0));
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc),32);
        bufp->chgBit(oldp+69,((1U & vlSelf->top__DOT__dut__DOT__operand_a)));
        bufp->chgBit(oldp+70,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xaU))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xbU))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xcU))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xdU))));
        bufp->chgBit(oldp+75,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xeU))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xfU))));
        bufp->chgBit(oldp+77,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x10U))));
        bufp->chgBit(oldp+78,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x11U))));
        bufp->chgBit(oldp+79,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x12U))));
        bufp->chgBit(oldp+80,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x13U))));
        bufp->chgBit(oldp+81,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 2U))));
        bufp->chgBit(oldp+82,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x14U))));
        bufp->chgBit(oldp+83,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x15U))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x16U))));
        bufp->chgBit(oldp+85,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x17U))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x18U))));
        bufp->chgBit(oldp+87,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x19U))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+89,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+91,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 3U))));
        bufp->chgBit(oldp+93,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+94,((vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x1fU)));
        bufp->chgBit(oldp+95,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 4U))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 5U))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 6U))));
        bufp->chgBit(oldp+98,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 7U))));
        bufp->chgBit(oldp+99,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 8U))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                      >> 9U))));
        bufp->chgIData(oldp+101,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a))),32);
        bufp->chgBit(oldp+102,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)))));
        bufp->chgBit(oldp+103,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 1U))));
        bufp->chgBit(oldp+104,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+105,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+106,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+107,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+108,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+109,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+110,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+111,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+112,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+113,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+114,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 2U))));
        bufp->chgBit(oldp+115,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+116,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+117,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+118,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+119,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+120,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+121,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+122,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+123,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+124,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+125,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 3U))));
        bufp->chgBit(oldp+126,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+127,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+128,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 4U))));
        bufp->chgBit(oldp+129,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 5U))));
        bufp->chgBit(oldp+130,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 6U))));
        bufp->chgBit(oldp+131,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 7U))));
        bufp->chgBit(oldp+132,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 8U))));
        bufp->chgBit(oldp+133,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> 9U))));
        bufp->chgBit(oldp+134,((1U & vlSelf->top__DOT__dut__DOT__rs1_data)));
        bufp->chgBit(oldp+135,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 1U))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+137,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+138,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+139,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+140,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+141,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+142,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+144,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+145,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 2U))));
        bufp->chgBit(oldp+147,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+148,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+149,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+150,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+151,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+152,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+153,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+157,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 3U))));
        bufp->chgBit(oldp+158,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+159,((vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+160,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 4U))));
        bufp->chgBit(oldp+161,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 5U))));
        bufp->chgBit(oldp+162,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 6U))));
        bufp->chgBit(oldp+163,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 7U))));
        bufp->chgBit(oldp+164,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 8U))));
        bufp->chgBit(oldp+165,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 9U))));
        bufp->chgIData(oldp+166,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data))),32);
        bufp->chgBit(oldp+167,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__rs1_data)))));
        bufp->chgBit(oldp+168,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+169,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+170,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+171,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+172,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+173,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+174,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+175,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+176,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+177,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+178,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+179,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+180,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+181,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+182,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+183,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+184,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+185,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+186,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+187,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+188,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+189,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+190,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+191,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+192,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+193,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+194,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+195,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+196,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+197,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+198,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 9U))));
        bufp->chgCData(oldp+199,((vlSelf->top__DOT__dut__DOT__instr 
                                  >> 0x1cU)),4);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__b1),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo_next),32);
        bufp->chgQData(oldp+203,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc),33);
        bufp->chgQData(oldp+205,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next),33);
        bufp->chgCData(oldp+207,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i),5);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__b1),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo_next),32);
        bufp->chgQData(oldp+211,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc),33);
        bufp->chgQData(oldp+213,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next),33);
        bufp->chgCData(oldp+215,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i),5);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__b1),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo_next),32);
        bufp->chgQData(oldp+219,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc),33);
        bufp->chgQData(oldp+221,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next),33);
        bufp->chgCData(oldp+223,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i),5);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__b1),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo_next),32);
        bufp->chgQData(oldp+227,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc),33);
        bufp->chgQData(oldp+229,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next),33);
        bufp->chgCData(oldp+231,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i),5);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__b1),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo_next),32);
        bufp->chgQData(oldp+235,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc),33);
        bufp->chgQData(oldp+237,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next),33);
        bufp->chgCData(oldp+239,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i),5);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__b1),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo_next),32);
        bufp->chgQData(oldp+243,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc),33);
        bufp->chgQData(oldp+245,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next),33);
        bufp->chgCData(oldp+247,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i),5);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__b1),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo_next),32);
        bufp->chgQData(oldp+251,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc),33);
        bufp->chgQData(oldp+253,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next),33);
        bufp->chgCData(oldp+255,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i),5);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__b1),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo_next),32);
        bufp->chgQData(oldp+259,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc),33);
        bufp->chgQData(oldp+261,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next),33);
        bufp->chgCData(oldp+263,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i),5);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__b1),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo_next),32);
        bufp->chgQData(oldp+267,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc),33);
        bufp->chgQData(oldp+269,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next),33);
        bufp->chgCData(oldp+271,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i),5);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__b1),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo_next),32);
        bufp->chgQData(oldp+275,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc),33);
        bufp->chgQData(oldp+277,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next),33);
        bufp->chgCData(oldp+279,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i),5);
        bufp->chgSData(oldp+280,((0x3fffU & vlSelf->top__DOT__dut__DOT__pc)),14);
        bufp->chgBit(oldp+281,((1U & (vlSelf->top__DOT__dut__DOT__instr 
                                      >> 0xeU))));
        bufp->chgCData(oldp+282,((3U & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+283,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+284,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+285,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                           >> 7U))),5);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0]),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[1]),32);
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[2]),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[3]),32);
        bufp->chgIData(oldp+290,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[4]),32);
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[5]),32);
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[6]),32);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[7]),32);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[8]),32);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[9]),32);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[10]),32);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[11]),32);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[12]),32);
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[13]),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[14]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[15]),32);
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[16]),32);
        bufp->chgIData(oldp+303,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[17]),32);
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[18]),32);
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[19]),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[20]),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[21]),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[22]),32);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[23]),32);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[24]),32);
        bufp->chgIData(oldp+311,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[25]),32);
        bufp->chgIData(oldp+312,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[26]),32);
        bufp->chgIData(oldp+313,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[27]),32);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[28]),32);
        bufp->chgIData(oldp+315,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[29]),32);
        bufp->chgIData(oldp+316,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[30]),32);
        bufp->chgIData(oldp+317,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+318,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  + vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+319,(((IData)(1U) + (vlSelf->top__DOT__dut__DOT__operand_a 
                                                 + 
                                                 (~ vlSelf->top__DOT__dut__DOT__operand_b)))),32);
        bufp->chgIData(oldp+320,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+321,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  & vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+322,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  | vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+323,(((0x1fU >= (0x1fU 
                                             & vlSelf->top__DOT__dut__DOT__operand_b))
                                   ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                      << (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                   : 0U)),32);
        bufp->chgIData(oldp+324,(((0x1fU >= (0x1fU 
                                             & vlSelf->top__DOT__dut__DOT__operand_b))
                                   ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                   : 0U)),32);
        bufp->chgQData(oldp+325,(((vlSelf->top__DOT__dut__DOT__operand_a 
                                   >> 0x1fU) ? ((0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a))) 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__operand_b))
                                   : ((QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)))),64);
        bufp->chgBit(oldp+327,(((IData)(vlSelf->top__DOT__dut__DOT__branch_u)
                                 ? (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u)
                                 : (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s))));
        bufp->chgBit(oldp+328,((1U & (~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                         ^ vlSelf->top__DOT__dut__DOT__operand_b)))));
        bufp->chgBit(oldp+329,((1U & ((~ vlSelf->top__DOT__dut__DOT__operand_a) 
                                      & vlSelf->top__DOT__dut__DOT__operand_b))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
        bufp->chgBit(oldp+331,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 1U)))));
        bufp->chgBit(oldp+332,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 1U)))));
        bufp->chgBit(oldp+333,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+334,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+335,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+336,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+337,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+338,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+339,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+340,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+341,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+342,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+343,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+344,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+345,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+346,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+347,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+348,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+349,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+350,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+351,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+352,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+353,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+354,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+355,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+356,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+357,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+358,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+359,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+360,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+361,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+362,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+363,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+364,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 2U)))));
        bufp->chgBit(oldp+365,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 2U)))));
        bufp->chgBit(oldp+366,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+367,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+368,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+369,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+370,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+371,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+372,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+373,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+374,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+375,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+376,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+377,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+378,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+379,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+380,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+381,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+382,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+383,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+384,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+385,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+386,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+387,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+388,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+389,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+390,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+391,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+392,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+393,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+394,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+395,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+396,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+397,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 3U)))));
        bufp->chgBit(oldp+398,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 3U)))));
        bufp->chgBit(oldp+399,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+400,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+401,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+402,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+403,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+404,(((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+405,(((vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+406,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 4U)))));
        bufp->chgBit(oldp+407,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 4U)))));
        bufp->chgBit(oldp+408,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+409,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 5U)))));
        bufp->chgBit(oldp+410,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 5U)))));
        bufp->chgBit(oldp+411,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 5U))))));
        bufp->chgBit(oldp+412,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 6U)))));
        bufp->chgBit(oldp+413,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 6U)))));
        bufp->chgBit(oldp+414,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+415,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 7U)))));
        bufp->chgBit(oldp+416,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 7U)))));
        bufp->chgBit(oldp+417,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+418,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 8U)))));
        bufp->chgBit(oldp+419,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 8U)))));
        bufp->chgBit(oldp+420,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+421,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 9U)))));
        bufp->chgBit(oldp+422,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 9U)))));
        bufp->chgBit(oldp+423,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 9U))))));
        bufp->chgBit(oldp+424,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
        bufp->chgBit(oldp+425,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_a))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__operand_b))))));
        bufp->chgBit(oldp+426,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
        bufp->chgBit(oldp+427,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 1U)))));
        bufp->chgBit(oldp+428,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 1U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 1U)))));
        bufp->chgBit(oldp+429,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 1U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+430,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+431,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xaU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+432,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xaU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+433,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+434,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xbU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+435,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xbU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+436,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+437,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xcU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+438,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xcU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+439,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+440,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xdU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+441,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xdU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+442,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+443,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xeU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+444,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xeU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+445,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+446,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xfU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+447,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xfU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+448,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+449,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+450,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+451,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+452,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+453,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+454,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+455,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+456,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+457,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+458,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+459,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+460,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 2U)))));
        bufp->chgBit(oldp+461,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 2U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 2U)))));
        bufp->chgBit(oldp+462,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 2U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+463,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+464,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+465,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+466,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+467,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+468,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+469,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+470,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+471,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+472,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+473,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+474,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+475,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+476,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+477,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+478,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+479,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+480,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+481,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+482,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+483,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+484,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+485,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+486,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+487,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+488,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+489,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+490,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+491,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+492,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+493,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 3U)))));
        bufp->chgBit(oldp+494,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 3U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 3U)))));
        bufp->chgBit(oldp+495,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 3U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+496,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+497,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+498,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+499,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+500,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+501,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+502,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 4U)))));
        bufp->chgBit(oldp+503,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 4U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 4U)))));
        bufp->chgBit(oldp+504,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 4U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+505,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 5U)))));
        bufp->chgBit(oldp+506,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 5U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 5U)))));
        bufp->chgBit(oldp+507,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 5U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+508,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 6U)))));
        bufp->chgBit(oldp+509,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 6U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 6U)))));
        bufp->chgBit(oldp+510,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 6U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+511,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 7U)))));
        bufp->chgBit(oldp+512,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 7U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 7U)))));
        bufp->chgBit(oldp+513,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 7U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+514,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 8U)))));
        bufp->chgBit(oldp+515,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 8U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 8U)))));
        bufp->chgBit(oldp+516,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 8U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+517,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 9U)))));
        bufp->chgBit(oldp+518,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 9U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 9U)))));
        bufp->chgBit(oldp+519,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 9U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 9U))))));
        bufp->chgBit(oldp+520,((1U & (~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                         ^ vlSelf->top__DOT__dut__DOT__rs2_data)))));
        bufp->chgBit(oldp+521,((1U & ((~ vlSelf->top__DOT__dut__DOT__rs1_data) 
                                      & vlSelf->top__DOT__dut__DOT__rs2_data))));
        bufp->chgBit(oldp+522,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      & (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
        bufp->chgBit(oldp+523,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 1U)))));
        bufp->chgBit(oldp+524,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 1U)))));
        bufp->chgBit(oldp+525,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+526,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+527,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+528,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+529,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+530,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+531,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+532,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+533,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+534,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+535,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+536,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+537,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+538,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+539,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+540,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+541,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+542,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+543,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+544,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+545,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+546,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+547,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+548,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+549,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+550,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+551,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+552,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+553,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+554,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+555,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+556,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 2U)))));
        bufp->chgBit(oldp+557,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 2U)))));
        bufp->chgBit(oldp+558,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 2U))))));
        bufp->chgBit(oldp+559,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+560,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+561,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+562,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+563,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+564,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+565,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+566,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+567,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+568,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+569,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+570,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+571,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+572,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+573,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+574,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+575,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+576,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+577,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+578,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+579,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+580,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+581,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+582,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+583,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+584,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+585,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+586,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+587,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+588,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+589,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 3U)))));
        bufp->chgBit(oldp+590,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 3U)))));
        bufp->chgBit(oldp+591,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 3U))))));
        bufp->chgBit(oldp+592,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+593,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+594,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+595,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+596,(((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+597,(((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+598,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 4U)))));
        bufp->chgBit(oldp+599,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 4U)))));
        bufp->chgBit(oldp+600,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 4U))))));
        bufp->chgBit(oldp+601,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 5U)))));
        bufp->chgBit(oldp+602,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 5U)))));
        bufp->chgBit(oldp+603,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 5U))))));
        bufp->chgBit(oldp+604,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 6U)))));
        bufp->chgBit(oldp+605,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 6U)))));
        bufp->chgBit(oldp+606,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 6U))))));
        bufp->chgBit(oldp+607,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 7U)))));
        bufp->chgBit(oldp+608,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 7U)))));
        bufp->chgBit(oldp+609,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 7U))))));
        bufp->chgBit(oldp+610,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 8U)))));
        bufp->chgBit(oldp+611,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 8U)))));
        bufp->chgBit(oldp+612,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 8U))))));
        bufp->chgBit(oldp+613,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 9U)))));
        bufp->chgBit(oldp+614,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 9U)))));
        bufp->chgBit(oldp+615,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 9U))))));
        bufp->chgBit(oldp+616,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
        bufp->chgBit(oldp+617,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs1_data))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__rs2_data))))));
        bufp->chgBit(oldp+618,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
        bufp->chgBit(oldp+619,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 1U)))));
        bufp->chgBit(oldp+620,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 1U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 1U)))));
        bufp->chgBit(oldp+621,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 1U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+622,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+623,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xaU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+624,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xaU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+625,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+626,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xbU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+627,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xbU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+628,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+629,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xcU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+630,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xcU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+631,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+632,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xdU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+633,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xdU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+634,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+635,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xeU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+636,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xeU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+637,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+638,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xfU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+639,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xfU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+640,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+641,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+642,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+643,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+644,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+645,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+646,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+647,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+648,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+649,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+650,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+651,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+652,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 2U)))));
        bufp->chgBit(oldp+653,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 2U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 2U)))));
        bufp->chgBit(oldp+654,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 2U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+655,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+656,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+657,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+658,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+659,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+660,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+661,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+662,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+663,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+664,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+665,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+666,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+667,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+668,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+669,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+670,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+671,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+672,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+673,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+674,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+675,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+676,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+677,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+678,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+679,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+680,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+681,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+682,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+683,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+684,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+685,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 3U)))));
        bufp->chgBit(oldp+686,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 3U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 3U)))));
        bufp->chgBit(oldp+687,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 3U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+688,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+689,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+690,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+691,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+692,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+693,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+694,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 4U)))));
        bufp->chgBit(oldp+695,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 4U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 4U)))));
        bufp->chgBit(oldp+696,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 4U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+697,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 5U)))));
        bufp->chgBit(oldp+698,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 5U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 5U)))));
        bufp->chgBit(oldp+699,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 5U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+700,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 6U)))));
        bufp->chgBit(oldp+701,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 6U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 6U)))));
        bufp->chgBit(oldp+702,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 6U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+703,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 7U)))));
        bufp->chgBit(oldp+704,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 7U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 7U)))));
        bufp->chgBit(oldp+705,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 7U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+706,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 8U)))));
        bufp->chgBit(oldp+707,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 8U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 8U)))));
        bufp->chgBit(oldp+708,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 8U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+709,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 9U)))));
        bufp->chgBit(oldp+710,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 9U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 9U)))));
        bufp->chgBit(oldp+711,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 9U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 9U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+712,(vlSelf->top__DOT__dut__DOT__br_eq));
        bufp->chgBit(oldp+713,(vlSelf->top__DOT__dut__DOT__br_lt));
        bufp->chgBit(oldp+714,(vlSelf->top__DOT__dut__DOT__PC_sel));
        bufp->chgBit(oldp+715,(vlSelf->top__DOT__dut__DOT__dmem_wr));
        bufp->chgIData(oldp+716,(vlSelf->top__DOT__dut__DOT__alu_data),32);
        bufp->chgIData(oldp+717,(vlSelf->top__DOT__dut__DOT__rs2_data),32);
        bufp->chgIData(oldp+718,(vlSelf->top__DOT__dut__DOT__operand_b),32);
        bufp->chgIData(oldp+719,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt),32);
        bufp->chgCData(oldp+720,((0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)),6);
        bufp->chgBit(oldp+721,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt));
        bufp->chgBit(oldp+722,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u));
        bufp->chgBit(oldp+723,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s));
        bufp->chgBit(oldp+724,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt))))));
        bufp->chgBit(oldp+725,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s));
        bufp->chgBit(oldp+726,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt));
        bufp->chgIData(oldp+727,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+728,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+729,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgBit(oldp+730,((1U & vlSelf->top__DOT__dut__DOT__operand_b)));
        bufp->chgBit(oldp+731,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 1U))));
        bufp->chgBit(oldp+732,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+733,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+734,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+735,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+736,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+737,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+738,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+739,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+740,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+741,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+742,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 2U))));
        bufp->chgBit(oldp+743,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+744,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+745,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+746,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+747,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+748,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+749,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+750,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+751,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+752,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+753,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 3U))));
        bufp->chgBit(oldp+754,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+755,((vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+756,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 4U))));
        bufp->chgBit(oldp+757,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 5U))));
        bufp->chgBit(oldp+758,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 6U))));
        bufp->chgBit(oldp+759,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 7U))));
        bufp->chgBit(oldp+760,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 8U))));
        bufp->chgBit(oldp+761,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 9U))));
        bufp->chgBit(oldp+762,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt));
        bufp->chgBit(oldp+763,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp));
        bufp->chgBit(oldp+764,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp));
        bufp->chgBit(oldp+765,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp))))));
        bufp->chgBit(oldp+766,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c));
        bufp->chgBit(oldp+767,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c));
        bufp->chgBit(oldp+768,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c))))));
        bufp->chgIData(oldp+769,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))),32);
        bufp->chgIData(oldp+770,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+771,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+772,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgIData(oldp+773,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
        bufp->chgIData(oldp+774,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
        bufp->chgIData(oldp+775,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
        bufp->chgBit(oldp+776,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
        bufp->chgBit(oldp+777,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 1U))));
        bufp->chgBit(oldp+778,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+779,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+780,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+781,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+782,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+783,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+784,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+785,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+786,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+787,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+788,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 2U))));
        bufp->chgBit(oldp+789,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+790,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+791,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+792,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+793,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+794,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+795,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+796,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+797,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+798,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+799,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 3U))));
        bufp->chgBit(oldp+800,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+801,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+802,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 4U))));
        bufp->chgBit(oldp+803,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 5U))));
        bufp->chgBit(oldp+804,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 6U))));
        bufp->chgBit(oldp+805,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 7U))));
        bufp->chgBit(oldp+806,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 8U))));
        bufp->chgBit(oldp+807,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 9U))));
        bufp->chgBit(oldp+808,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u));
        bufp->chgBit(oldp+809,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s));
        bufp->chgBit(oldp+810,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt))))));
        bufp->chgBit(oldp+811,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s));
        bufp->chgBit(oldp+812,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt));
        bufp->chgIData(oldp+813,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+814,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+815,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgBit(oldp+816,((1U & vlSelf->top__DOT__dut__DOT__rs2_data)));
        bufp->chgBit(oldp+817,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 1U))));
        bufp->chgBit(oldp+818,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+819,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+820,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+821,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+822,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+823,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+824,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+825,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+826,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+827,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+828,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 2U))));
        bufp->chgBit(oldp+829,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+830,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+831,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+832,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+833,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+834,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+835,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+836,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+837,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+838,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+839,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 3U))));
        bufp->chgBit(oldp+840,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+841,((vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+842,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 4U))));
        bufp->chgBit(oldp+843,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 5U))));
        bufp->chgBit(oldp+844,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 6U))));
        bufp->chgBit(oldp+845,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 7U))));
        bufp->chgBit(oldp+846,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 8U))));
        bufp->chgBit(oldp+847,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 9U))));
        bufp->chgBit(oldp+848,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt));
        bufp->chgBit(oldp+849,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp));
        bufp->chgBit(oldp+850,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp));
        bufp->chgBit(oldp+851,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp))))));
        bufp->chgBit(oldp+852,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c));
        bufp->chgBit(oldp+853,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c));
        bufp->chgBit(oldp+854,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c))))));
        bufp->chgIData(oldp+855,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))),32);
        bufp->chgIData(oldp+856,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+857,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+858,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgIData(oldp+859,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
        bufp->chgIData(oldp+860,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
        bufp->chgIData(oldp+861,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
        bufp->chgBit(oldp+862,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
        bufp->chgBit(oldp+863,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+864,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+865,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+866,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+867,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+868,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+869,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+870,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+871,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+872,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+873,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+874,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+875,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+876,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+877,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+878,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+879,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+880,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+881,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+882,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+883,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+884,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+885,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+886,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+887,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+888,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+889,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+890,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+891,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+892,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+893,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 9U))));
        bufp->chgIData(oldp+894,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1),32);
        bufp->chgIData(oldp+895,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2),32);
        bufp->chgCData(oldp+896,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask),4);
    }
    bufp->chgBit(oldp+897,(vlSelf->rst_ni));
    bufp->chgBit(oldp+898,(vlSelf->clk_i));
    bufp->chgIData(oldp+899,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+900,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+901,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+902,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+903,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+904,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+905,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+906,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+907,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+908,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+909,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+910,(vlSelf->io_hex7_o),32);
    bufp->chgIData(oldp+911,(vlSelf->pc_debug_o),32);
    bufp->chgIData(oldp+912,(((2U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                               ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                                   ? ((vlSelf->top__DOT__dut__DOT__instr 
                                       >> 0x1fU) ? 
                                      ((0x40000000U 
                                        & vlSelf->top__DOT__dut__DOT__instr)
                                        ? 0U : ((0x20000000U 
                                                 & vlSelf->top__DOT__dut__DOT__instr)
                                                 ? 0U
                                                 : 
                                                ((0x10000000U 
                                                  & vlSelf->top__DOT__dut__DOT__instr)
                                                  ? vlSelf->top__DOT__dut__DOT__digit9
                                                  : vlSelf->top__DOT__dut__DOT__digit8)))
                                       : ((0x40000000U 
                                           & vlSelf->top__DOT__dut__DOT__instr)
                                           ? ((0x20000000U 
                                               & vlSelf->top__DOT__dut__DOT__instr)
                                               ? ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? vlSelf->top__DOT__dut__DOT__digit7
                                                   : vlSelf->top__DOT__dut__DOT__digit6)
                                               : ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? vlSelf->top__DOT__dut__DOT__digit5
                                                   : vlSelf->top__DOT__dut__DOT__digit4))
                                           : ((0x20000000U 
                                               & vlSelf->top__DOT__dut__DOT__instr)
                                               ? ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? vlSelf->top__DOT__dut__DOT__digit3
                                                   : vlSelf->top__DOT__dut__DOT__digit2)
                                               : ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? vlSelf->top__DOT__dut__DOT__digit1
                                                   : vlSelf->top__DOT__dut__DOT__digit0))))
                                   : ((IData)(4U) + vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc))
                               : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                                   ? ((IData)(vlSelf->top__DOT__dut__DOT__dmem_wr)
                                       ? vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data
                                       : ((0U == (3U 
                                                  & (vlSelf->top__DOT__dut__DOT__instr 
                                                     >> 0xcU)))
                                           ? ((0x4000U 
                                               & vlSelf->top__DOT__dut__DOT__instr)
                                               ? (0xffU 
                                                  & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                               : ((
                                                   ((0x80U 
                                                     & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                                     ? 0xffffffU
                                                     : 0U) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                           : ((1U == 
                                               (3U 
                                                & (vlSelf->top__DOT__dut__DOT__instr 
                                                   >> 0xcU)))
                                               ? ((0x4000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                                   : 
                                                  ((((0x8000U 
                                                      & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                                      ? 0xffffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                               : vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                   : vlSelf->top__DOT__dut__DOT__alu_data))),32);
    bufp->chgIData(oldp+913,(((IData)(vlSelf->top__DOT__dut__DOT__dmem_wr)
                               ? vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data
                               : ((0U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                                                >> 0xcU)))
                                   ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                       ? (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                       : ((((0x80U 
                                             & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                             ? 0xffffffU
                                             : 0U) 
                                           << 8U) | 
                                          (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                   : ((1U == (3U & 
                                              (vlSelf->top__DOT__dut__DOT__instr 
                                               >> 0xcU)))
                                       ? ((0x4000U 
                                           & vlSelf->top__DOT__dut__DOT__instr)
                                           ? (0xffffU 
                                              & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                           : ((((0x8000U 
                                                 & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                                 ? 0xffffU
                                                 : 0U) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                       : vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
