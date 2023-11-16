// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+900,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+901,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+902,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+903,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+904,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+905,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+906,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+907,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+908,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+909,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+910,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+911,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+912,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+900,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+901,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+902,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+903,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+904,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+905,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+906,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+907,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+908,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+909,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+910,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+911,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+912,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+899,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+900,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+912,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+901,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+902,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+903,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+904,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+905,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+906,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+907,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+908,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+909,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+910,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+911,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+5,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+713,"br_eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+714,"br_lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+6,"imm_gen_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,"reg_wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+715,"PC_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"branch_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"dmem_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+11,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+12,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+13,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+719,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,"digit9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,"digit8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,"digit7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,"digit6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,"digit5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,"digit4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,"digit3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,"digit2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"digit1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"digit0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+916,"digit_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,"digit_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"temp9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,"temp8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"temp7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"temp6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"temp5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"temp4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"temp3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"temp0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,"busy9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+40,"busy8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"busy7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+42,"busy6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+43,"busy5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"busy4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"busy3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+46,"busy2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+47,"busy1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+48,"busy0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+49,"valid9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+50,"valid8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"valid7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+52,"valid6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+53,"valid5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+54,"valid4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+55,"valid3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"valid2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"valid1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"valid0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"done9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+60,"done8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+61,"done7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+62,"done6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+63,"done5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+64,"done4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+65,"done3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+66,"done2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"done1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+68,"done0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+917,"start",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("PC_block ");
    tracep->declBit(c+899,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+717,"pc_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"pc_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"pc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+720,"pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_block ");
    tracep->declBus(c+17,"in_alu_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+719,"in_alu_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+9,"branch_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+717,"out_alu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+319,"alu_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,"alu_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,"alu_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,"alu_and",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,"alu_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,"alu_sll",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,"alu_srl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+326,"alu_sra",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+721,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+328,"eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+722,"lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+918,"ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+919,"MINUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+920,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+921,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+922,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+923,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+924,"SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+925,"SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+926,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+927,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+928,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->pushNamePrefix("compare_u_s ");
    tracep->declBus(c+17,"data_in_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+719,"data_in_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+9,"branch_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"lessthan",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+723,"equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+724,"equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+725,"lessthan_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+726,"lessthan_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+17,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+719,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+723,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+728,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+70,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+71,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+72,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+73,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+74,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+75,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+76,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+77,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+78,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+79,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+80,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+741,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+81,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+82,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+83,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+84,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+85,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+746,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+86,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+747,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+87,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+748,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+88,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+749,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+89,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+750,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+90,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+751,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+91,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+752,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+92,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+753,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+93,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+94,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+95,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+96,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+97,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+758,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+98,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+99,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+100,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+101,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+17,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+719,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+724,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+763,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+764,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+765,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+766,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+767,"eq_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+768,"gt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+769,"lt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+102,"a_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,"b_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+17,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+719,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+764,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+771,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+70,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+71,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+72,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+73,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+74,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+75,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+76,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+77,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+78,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+79,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+80,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+741,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+81,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+82,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+83,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+84,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+85,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+746,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+86,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+747,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+87,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+748,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+88,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+749,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+89,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+750,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+90,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+751,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+91,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+752,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+92,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+753,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+93,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+94,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+95,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+96,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+97,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+758,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+98,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+99,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+100,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+101,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+102,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+770,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+767,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+768,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+774,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+775,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+103,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+104,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+105,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+106,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+780,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+107,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+108,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+109,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+110,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+111,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+785,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+113,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+114,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+115,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+116,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+790,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+117,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+118,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+792,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+119,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+120,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+121,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+795,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+122,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+123,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+797,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+124,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+125,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+126,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+127,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+128,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+802,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+129,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+130,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+131,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+509,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+510,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+132,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+514,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+133,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+807,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+134,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+808,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("br_compare ");
    tracep->declBus(c+15,"data_in_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+718,"data_in_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+9,"branch_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+714,"lessthan",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+809,"equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+810,"equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+811,"lessthan_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+812,"lessthan_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+15,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+718,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+809,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+814,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+816,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+135,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+817,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+136,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+137,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+819,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+138,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+139,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+140,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+822,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+141,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+142,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+143,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+144,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+145,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+146,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+147,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+829,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+148,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+149,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+150,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+151,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+152,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+834,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+153,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+154,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+155,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+156,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+157,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+839,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+589,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+158,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+159,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+594,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+160,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+161,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+162,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+844,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+604,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+163,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+164,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+846,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+608,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+609,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+165,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+611,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+166,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+614,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+616,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+15,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+718,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+810,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+849,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+812,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+850,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+851,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+852,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+853,"eq_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+854,"gt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+855,"lt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+167,"a_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+856,"b_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+15,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+718,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+850,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+851,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+857,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+858,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+859,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+135,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+817,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+136,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+137,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+819,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+138,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+139,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+140,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+822,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+141,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+142,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+143,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+144,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+145,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+146,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+147,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+829,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+148,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+149,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+150,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+151,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+152,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+834,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+153,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+154,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+155,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+156,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+157,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+839,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+589,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+158,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+159,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+594,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+160,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+161,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+162,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+844,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+604,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+163,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+164,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+846,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+608,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+609,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+165,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+611,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+166,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+614,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+616,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+167,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+856,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+853,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+860,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+861,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+862,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+168,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+617,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+618,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+619,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+169,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+864,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+170,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+865,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+624,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+171,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+866,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+626,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+172,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+867,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+629,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+631,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+173,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+868,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+632,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+633,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+174,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+636,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+637,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+175,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+176,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+871,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+643,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+177,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+872,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+178,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+873,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+179,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+874,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+180,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+875,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+653,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+181,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+876,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+182,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+877,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+659,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+660,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+183,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+878,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+663,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+664,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+184,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+879,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+665,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+666,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+185,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+880,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+670,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+186,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+881,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+187,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+882,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+188,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+883,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+189,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+884,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+680,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+190,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+885,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+191,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+686,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+687,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+192,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+887,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+691,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+193,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+888,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+692,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+693,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+194,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+697,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+195,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+890,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+698,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+699,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+196,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+702,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+197,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+704,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+198,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+893,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+709,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+199,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+894,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ctr_unit_block ");
    tracep->declBus(c+5,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+713,"br_eq",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+714,"br_lt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"imm_gen_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+7,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+8,"reg_wr_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"PC_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"branch_u",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"dmem_wr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+929,"OP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+930,"OP_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+931,"LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+932,"STORE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+933,"BRANCH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+934,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+935,"AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+936,"JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+937,"JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+938,"HEX_DEC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+939,"ADD_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+940,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+941,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+942,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+943,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+944,"SRL_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+945,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+946,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+939,"ADDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+941,"SLTI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+942,"SLTIU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+943,"XORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+945,"ORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+946,"ANDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+940,"SLLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+944,"SRLI_SRAI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+939,"LB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+940,"LH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+941,"LW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+943,"LBU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+944,"LHU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+939,"SB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+940,"SH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+941,"SW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+939,"BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+940,"BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+943,"BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+944,"BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+945,"BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+946,"BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("digit_sel_block ");
    tracep->declBus(c+27,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"f",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"g",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"h",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"j",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"k",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+947,"l",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+947,"m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+947,"n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+947,"q",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+947,"r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+947,"s",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+200,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+28,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hex_to_dec ");
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+900,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"temp9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"temp8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"temp7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"temp6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"temp5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"temp4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"temp3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"temp2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"temp1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"temp0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+39,"busy9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"busy8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"busy7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"busy6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"busy5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"busy4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"busy3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"busy2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"busy1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"busy0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"valid9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"valid8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"valid7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"valid6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"valid5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"valid4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"valid3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"valid2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"valid1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"valid0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"done9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"done8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"done7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"done6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"done5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"done4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"done3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"done2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"done1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"done0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"digit9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"digit8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"digit7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"digit6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"digit5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"digit4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"digit3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"digit2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"digit1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"digit0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"start",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("d0 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+48,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+201,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+204,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+206,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+208,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d1 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+47,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+209,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+212,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+214,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+216,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d2 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+46,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+217,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+220,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+222,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+224,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d3 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+45,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+225,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+228,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+230,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+232,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d4 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+34,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+233,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+236,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+238,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+240,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d5 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+34,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+241,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+244,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+246,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+248,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d6 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+42,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+252,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+254,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+256,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d7 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+32,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+41,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+257,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+260,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+262,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+264,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d8 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+40,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+265,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+268,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+270,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+272,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d9 ");
    tracep->declBus(c+915,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+948,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+39,"busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"rem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"b1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,"quo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,"quo_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+276,"acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+278,"acc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+280,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem_block ");
    tracep->declBit(c+899,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,0);
    tracep->declBus(c+5,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+949,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen_block ");
    tracep->declBus(c+5,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"imm_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+16,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+939,"R",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+940,"I",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+941,"B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+942,"J1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+943,"J2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+944,"U",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+946,"S",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_block ");
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+899,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"unsigned_en_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+717,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+718,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+283,"sel_mod",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+900,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+901,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+902,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+903,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+904,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+905,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+906,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+907,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+908,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+909,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+910,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+911,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+914,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+896,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_a ");
    tracep->declBus(c+15,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+10,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_b ");
    tracep->declBus(c+718,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+16,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+719,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_block ");
    tracep->declBus(c+913,"data_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+284,"addr_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+285,"addr_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+286,"addr_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+899,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"wr_en_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"data_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+718,"data_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+950,"nu_reg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+287+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_sel_block ");
    tracep->declBus(c+717,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+914,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+913,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+915,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__start));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__instr),32);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__imm_gen_sel),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__alu_op),4);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__dut__DOT__reg_wr_en));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__dut__DOT__branch_u));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__dut__DOT__op_a_sel));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__dut__DOT__op_b_sel));
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__wb_sel),2);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+14,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc)),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__dut__DOT__rs1_data),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__dut__DOT__imm),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__dut__DOT__operand_a),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__dut__DOT__digit9),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__dut__DOT__digit8),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__dut__DOT__digit7),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__dut__DOT__digit6),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__dut__DOT__digit5),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__dut__DOT__digit4),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__dut__DOT__digit3),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__dut__DOT__digit2),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__dut__DOT__digit1),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__dut__DOT__digit0),32);
    bufp->fullIData(oldp+28,(((vlSelf->top__DOT__dut__DOT__instr 
                               >> 0x1fU) ? ((0x40000000U 
                                             & vlSelf->top__DOT__dut__DOT__instr)
                                             ? 0U : 
                                            ((0x20000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? 0U : 
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
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__dut__DOT__temp9),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__dut__DOT__temp8),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__dut__DOT__temp7),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__temp6),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__dut__DOT__temp5),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__dut__DOT__temp4),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__dut__DOT__temp3),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__dut__DOT__temp2),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__dut__DOT__temp1),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__temp0),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__dut__DOT__busy9));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__dut__DOT__busy8));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__dut__DOT__busy7));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__dut__DOT__busy6));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__dut__DOT__busy5));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__dut__DOT__busy4));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__dut__DOT__busy3));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__dut__DOT__busy2));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__dut__DOT__busy1));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__dut__DOT__busy0));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__dut__DOT__valid9));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__dut__DOT__valid8));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__dut__DOT__valid7));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__dut__DOT__valid6));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__dut__DOT__valid5));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__dut__DOT__valid4));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__dut__DOT__valid3));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__dut__DOT__valid2));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__dut__DOT__valid1));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__dut__DOT__valid0));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__dut__DOT__done9));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__dut__DOT__done8));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__dut__DOT__done7));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__dut__DOT__done6));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__dut__DOT__done5));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__dut__DOT__done4));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__dut__DOT__done3));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__dut__DOT__done2));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__dut__DOT__done1));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__dut__DOT__done0));
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc),32);
    bufp->fullBit(oldp+70,((1U & vlSelf->top__DOT__dut__DOT__operand_a)));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 1U))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xaU))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xbU))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xcU))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xdU))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+79,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+80,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+82,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 2U))));
    bufp->fullBit(oldp+83,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x14U))));
    bufp->fullBit(oldp+84,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x15U))));
    bufp->fullBit(oldp+85,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x16U))));
    bufp->fullBit(oldp+86,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x17U))));
    bufp->fullBit(oldp+87,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x18U))));
    bufp->fullBit(oldp+88,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x19U))));
    bufp->fullBit(oldp+89,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+90,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 3U))));
    bufp->fullBit(oldp+94,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+95,((vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 0x1fU)));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 4U))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 5U))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 6U))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 7U))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                   >> 8U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                   >> 9U))));
    bufp->fullIData(oldp+102,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a))),32);
    bufp->fullBit(oldp+103,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)))));
    bufp->fullBit(oldp+104,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 1U))));
    bufp->fullBit(oldp+105,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+106,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+107,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+108,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+109,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+110,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+111,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+112,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+113,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+114,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+115,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 2U))));
    bufp->fullBit(oldp+116,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+117,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+118,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+119,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+120,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+121,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+122,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+123,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+124,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+125,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+126,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 3U))));
    bufp->fullBit(oldp+127,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+128,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+129,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 4U))));
    bufp->fullBit(oldp+130,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 5U))));
    bufp->fullBit(oldp+131,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 6U))));
    bufp->fullBit(oldp+132,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 7U))));
    bufp->fullBit(oldp+133,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 8U))));
    bufp->fullBit(oldp+134,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> 9U))));
    bufp->fullBit(oldp+135,((1U & vlSelf->top__DOT__dut__DOT__rs1_data)));
    bufp->fullBit(oldp+136,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 1U))));
    bufp->fullBit(oldp+137,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+138,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+139,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+140,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+142,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+143,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+145,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+146,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+147,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 2U))));
    bufp->fullBit(oldp+148,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+149,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+150,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+151,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+152,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+153,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+154,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+155,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+156,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+157,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 3U))));
    bufp->fullBit(oldp+159,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+160,((vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+161,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 4U))));
    bufp->fullBit(oldp+162,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 5U))));
    bufp->fullBit(oldp+163,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 6U))));
    bufp->fullBit(oldp+164,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 7U))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 8U))));
    bufp->fullBit(oldp+166,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 9U))));
    bufp->fullIData(oldp+167,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data))),32);
    bufp->fullBit(oldp+168,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)))));
    bufp->fullBit(oldp+169,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+170,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+171,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+172,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+173,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+174,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+175,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+176,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+177,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+178,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+179,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+180,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+181,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+182,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+183,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+184,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+185,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+186,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+187,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+188,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+189,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+190,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+191,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+192,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+193,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+194,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+195,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+196,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+197,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+198,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+199,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 9U))));
    bufp->fullCData(oldp+200,((vlSelf->top__DOT__dut__DOT__instr 
                               >> 0x1cU)),4);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__b1),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo_next),32);
    bufp->fullQData(oldp+204,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc),33);
    bufp->fullQData(oldp+206,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next),33);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i),5);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__b1),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo_next),32);
    bufp->fullQData(oldp+212,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc),33);
    bufp->fullQData(oldp+214,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next),33);
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i),5);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__b1),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo_next),32);
    bufp->fullQData(oldp+220,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc),33);
    bufp->fullQData(oldp+222,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next),33);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i),5);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__b1),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo_next),32);
    bufp->fullQData(oldp+228,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc),33);
    bufp->fullQData(oldp+230,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next),33);
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i),5);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__b1),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo_next),32);
    bufp->fullQData(oldp+236,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc),33);
    bufp->fullQData(oldp+238,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next),33);
    bufp->fullCData(oldp+240,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i),5);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__b1),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo_next),32);
    bufp->fullQData(oldp+244,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc),33);
    bufp->fullQData(oldp+246,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next),33);
    bufp->fullCData(oldp+248,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i),5);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__b1),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo_next),32);
    bufp->fullQData(oldp+252,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc),33);
    bufp->fullQData(oldp+254,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next),33);
    bufp->fullCData(oldp+256,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i),5);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__b1),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo_next),32);
    bufp->fullQData(oldp+260,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc),33);
    bufp->fullQData(oldp+262,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next),33);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i),5);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__b1),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo_next),32);
    bufp->fullQData(oldp+268,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc),33);
    bufp->fullQData(oldp+270,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next),33);
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i),5);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__b1),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo_next),32);
    bufp->fullQData(oldp+276,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc),33);
    bufp->fullQData(oldp+278,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next),33);
    bufp->fullCData(oldp+280,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i),5);
    bufp->fullSData(oldp+281,((0x3fffU & vlSelf->top__DOT__dut__DOT__pc)),14);
    bufp->fullBit(oldp+282,((1U & (vlSelf->top__DOT__dut__DOT__instr 
                                   >> 0xeU))));
    bufp->fullCData(oldp+283,((3U & (vlSelf->top__DOT__dut__DOT__instr 
                                     >> 0xcU))),2);
    bufp->fullCData(oldp+284,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+285,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+286,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 7U))),5);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[1]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[2]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[3]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[4]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[5]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[6]),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[7]),32);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[8]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[9]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[10]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[11]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[12]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[13]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[14]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[15]),32);
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[16]),32);
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[17]),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[18]),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[19]),32);
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[20]),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[21]),32);
    bufp->fullIData(oldp+309,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[22]),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[23]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[24]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[25]),32);
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[26]),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[27]),32);
    bufp->fullIData(oldp+315,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[28]),32);
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[29]),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[30]),32);
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[31]),32);
    bufp->fullIData(oldp+319,((vlSelf->top__DOT__dut__DOT__operand_a 
                               + vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+320,(((IData)(1U) + (vlSelf->top__DOT__dut__DOT__operand_a 
                                              + (~ vlSelf->top__DOT__dut__DOT__operand_b)))),32);
    bufp->fullIData(oldp+321,((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+322,((vlSelf->top__DOT__dut__DOT__operand_a 
                               & vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+323,((vlSelf->top__DOT__dut__DOT__operand_a 
                               | vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+324,(((0x1fU >= (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                   << (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                : 0U)),32);
    bufp->fullIData(oldp+325,(((0x1fU >= (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                   >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                : 0U)),32);
    bufp->fullQData(oldp+326,(((vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x1fU) ? ((0xffffffff00000000ULL 
                                              | (QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a))) 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__operand_b))
                                : ((QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)))),64);
    bufp->fullBit(oldp+328,(((IData)(vlSelf->top__DOT__dut__DOT__branch_u)
                              ? (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u)
                              : (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s))));
    bufp->fullBit(oldp+329,((1U & (~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                      ^ vlSelf->top__DOT__dut__DOT__operand_b)))));
    bufp->fullBit(oldp+330,((1U & ((~ vlSelf->top__DOT__dut__DOT__operand_a) 
                                   & vlSelf->top__DOT__dut__DOT__operand_b))));
    bufp->fullBit(oldp+331,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                   & (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    bufp->fullBit(oldp+332,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 1U)))));
    bufp->fullBit(oldp+333,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 1U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 1U)))));
    bufp->fullBit(oldp+334,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+335,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+336,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+337,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+338,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+339,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+340,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+341,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+342,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+343,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+344,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+345,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+346,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+347,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+348,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+349,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+350,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+351,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+352,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+353,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+354,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+355,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+356,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+357,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+358,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+359,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+360,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+361,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+362,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+363,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+364,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+365,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 2U)))));
    bufp->fullBit(oldp+366,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 2U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 2U)))));
    bufp->fullBit(oldp+367,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+368,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+369,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+370,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+371,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+372,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+373,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+374,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+375,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+376,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+377,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+378,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+379,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+380,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+381,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+382,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+383,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+384,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+385,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+386,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+387,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+388,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+389,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+390,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+391,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+392,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+393,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+394,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+395,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+396,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+397,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+398,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 3U)))));
    bufp->fullBit(oldp+399,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 3U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 3U)))));
    bufp->fullBit(oldp+400,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+401,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+402,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+403,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+404,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+405,(((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+406,(((vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+407,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 4U)))));
    bufp->fullBit(oldp+408,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 4U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 4U)))));
    bufp->fullBit(oldp+409,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+410,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 5U)))));
    bufp->fullBit(oldp+411,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 5U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 5U)))));
    bufp->fullBit(oldp+412,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+413,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 6U)))));
    bufp->fullBit(oldp+414,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 6U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 6U)))));
    bufp->fullBit(oldp+415,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+416,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 7U)))));
    bufp->fullBit(oldp+417,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 7U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 7U)))));
    bufp->fullBit(oldp+418,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+419,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 8U)))));
    bufp->fullBit(oldp+420,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 8U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 8U)))));
    bufp->fullBit(oldp+421,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+422,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 9U)))));
    bufp->fullBit(oldp+423,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 9U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 9U)))));
    bufp->fullBit(oldp+424,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+425,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
    bufp->fullBit(oldp+426,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_b))))));
    bufp->fullBit(oldp+427,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
    bufp->fullBit(oldp+428,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 1U)))));
    bufp->fullBit(oldp+429,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 1U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+430,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 1U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+431,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+432,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xaU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+433,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xaU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+434,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+435,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xbU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+436,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xbU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+437,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+438,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xcU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+439,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xcU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+440,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+441,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xdU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+442,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xdU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+443,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+444,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xeU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+445,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xeU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+446,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+447,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xfU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+448,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xfU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+449,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+450,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+451,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+452,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+453,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+454,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+455,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+456,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+457,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+458,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+459,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+460,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+461,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 2U)))));
    bufp->fullBit(oldp+462,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 2U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+463,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 2U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+464,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+465,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+466,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+467,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+468,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+469,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+470,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+471,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+472,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+473,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+474,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+475,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+476,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+477,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+478,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+479,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+480,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+481,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+482,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+483,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+484,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+485,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+486,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+487,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+488,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+489,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+490,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+491,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+492,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+493,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+494,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 3U)))));
    bufp->fullBit(oldp+495,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 3U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 3U)))));
    bufp->fullBit(oldp+496,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 3U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+497,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+498,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+499,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+500,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+501,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+502,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+503,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 4U)))));
    bufp->fullBit(oldp+504,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 4U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 4U)))));
    bufp->fullBit(oldp+505,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 4U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+506,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 5U)))));
    bufp->fullBit(oldp+507,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 5U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 5U)))));
    bufp->fullBit(oldp+508,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 5U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+509,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 6U)))));
    bufp->fullBit(oldp+510,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 6U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 6U)))));
    bufp->fullBit(oldp+511,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 6U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+512,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 7U)))));
    bufp->fullBit(oldp+513,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 7U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 7U)))));
    bufp->fullBit(oldp+514,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 7U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+515,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 8U)))));
    bufp->fullBit(oldp+516,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 8U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 8U)))));
    bufp->fullBit(oldp+517,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 8U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+518,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 9U)))));
    bufp->fullBit(oldp+519,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 9U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 9U)))));
    bufp->fullBit(oldp+520,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 9U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 9U))))));
    bufp->fullBit(oldp+521,((1U & (~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      ^ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    bufp->fullBit(oldp+522,((1U & ((~ vlSelf->top__DOT__dut__DOT__rs1_data) 
                                   & vlSelf->top__DOT__dut__DOT__rs2_data))));
    bufp->fullBit(oldp+523,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   & (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    bufp->fullBit(oldp+524,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 1U)))));
    bufp->fullBit(oldp+525,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 1U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 1U)))));
    bufp->fullBit(oldp+526,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 1U))))));
    bufp->fullBit(oldp+527,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+528,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+529,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+530,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+531,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+532,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+533,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+534,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+535,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+536,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+537,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+538,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+539,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+540,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+541,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+542,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+543,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+544,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+545,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+546,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+547,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+548,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+549,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+550,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+551,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+552,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+553,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+554,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+555,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+556,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+557,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 2U)))));
    bufp->fullBit(oldp+558,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 2U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 2U)))));
    bufp->fullBit(oldp+559,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 2U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 2U))))));
    bufp->fullBit(oldp+560,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+561,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+562,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+563,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+564,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+565,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+566,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+567,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+568,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+569,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+570,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+571,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+572,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+573,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+574,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+575,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+576,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+577,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+578,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+579,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+580,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+581,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+582,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+583,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+584,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+585,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+586,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+587,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+588,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+589,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+590,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 3U)))));
    bufp->fullBit(oldp+591,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 3U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 3U)))));
    bufp->fullBit(oldp+592,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 3U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 3U))))));
    bufp->fullBit(oldp+593,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+594,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+595,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+596,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+597,(((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+598,(((vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+599,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 4U)))));
    bufp->fullBit(oldp+600,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 4U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 4U)))));
    bufp->fullBit(oldp+601,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 4U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 4U))))));
    bufp->fullBit(oldp+602,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 5U)))));
    bufp->fullBit(oldp+603,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 5U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 5U)))));
    bufp->fullBit(oldp+604,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 5U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 5U))))));
    bufp->fullBit(oldp+605,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 6U)))));
    bufp->fullBit(oldp+606,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 6U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 6U)))));
    bufp->fullBit(oldp+607,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 6U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 6U))))));
    bufp->fullBit(oldp+608,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 7U)))));
    bufp->fullBit(oldp+609,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 7U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 7U)))));
    bufp->fullBit(oldp+610,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 7U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 7U))))));
    bufp->fullBit(oldp+611,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 8U)))));
    bufp->fullBit(oldp+612,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 8U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 8U)))));
    bufp->fullBit(oldp+613,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 8U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 8U))))));
    bufp->fullBit(oldp+614,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 9U)))));
    bufp->fullBit(oldp+615,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 9U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 9U)))));
    bufp->fullBit(oldp+616,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 9U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 9U))))));
    bufp->fullBit(oldp+617,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
    bufp->fullBit(oldp+618,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__rs2_data))))));
    bufp->fullBit(oldp+619,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
    bufp->fullBit(oldp+620,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 1U)))));
    bufp->fullBit(oldp+621,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 1U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+622,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 1U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+623,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+624,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xaU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+625,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xaU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+626,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+627,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xbU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+628,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xbU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+629,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+630,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xcU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+631,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xcU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+632,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+633,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xdU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+634,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xdU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+635,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+636,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xeU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+637,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xeU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+638,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+639,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xfU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+640,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xfU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+641,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+642,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+643,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+644,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+645,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+646,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+647,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+648,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+649,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+650,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+651,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+652,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+653,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 2U)))));
    bufp->fullBit(oldp+654,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 2U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+655,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 2U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+656,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+657,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+658,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+659,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+660,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+661,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+662,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+663,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+664,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+665,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+666,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+667,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+668,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+669,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+670,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+671,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+672,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+673,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+674,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+675,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+676,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+677,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+678,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+679,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+680,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+681,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+682,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+683,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+684,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+685,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+686,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 3U)))));
    bufp->fullBit(oldp+687,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 3U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 3U)))));
    bufp->fullBit(oldp+688,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 3U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+689,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+690,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+691,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+692,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+693,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+694,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+695,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 4U)))));
    bufp->fullBit(oldp+696,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 4U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 4U)))));
    bufp->fullBit(oldp+697,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 4U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+698,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 5U)))));
    bufp->fullBit(oldp+699,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 5U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 5U)))));
    bufp->fullBit(oldp+700,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 5U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+701,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 6U)))));
    bufp->fullBit(oldp+702,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 6U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 6U)))));
    bufp->fullBit(oldp+703,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 6U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+704,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 7U)))));
    bufp->fullBit(oldp+705,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 7U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 7U)))));
    bufp->fullBit(oldp+706,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 7U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+707,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 8U)))));
    bufp->fullBit(oldp+708,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 8U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 8U)))));
    bufp->fullBit(oldp+709,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 8U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+710,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 9U)))));
    bufp->fullBit(oldp+711,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 9U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 9U)))));
    bufp->fullBit(oldp+712,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 9U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 9U))))));
    bufp->fullBit(oldp+713,(vlSelf->top__DOT__dut__DOT__br_eq));
    bufp->fullBit(oldp+714,(vlSelf->top__DOT__dut__DOT__br_lt));
    bufp->fullBit(oldp+715,(vlSelf->top__DOT__dut__DOT__PC_sel));
    bufp->fullBit(oldp+716,(vlSelf->top__DOT__dut__DOT__dmem_wr));
    bufp->fullIData(oldp+717,(vlSelf->top__DOT__dut__DOT__alu_data),32);
    bufp->fullIData(oldp+718,(vlSelf->top__DOT__dut__DOT__rs2_data),32);
    bufp->fullIData(oldp+719,(vlSelf->top__DOT__dut__DOT__operand_b),32);
    bufp->fullIData(oldp+720,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt),32);
    bufp->fullCData(oldp+721,((0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)),6);
    bufp->fullBit(oldp+722,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt));
    bufp->fullBit(oldp+723,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u));
    bufp->fullBit(oldp+724,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s));
    bufp->fullBit(oldp+725,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt))))));
    bufp->fullBit(oldp+726,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s));
    bufp->fullBit(oldp+727,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt));
    bufp->fullIData(oldp+728,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+729,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+730,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullBit(oldp+731,((1U & vlSelf->top__DOT__dut__DOT__operand_b)));
    bufp->fullBit(oldp+732,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 1U))));
    bufp->fullBit(oldp+733,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+734,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+735,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+736,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+737,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+738,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+739,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+740,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+741,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+742,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+743,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 2U))));
    bufp->fullBit(oldp+744,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+745,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+746,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+747,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+748,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+749,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+750,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+751,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+752,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+753,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+754,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 3U))));
    bufp->fullBit(oldp+755,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+756,((vlSelf->top__DOT__dut__DOT__operand_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+757,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 4U))));
    bufp->fullBit(oldp+758,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 5U))));
    bufp->fullBit(oldp+759,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 6U))));
    bufp->fullBit(oldp+760,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 7U))));
    bufp->fullBit(oldp+761,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 8U))));
    bufp->fullBit(oldp+762,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 9U))));
    bufp->fullBit(oldp+763,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt));
    bufp->fullBit(oldp+764,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp));
    bufp->fullBit(oldp+765,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp));
    bufp->fullBit(oldp+766,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp))))));
    bufp->fullBit(oldp+767,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c));
    bufp->fullBit(oldp+768,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c));
    bufp->fullBit(oldp+769,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c))))));
    bufp->fullIData(oldp+770,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))),32);
    bufp->fullIData(oldp+771,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+772,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+773,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullIData(oldp+774,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
    bufp->fullIData(oldp+775,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
    bufp->fullIData(oldp+776,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
    bufp->fullBit(oldp+777,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    bufp->fullBit(oldp+778,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 1U))));
    bufp->fullBit(oldp+779,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+780,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+781,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+782,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+783,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+784,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+785,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+786,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+787,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+788,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+789,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 2U))));
    bufp->fullBit(oldp+790,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+791,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+792,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+793,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+794,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+795,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+796,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+797,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+798,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+799,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+800,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 3U))));
    bufp->fullBit(oldp+801,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+802,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+803,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 4U))));
    bufp->fullBit(oldp+804,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 5U))));
    bufp->fullBit(oldp+805,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 6U))));
    bufp->fullBit(oldp+806,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 7U))));
    bufp->fullBit(oldp+807,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 8U))));
    bufp->fullBit(oldp+808,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 9U))));
    bufp->fullBit(oldp+809,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u));
    bufp->fullBit(oldp+810,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s));
    bufp->fullBit(oldp+811,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt))))));
    bufp->fullBit(oldp+812,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s));
    bufp->fullBit(oldp+813,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt));
    bufp->fullIData(oldp+814,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+815,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+816,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullBit(oldp+817,((1U & vlSelf->top__DOT__dut__DOT__rs2_data)));
    bufp->fullBit(oldp+818,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 1U))));
    bufp->fullBit(oldp+819,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+820,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+821,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+822,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+823,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+824,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+826,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+827,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+828,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+829,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 2U))));
    bufp->fullBit(oldp+830,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+831,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+832,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+833,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+834,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+835,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+836,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+837,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+838,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+839,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+840,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 3U))));
    bufp->fullBit(oldp+841,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+842,((vlSelf->top__DOT__dut__DOT__rs2_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+843,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 4U))));
    bufp->fullBit(oldp+844,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 5U))));
    bufp->fullBit(oldp+845,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 6U))));
    bufp->fullBit(oldp+846,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 7U))));
    bufp->fullBit(oldp+847,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 8U))));
    bufp->fullBit(oldp+848,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 9U))));
    bufp->fullBit(oldp+849,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt));
    bufp->fullBit(oldp+850,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp));
    bufp->fullBit(oldp+851,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp));
    bufp->fullBit(oldp+852,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp))))));
    bufp->fullBit(oldp+853,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c));
    bufp->fullBit(oldp+854,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c));
    bufp->fullBit(oldp+855,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c))))));
    bufp->fullIData(oldp+856,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))),32);
    bufp->fullIData(oldp+857,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+858,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+859,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullIData(oldp+860,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
    bufp->fullIData(oldp+861,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
    bufp->fullIData(oldp+862,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
    bufp->fullBit(oldp+863,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    bufp->fullBit(oldp+864,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+865,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+866,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+867,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+868,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+869,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+870,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+871,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+872,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+873,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+874,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+875,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+876,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+877,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+878,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+879,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+880,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+881,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+882,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+883,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+884,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+885,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+886,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+887,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+888,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+889,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+890,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+891,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+892,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+893,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+894,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 9U))));
    bufp->fullIData(oldp+895,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1),32);
    bufp->fullIData(oldp+896,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2),32);
    bufp->fullCData(oldp+897,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask),4);
    bufp->fullBit(oldp+898,(vlSelf->rst_ni));
    bufp->fullBit(oldp+899,(vlSelf->clk_i));
    bufp->fullIData(oldp+900,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+901,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+902,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+903,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+904,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+905,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+906,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+907,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+908,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+909,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+910,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+911,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+912,(vlSelf->pc_debug_o),32);
    bufp->fullIData(oldp+913,(((2U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
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
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? vlSelf->top__DOT__dut__DOT__digit7
                                                    : vlSelf->top__DOT__dut__DOT__digit6)
                                                : (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? vlSelf->top__DOT__dut__DOT__digit5
                                                    : vlSelf->top__DOT__dut__DOT__digit4))
                                            : ((0x20000000U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? vlSelf->top__DOT__dut__DOT__digit3
                                                    : vlSelf->top__DOT__dut__DOT__digit2)
                                                : (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? vlSelf->top__DOT__dut__DOT__digit1
                                                    : vlSelf->top__DOT__dut__DOT__digit0))))
                                    : ((IData)(4U) 
                                       + vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc))
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
                                                : (
                                                   (((0x80U 
                                                      & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->top__DOT__dut__DOT__instr 
                                                    >> 0xcU)))
                                                ? (
                                                   (0x4000U 
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
    bufp->fullIData(oldp+914,(((IData)(vlSelf->top__DOT__dut__DOT__dmem_wr)
                                ? vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data
                                : ((0U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))
                                    ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                        ? (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                        : ((((0x80U 
                                              & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                              ? 0xffffffU
                                              : 0U) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
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
    bufp->fullIData(oldp+915,(0x20U),32);
    bufp->fullCData(oldp+916,(vlSelf->top__DOT__dut__DOT__digit_sel),4);
    bufp->fullBit(oldp+917,(vlSelf->top__DOT__dut__DOT__start));
    bufp->fullCData(oldp+918,(0U),4);
    bufp->fullCData(oldp+919,(1U),4);
    bufp->fullCData(oldp+920,(2U),4);
    bufp->fullCData(oldp+921,(3U),4);
    bufp->fullCData(oldp+922,(4U),4);
    bufp->fullCData(oldp+923,(5U),4);
    bufp->fullCData(oldp+924,(6U),4);
    bufp->fullCData(oldp+925,(7U),4);
    bufp->fullCData(oldp+926,(8U),4);
    bufp->fullCData(oldp+927,(9U),4);
    bufp->fullCData(oldp+928,(0xaU),4);
    bufp->fullCData(oldp+929,(0xcU),5);
    bufp->fullCData(oldp+930,(4U),5);
    bufp->fullCData(oldp+931,(0U),5);
    bufp->fullCData(oldp+932,(8U),5);
    bufp->fullCData(oldp+933,(0x18U),5);
    bufp->fullCData(oldp+934,(0xdU),5);
    bufp->fullCData(oldp+935,(5U),5);
    bufp->fullCData(oldp+936,(0x1bU),5);
    bufp->fullCData(oldp+937,(0x19U),5);
    bufp->fullCData(oldp+938,(0x1fU),5);
    bufp->fullCData(oldp+939,(0U),3);
    bufp->fullCData(oldp+940,(1U),3);
    bufp->fullCData(oldp+941,(2U),3);
    bufp->fullCData(oldp+942,(3U),3);
    bufp->fullCData(oldp+943,(4U),3);
    bufp->fullCData(oldp+944,(5U),3);
    bufp->fullCData(oldp+945,(6U),3);
    bufp->fullCData(oldp+946,(7U),3);
    bufp->fullIData(oldp+947,(0U),32);
    bufp->fullIData(oldp+948,(0xaU),32);
    bufp->fullIData(oldp+949,(0xeU),32);
    bufp->fullIData(oldp+950,(5U),32);
}
