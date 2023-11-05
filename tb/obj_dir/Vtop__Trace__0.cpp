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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dut__DOT__instr),32);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__imm_gen_sel),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__dut__DOT__reg_wr_en));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__dut__DOT__branch_u));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__dut__DOT__op_a_sel));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__dut__DOT__op_b_sel));
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__wb_sel),2);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+12,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc)),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__dut__DOT__imm),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__dut__DOT__operand_a),32);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__dut__DOT__digit9),4);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__dut__DOT__digit8),4);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT__digit7),4);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__digit6),4);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__dut__DOT__digit5),4);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__dut__DOT__digit4),4);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__dut__DOT__digit3),4);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__dut__DOT__digit2),4);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__dut__DOT__digit1),4);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__dut__DOT__digit0),4);
        bufp->chgIData(oldp+26,(((vlSelf->top__DOT__dut__DOT__instr 
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
                                                     ? (IData)(vlSelf->top__DOT__dut__DOT__digit9)
                                                     : (IData)(vlSelf->top__DOT__dut__DOT__digit8))))
                                  : ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr)
                                      ? ((0x20000000U 
                                          & vlSelf->top__DOT__dut__DOT__instr)
                                          ? ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? (IData)(vlSelf->top__DOT__dut__DOT__digit7)
                                              : (IData)(vlSelf->top__DOT__dut__DOT__digit6))
                                          : ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? (IData)(vlSelf->top__DOT__dut__DOT__digit5)
                                              : (IData)(vlSelf->top__DOT__dut__DOT__digit4)))
                                      : ((0x20000000U 
                                          & vlSelf->top__DOT__dut__DOT__instr)
                                          ? ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? (IData)(vlSelf->top__DOT__dut__DOT__digit3)
                                              : (IData)(vlSelf->top__DOT__dut__DOT__digit2))
                                          : ((0x10000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? (IData)(vlSelf->top__DOT__dut__DOT__digit1)
                                              : (IData)(vlSelf->top__DOT__dut__DOT__digit0)))))),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc),32);
        bufp->chgBit(oldp+28,((1U & vlSelf->top__DOT__dut__DOT__operand_a)));
        bufp->chgBit(oldp+29,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 1U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xaU))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xbU))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xcU))));
        bufp->chgBit(oldp+33,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xdU))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xeU))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0xfU))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x10U))));
        bufp->chgBit(oldp+37,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x11U))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x12U))));
        bufp->chgBit(oldp+39,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x13U))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 2U))));
        bufp->chgBit(oldp+41,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x14U))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x15U))));
        bufp->chgBit(oldp+43,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x16U))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x17U))));
        bufp->chgBit(oldp+45,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x18U))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x19U))));
        bufp->chgBit(oldp+47,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+49,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 3U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+53,((vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x1fU)));
        bufp->chgBit(oldp+54,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 4U))));
        bufp->chgBit(oldp+55,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 5U))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 6U))));
        bufp->chgBit(oldp+57,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 7U))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 8U))));
        bufp->chgBit(oldp+59,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                     >> 9U))));
        bufp->chgIData(oldp+60,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a))),32);
        bufp->chgBit(oldp+61,((1U & ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)))));
        bufp->chgBit(oldp+62,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 1U))));
        bufp->chgBit(oldp+63,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+64,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+65,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0xcU))));
        bufp->chgBit(oldp+66,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0xdU))));
        bufp->chgBit(oldp+67,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0xeU))));
        bufp->chgBit(oldp+68,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0xfU))));
        bufp->chgBit(oldp+69,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x10U))));
        bufp->chgBit(oldp+70,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x11U))));
        bufp->chgBit(oldp+71,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x12U))));
        bufp->chgBit(oldp+72,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x13U))));
        bufp->chgBit(oldp+73,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 2U))));
        bufp->chgBit(oldp+74,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x14U))));
        bufp->chgBit(oldp+75,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x15U))));
        bufp->chgBit(oldp+76,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x16U))));
        bufp->chgBit(oldp+77,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x17U))));
        bufp->chgBit(oldp+78,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x18U))));
        bufp->chgBit(oldp+79,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x19U))));
        bufp->chgBit(oldp+80,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+81,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+82,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+83,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+84,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 3U))));
        bufp->chgBit(oldp+85,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+86,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               >> 0x1fU)));
        bufp->chgBit(oldp+87,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 4U))));
        bufp->chgBit(oldp+88,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 5U))));
        bufp->chgBit(oldp+89,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 6U))));
        bufp->chgBit(oldp+90,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 7U))));
        bufp->chgBit(oldp+91,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 8U))));
        bufp->chgBit(oldp+92,((1U & (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                     >> 9U))));
        bufp->chgBit(oldp+93,((1U & vlSelf->top__DOT__dut__DOT__rs1_data)));
        bufp->chgBit(oldp+94,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                     >> 1U))));
        bufp->chgBit(oldp+95,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                     >> 0xaU))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                     >> 0xbU))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                     >> 0xcU))));
        bufp->chgBit(oldp+98,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                     >> 0xdU))));
        bufp->chgBit(oldp+99,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                     >> 0xeU))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+101,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+103,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+105,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 2U))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+107,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+108,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+109,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+111,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+112,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+113,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+114,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+115,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 3U))));
        bufp->chgBit(oldp+117,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+118,((vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+119,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 4U))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 5U))));
        bufp->chgBit(oldp+121,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 6U))));
        bufp->chgBit(oldp+122,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 7U))));
        bufp->chgBit(oldp+123,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 8U))));
        bufp->chgBit(oldp+124,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      >> 9U))));
        bufp->chgIData(oldp+125,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data))),32);
        bufp->chgBit(oldp+126,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__rs1_data)))));
        bufp->chgBit(oldp+127,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+128,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+129,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+130,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+131,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+132,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+133,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+134,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+135,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+136,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+137,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+138,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+139,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+140,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+141,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+142,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+143,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+144,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+145,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+146,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+147,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+148,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+149,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+150,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+151,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+152,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+153,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+154,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+155,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+156,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+157,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      >> 9U))));
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__dut__DOT__digit0),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__dut__DOT__digit1),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__dut__DOT__digit2),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__dut__DOT__digit3),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__dut__DOT__digit4),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__dut__DOT__digit5),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__dut__DOT__digit6),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__dut__DOT__digit7),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__dut__DOT__digit8),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__dut__DOT__digit9),32);
        bufp->chgCData(oldp+168,((vlSelf->top__DOT__dut__DOT__instr 
                                  >> 0x1cU)),4);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__temp),32);
        bufp->chgSData(oldp+170,((0x3fffU & vlSelf->top__DOT__dut__DOT__pc)),14);
        bufp->chgBit(oldp+171,((1U & (vlSelf->top__DOT__dut__DOT__instr 
                                      >> 0xeU))));
        bufp->chgCData(oldp+172,((3U & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+173,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+174,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+175,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                           >> 7U))),5);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[1]),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[2]),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[3]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[4]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[5]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[6]),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[7]),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[8]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[9]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[10]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[11]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[12]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[13]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[14]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[15]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[16]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[17]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[18]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[19]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[20]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[21]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[22]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[23]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[24]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[25]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[26]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[27]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[28]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[29]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[30]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+208,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  + vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+209,(((IData)(1U) + (vlSelf->top__DOT__dut__DOT__operand_a 
                                                 + 
                                                 (~ vlSelf->top__DOT__dut__DOT__operand_b)))),32);
        bufp->chgIData(oldp+210,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+211,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  & vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+212,((vlSelf->top__DOT__dut__DOT__operand_a 
                                  | vlSelf->top__DOT__dut__DOT__operand_b)),32);
        bufp->chgIData(oldp+213,(((0x1fU >= (0x1fU 
                                             & vlSelf->top__DOT__dut__DOT__operand_b))
                                   ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                      << (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                   : 0U)),32);
        bufp->chgIData(oldp+214,(((0x1fU >= (0x1fU 
                                             & vlSelf->top__DOT__dut__DOT__operand_b))
                                   ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                   : 0U)),32);
        bufp->chgQData(oldp+215,(((vlSelf->top__DOT__dut__DOT__operand_a 
                                   >> 0x1fU) ? ((0xffffffff00000000ULL 
                                                 | (QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a))) 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__operand_b))
                                   : ((QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)))),64);
        bufp->chgBit(oldp+217,(((IData)(vlSelf->top__DOT__dut__DOT__branch_u)
                                 ? (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u)
                                 : (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s))));
        bufp->chgBit(oldp+218,((1U & (~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                         ^ vlSelf->top__DOT__dut__DOT__operand_b)))));
        bufp->chgBit(oldp+219,((1U & ((~ vlSelf->top__DOT__dut__DOT__operand_a) 
                                      & vlSelf->top__DOT__dut__DOT__operand_b))));
        bufp->chgBit(oldp+220,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                      & (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
        bufp->chgBit(oldp+221,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 1U)))));
        bufp->chgBit(oldp+222,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 1U)))));
        bufp->chgBit(oldp+223,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 1U))))));
        bufp->chgBit(oldp+224,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+225,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+226,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+227,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+228,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+229,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+230,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+231,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+232,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+233,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+234,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+235,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+236,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+237,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+238,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+239,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+240,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+241,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+242,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+243,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+244,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+245,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+246,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+247,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+248,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+249,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+250,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+251,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+252,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+253,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+254,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 2U)))));
        bufp->chgBit(oldp+255,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 2U)))));
        bufp->chgBit(oldp+256,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 2U))))));
        bufp->chgBit(oldp+257,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+258,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+259,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+260,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+261,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+262,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+263,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+264,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+265,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+266,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+267,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+268,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+269,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+270,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+271,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+272,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+273,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+274,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+275,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+276,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+277,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+278,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+279,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+280,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+281,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+282,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+283,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+284,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+285,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+286,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+287,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 3U)))));
        bufp->chgBit(oldp+288,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 3U)))));
        bufp->chgBit(oldp+289,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 3U))))));
        bufp->chgBit(oldp+290,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+291,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__dut__DOT__operand_b 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+292,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+293,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+294,(((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+295,(((vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+296,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 4U)))));
        bufp->chgBit(oldp+297,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 4U)))));
        bufp->chgBit(oldp+298,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 4U))))));
        bufp->chgBit(oldp+299,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 5U)))));
        bufp->chgBit(oldp+300,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 5U)))));
        bufp->chgBit(oldp+301,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 5U))))));
        bufp->chgBit(oldp+302,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 6U)))));
        bufp->chgBit(oldp+303,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 6U)))));
        bufp->chgBit(oldp+304,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 6U))))));
        bufp->chgBit(oldp+305,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 7U)))));
        bufp->chgBit(oldp+306,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 7U)))));
        bufp->chgBit(oldp+307,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 7U))))));
        bufp->chgBit(oldp+308,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 8U)))));
        bufp->chgBit(oldp+309,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 8U)))));
        bufp->chgBit(oldp+310,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 8U))))));
        bufp->chgBit(oldp+311,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                          ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                         >> 9U)))));
        bufp->chgBit(oldp+312,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 9U)))));
        bufp->chgBit(oldp+313,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 9U))))));
        bufp->chgBit(oldp+314,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
        bufp->chgBit(oldp+315,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_a))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__operand_b))))));
        bufp->chgBit(oldp+316,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
        bufp->chgBit(oldp+317,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 1U)))));
        bufp->chgBit(oldp+318,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 1U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 1U)))));
        bufp->chgBit(oldp+319,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 1U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+320,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+321,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xaU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+322,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xaU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+323,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+324,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xbU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+325,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xbU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+326,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+327,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xcU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+328,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xcU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+329,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+330,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xdU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+331,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xdU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+332,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+333,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xeU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+334,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xeU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+335,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+336,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0xfU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+337,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xfU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+338,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+339,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+340,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+341,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+342,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+343,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+344,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+345,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+346,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+347,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+348,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+349,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+350,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 2U)))));
        bufp->chgBit(oldp+351,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 2U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 2U)))));
        bufp->chgBit(oldp+352,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 2U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+353,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+354,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+355,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+356,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+357,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+358,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+359,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+360,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+361,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+362,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+363,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+364,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+365,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+366,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+367,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+368,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+369,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+370,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+371,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+372,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+373,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+374,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+375,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+376,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+377,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+378,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+379,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+380,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+381,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+382,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+383,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 3U)))));
        bufp->chgBit(oldp+384,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 3U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 3U)))));
        bufp->chgBit(oldp+385,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 3U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+386,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+387,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+388,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+389,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+390,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+391,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+392,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 4U)))));
        bufp->chgBit(oldp+393,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 4U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 4U)))));
        bufp->chgBit(oldp+394,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 4U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+395,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 5U)))));
        bufp->chgBit(oldp+396,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 5U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 5U)))));
        bufp->chgBit(oldp+397,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 5U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+398,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 6U)))));
        bufp->chgBit(oldp+399,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 6U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 6U)))));
        bufp->chgBit(oldp+400,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 6U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+401,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 7U)))));
        bufp->chgBit(oldp+402,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 7U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 7U)))));
        bufp->chgBit(oldp+403,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 7U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+404,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 8U)))));
        bufp->chgBit(oldp+405,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 8U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 8U)))));
        bufp->chgBit(oldp+406,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 8U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+407,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                         >> 9U)))));
        bufp->chgBit(oldp+408,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                          >> 9U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                       >> 9U)))));
        bufp->chgBit(oldp+409,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 9U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 9U))))));
        bufp->chgBit(oldp+410,((1U & (~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                         ^ vlSelf->top__DOT__dut__DOT__rs2_data)))));
        bufp->chgBit(oldp+411,((1U & ((~ vlSelf->top__DOT__dut__DOT__rs1_data) 
                                      & vlSelf->top__DOT__dut__DOT__rs2_data))));
        bufp->chgBit(oldp+412,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      & (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
        bufp->chgBit(oldp+413,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 1U)))));
        bufp->chgBit(oldp+414,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 1U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 1U)))));
        bufp->chgBit(oldp+415,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 1U))))));
        bufp->chgBit(oldp+416,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+417,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+418,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+419,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+420,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+421,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+422,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+423,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+424,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+425,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+426,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+427,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+428,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+429,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+430,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+431,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+432,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+433,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+434,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+435,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+436,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+437,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+438,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+439,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+440,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+441,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+442,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+443,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+444,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+445,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+446,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 2U)))));
        bufp->chgBit(oldp+447,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 2U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 2U)))));
        bufp->chgBit(oldp+448,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 2U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 2U))))));
        bufp->chgBit(oldp+449,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+450,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+451,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+452,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+453,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+454,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+455,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+456,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+457,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+458,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+459,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+460,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+461,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+462,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+463,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+464,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+465,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+466,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+467,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+468,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+469,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+470,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+471,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+472,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+473,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+474,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+475,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+476,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+477,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+478,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+479,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 3U)))));
        bufp->chgBit(oldp+480,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 3U)))));
        bufp->chgBit(oldp+481,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 3U))))));
        bufp->chgBit(oldp+482,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+483,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+484,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+485,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+486,(((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+487,(((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+488,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 4U)))));
        bufp->chgBit(oldp+489,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 4U)))));
        bufp->chgBit(oldp+490,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 4U))))));
        bufp->chgBit(oldp+491,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 5U)))));
        bufp->chgBit(oldp+492,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 5U)))));
        bufp->chgBit(oldp+493,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 5U))))));
        bufp->chgBit(oldp+494,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 6U)))));
        bufp->chgBit(oldp+495,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 6U)))));
        bufp->chgBit(oldp+496,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 6U))))));
        bufp->chgBit(oldp+497,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 7U)))));
        bufp->chgBit(oldp+498,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 7U)))));
        bufp->chgBit(oldp+499,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 7U))))));
        bufp->chgBit(oldp+500,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 8U)))));
        bufp->chgBit(oldp+501,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 8U)))));
        bufp->chgBit(oldp+502,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 8U))))));
        bufp->chgBit(oldp+503,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                         >> 9U)))));
        bufp->chgBit(oldp+504,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 9U)))));
        bufp->chgBit(oldp+505,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 9U))))));
        bufp->chgBit(oldp+506,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
        bufp->chgBit(oldp+507,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs1_data))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__rs2_data))))));
        bufp->chgBit(oldp+508,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
        bufp->chgBit(oldp+509,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 1U)))));
        bufp->chgBit(oldp+510,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 1U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 1U)))));
        bufp->chgBit(oldp+511,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 1U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 1U))))));
        bufp->chgBit(oldp+512,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+513,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xaU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+514,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xaU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+515,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+516,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xbU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+517,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xbU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+518,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+519,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xcU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+520,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xcU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+521,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+522,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xdU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+523,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xdU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+524,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+525,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xeU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+526,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xeU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+527,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+528,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0xfU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+529,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xfU) & (~ 
                                                   (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+530,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+531,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+532,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+533,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+534,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+535,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+536,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+537,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+538,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+539,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+540,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+541,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+542,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 2U)))));
        bufp->chgBit(oldp+543,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 2U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 2U)))));
        bufp->chgBit(oldp+544,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 2U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 2U))))));
        bufp->chgBit(oldp+545,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+546,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+547,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+548,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+549,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+550,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+551,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+552,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+553,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+554,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+555,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+556,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+557,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+558,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+559,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+560,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+561,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+562,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+563,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+564,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+565,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+566,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+567,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+568,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+569,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+570,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+571,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+572,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+573,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+574,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+575,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 3U)))));
        bufp->chgBit(oldp+576,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 3U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 3U)))));
        bufp->chgBit(oldp+577,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 3U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 3U))))));
        bufp->chgBit(oldp+578,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+579,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+580,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+581,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+582,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+583,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+584,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 4U)))));
        bufp->chgBit(oldp+585,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 4U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 4U)))));
        bufp->chgBit(oldp+586,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 4U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 4U))))));
        bufp->chgBit(oldp+587,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 5U)))));
        bufp->chgBit(oldp+588,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 5U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 5U)))));
        bufp->chgBit(oldp+589,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 5U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 5U))))));
        bufp->chgBit(oldp+590,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 6U)))));
        bufp->chgBit(oldp+591,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 6U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 6U)))));
        bufp->chgBit(oldp+592,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 6U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 6U))))));
        bufp->chgBit(oldp+593,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 7U)))));
        bufp->chgBit(oldp+594,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 7U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 7U)))));
        bufp->chgBit(oldp+595,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 7U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 7U))))));
        bufp->chgBit(oldp+596,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 8U)))));
        bufp->chgBit(oldp+597,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 8U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 8U)))));
        bufp->chgBit(oldp+598,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 8U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 8U))))));
        bufp->chgBit(oldp+599,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                         >> 9U)))));
        bufp->chgBit(oldp+600,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                          >> 9U)) & 
                                      (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                       >> 9U)))));
        bufp->chgBit(oldp+601,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 9U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 9U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+602,(vlSelf->top__DOT__dut__DOT__br_eq));
        bufp->chgBit(oldp+603,(vlSelf->top__DOT__dut__DOT__br_lt));
        bufp->chgBit(oldp+604,(vlSelf->top__DOT__dut__DOT__PC_sel));
        bufp->chgBit(oldp+605,(vlSelf->top__DOT__dut__DOT__dmem_wr));
        bufp->chgIData(oldp+606,(vlSelf->top__DOT__dut__DOT__alu_data),32);
        bufp->chgIData(oldp+607,(vlSelf->top__DOT__dut__DOT__rs2_data),32);
        bufp->chgIData(oldp+608,(vlSelf->top__DOT__dut__DOT__operand_b),32);
        bufp->chgIData(oldp+609,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt),32);
        bufp->chgCData(oldp+610,((0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)),6);
        bufp->chgBit(oldp+611,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt));
        bufp->chgBit(oldp+612,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u));
        bufp->chgBit(oldp+613,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s));
        bufp->chgBit(oldp+614,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt))))));
        bufp->chgBit(oldp+615,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s));
        bufp->chgBit(oldp+616,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt));
        bufp->chgIData(oldp+617,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+618,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+619,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgBit(oldp+620,((1U & vlSelf->top__DOT__dut__DOT__operand_b)));
        bufp->chgBit(oldp+621,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 1U))));
        bufp->chgBit(oldp+622,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xaU))));
        bufp->chgBit(oldp+623,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xbU))));
        bufp->chgBit(oldp+624,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xcU))));
        bufp->chgBit(oldp+625,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xdU))));
        bufp->chgBit(oldp+626,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xeU))));
        bufp->chgBit(oldp+627,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0xfU))));
        bufp->chgBit(oldp+628,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x10U))));
        bufp->chgBit(oldp+629,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x11U))));
        bufp->chgBit(oldp+630,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x12U))));
        bufp->chgBit(oldp+631,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x13U))));
        bufp->chgBit(oldp+632,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 2U))));
        bufp->chgBit(oldp+633,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x14U))));
        bufp->chgBit(oldp+634,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x15U))));
        bufp->chgBit(oldp+635,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x16U))));
        bufp->chgBit(oldp+636,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x17U))));
        bufp->chgBit(oldp+637,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x18U))));
        bufp->chgBit(oldp+638,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x19U))));
        bufp->chgBit(oldp+639,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+640,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+641,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+642,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+643,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 3U))));
        bufp->chgBit(oldp+644,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+645,((vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0x1fU)));
        bufp->chgBit(oldp+646,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 4U))));
        bufp->chgBit(oldp+647,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 5U))));
        bufp->chgBit(oldp+648,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 6U))));
        bufp->chgBit(oldp+649,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 7U))));
        bufp->chgBit(oldp+650,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 8U))));
        bufp->chgBit(oldp+651,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                      >> 9U))));
        bufp->chgBit(oldp+652,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt));
        bufp->chgBit(oldp+653,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp));
        bufp->chgBit(oldp+654,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp));
        bufp->chgBit(oldp+655,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp))))));
        bufp->chgBit(oldp+656,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c));
        bufp->chgBit(oldp+657,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c));
        bufp->chgBit(oldp+658,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c))))));
        bufp->chgIData(oldp+659,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))),32);
        bufp->chgIData(oldp+660,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+661,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+662,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgIData(oldp+663,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
        bufp->chgIData(oldp+664,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
        bufp->chgIData(oldp+665,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
        bufp->chgBit(oldp+666,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
        bufp->chgBit(oldp+667,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 1U))));
        bufp->chgBit(oldp+668,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+669,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+670,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+671,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+672,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+673,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+674,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+675,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+676,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+677,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+678,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 2U))));
        bufp->chgBit(oldp+679,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+680,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+681,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+682,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+683,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+684,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+685,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+686,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+687,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+688,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+689,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 3U))));
        bufp->chgBit(oldp+690,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+691,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+692,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 4U))));
        bufp->chgBit(oldp+693,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 5U))));
        bufp->chgBit(oldp+694,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 6U))));
        bufp->chgBit(oldp+695,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 7U))));
        bufp->chgBit(oldp+696,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 8U))));
        bufp->chgBit(oldp+697,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                      >> 9U))));
        bufp->chgBit(oldp+698,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u));
        bufp->chgBit(oldp+699,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s));
        bufp->chgBit(oldp+700,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt))))));
        bufp->chgBit(oldp+701,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s));
        bufp->chgBit(oldp+702,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt));
        bufp->chgIData(oldp+703,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+704,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+705,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgBit(oldp+706,((1U & vlSelf->top__DOT__dut__DOT__rs2_data)));
        bufp->chgBit(oldp+707,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 1U))));
        bufp->chgBit(oldp+708,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+709,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+710,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+711,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+712,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+713,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+714,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+715,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+716,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+717,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+718,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 2U))));
        bufp->chgBit(oldp+719,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+720,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+721,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+722,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+723,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+724,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+725,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+726,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+727,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+728,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+729,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 3U))));
        bufp->chgBit(oldp+730,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+731,((vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+732,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 4U))));
        bufp->chgBit(oldp+733,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 5U))));
        bufp->chgBit(oldp+734,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 6U))));
        bufp->chgBit(oldp+735,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 7U))));
        bufp->chgBit(oldp+736,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 8U))));
        bufp->chgBit(oldp+737,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                      >> 9U))));
        bufp->chgBit(oldp+738,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt));
        bufp->chgBit(oldp+739,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp));
        bufp->chgBit(oldp+740,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp));
        bufp->chgBit(oldp+741,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp))))));
        bufp->chgBit(oldp+742,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c));
        bufp->chgBit(oldp+743,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c));
        bufp->chgBit(oldp+744,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c) 
                                         | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c))))));
        bufp->chgIData(oldp+745,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))),32);
        bufp->chgIData(oldp+746,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
        bufp->chgIData(oldp+747,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
        bufp->chgIData(oldp+748,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
        bufp->chgIData(oldp+749,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
        bufp->chgIData(oldp+750,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
        bufp->chgIData(oldp+751,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
        bufp->chgBit(oldp+752,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
        bufp->chgBit(oldp+753,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+754,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+755,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+756,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+757,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+758,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+759,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+760,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+761,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+762,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+763,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+764,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+765,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+766,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+767,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+768,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+769,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+770,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+771,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+772,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+773,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+774,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+775,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+776,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+777,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+778,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+779,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+780,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+781,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+782,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+783,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                      >> 9U))));
        bufp->chgIData(oldp+784,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1),32);
        bufp->chgIData(oldp+785,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2),32);
        bufp->chgCData(oldp+786,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask),4);
    }
    bufp->chgBit(oldp+787,(vlSelf->rst_ni));
    bufp->chgBit(oldp+788,(vlSelf->clk_i));
    bufp->chgIData(oldp+789,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+790,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+791,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+792,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+793,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+794,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+795,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+796,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+797,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+798,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+799,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+800,(vlSelf->io_hex7_o),32);
    bufp->chgIData(oldp+801,(vlSelf->pc_debug_o),32);
    bufp->chgIData(oldp+802,(((2U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
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
                                                  ? (IData)(vlSelf->top__DOT__dut__DOT__digit9)
                                                  : (IData)(vlSelf->top__DOT__dut__DOT__digit8))))
                                       : ((0x40000000U 
                                           & vlSelf->top__DOT__dut__DOT__instr)
                                           ? ((0x20000000U 
                                               & vlSelf->top__DOT__dut__DOT__instr)
                                               ? ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__digit7)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__digit6))
                                               : ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__digit5)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__digit4)))
                                           : ((0x20000000U 
                                               & vlSelf->top__DOT__dut__DOT__instr)
                                               ? ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__digit3)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__digit2))
                                               : ((0x10000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__digit1)
                                                   : (IData)(vlSelf->top__DOT__dut__DOT__digit0)))))
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
    bufp->chgIData(oldp+803,(((IData)(vlSelf->top__DOT__dut__DOT__dmem_wr)
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
