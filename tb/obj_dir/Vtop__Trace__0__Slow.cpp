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
    tracep->declBit(c+788,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+790,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+791,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+792,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+793,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+794,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+795,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+796,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+797,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+798,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+799,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+800,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+801,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+802,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+788,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+790,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+791,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+792,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+793,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+794,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+795,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+796,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+797,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+798,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+799,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+800,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+801,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+802,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+789,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+790,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+791,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+792,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+793,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+794,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+795,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+796,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+797,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+798,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+799,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+800,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+801,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+802,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+4,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+603,"br_eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+604,"br_lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+5,"imm_gen_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,"reg_wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+605,"PC_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"branch_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+606,"dmem_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+10,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+11,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+804,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"digit9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,"digit8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,"digit7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,"digit6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,"digit5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,"digit4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,"digit3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,"digit2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,"digit1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,"digit0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+806,"digit_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,"digit_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("PC_block ");
    tracep->declBit(c+789,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+607,"pc_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"pc_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"pc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+610,"pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_block ");
    tracep->declBus(c+16,"in_alu_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+609,"in_alu_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+8,"branch_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+607,"out_alu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+209,"alu_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,"alu_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,"alu_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,"alu_and",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,"alu_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,"alu_sll",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,"alu_srl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+216,"alu_sra",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+611,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+218,"eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+612,"lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+807,"ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+808,"MINUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+809,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+810,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+811,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+812,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+813,"SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+814,"SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+815,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+816,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+817,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->pushNamePrefix("compare_u_s ");
    tracep->declBus(c+16,"data_in_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+609,"data_in_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+8,"branch_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"lessthan",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+613,"equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+614,"equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+615,"lessthan_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+616,"lessthan_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+16,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+609,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+613,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+617,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+618,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+29,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+30,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+31,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+32,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+624,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+33,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+34,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+626,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+35,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+36,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+37,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+629,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+38,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+39,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+631,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+40,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+632,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+41,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+633,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+42,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+43,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+44,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+636,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+45,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+637,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+46,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+47,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+48,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+49,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+50,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+51,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+643,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+52,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+53,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+54,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+55,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+56,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+57,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+58,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+59,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+60,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+314,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+16,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+609,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+614,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+653,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+616,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+654,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+655,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+656,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+657,"eq_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+658,"gt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+659,"lt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+61,"a_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+660,"b_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+16,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+609,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+654,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+661,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+29,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+30,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+31,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+32,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+624,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+33,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+34,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+626,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+35,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+36,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+37,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+629,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+38,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+39,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+631,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+40,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+632,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+41,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+633,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+42,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+43,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+44,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+636,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+45,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+637,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+46,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+47,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+48,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+49,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+50,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+51,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+643,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+52,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+53,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+54,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+55,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+56,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+57,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+58,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+59,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+60,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+314,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+61,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+660,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+657,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+659,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+664,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+62,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+63,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+64,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+65,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+670,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+66,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+67,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+68,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+69,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+70,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+71,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+72,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+73,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+74,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+75,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+680,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+76,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+77,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+78,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+79,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+80,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+81,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+686,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+82,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+687,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+83,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+84,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+85,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+86,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+691,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+87,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+692,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+88,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+693,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+89,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+90,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+91,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+92,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+697,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+93,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+698,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("br_compare ");
    tracep->declBus(c+14,"data_in_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+608,"data_in_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+8,"branch_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+604,"lessthan",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+699,"equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+700,"equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+701,"lessthan_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+702,"lessthan_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+14,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+608,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+699,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+704,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+94,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+95,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+96,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+709,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+97,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+98,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+99,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+100,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+101,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+714,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+102,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+103,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+104,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+105,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+106,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+719,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+107,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+108,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+721,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+109,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+110,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+111,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+724,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+113,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+114,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+115,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+116,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+117,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+118,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+119,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+120,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+121,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+122,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+123,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+124,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+125,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+14,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+608,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+700,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+702,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+740,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+741,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+742,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+743,"eq_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+744,"gt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+745,"lt_temp_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+126,"a_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+746,"b_2c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBus(c+14,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+608,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+740,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+741,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+747,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+748,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+94,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+411,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+95,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+96,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+709,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+97,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+98,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+99,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+100,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+101,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+714,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+102,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+103,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+104,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+105,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+106,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+719,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+107,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+108,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+721,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+109,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+110,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+111,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+724,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+113,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+114,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+115,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+116,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+117,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+118,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+119,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+120,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+121,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+122,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+123,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+124,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+125,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBus(c+126,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+746,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+743,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+750,"eq_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+751,"gt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+752,"lt_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare_0 ");
    tracep->declBit(c+127,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+753,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+509,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_1 ");
    tracep->declBit(c+128,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+510,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_10 ");
    tracep->declBit(c+129,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+514,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_11 ");
    tracep->declBit(c+130,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_12 ");
    tracep->declBit(c+131,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_13 ");
    tracep->declBit(c+132,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+758,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_14 ");
    tracep->declBit(c+133,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_15 ");
    tracep->declBit(c+134,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_16 ");
    tracep->declBit(c+135,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_17 ");
    tracep->declBit(c+136,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_18 ");
    tracep->declBit(c+137,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+763,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_19 ");
    tracep->declBit(c+138,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_2 ");
    tracep->declBit(c+139,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_20 ");
    tracep->declBit(c+140,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_21 ");
    tracep->declBit(c+141,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_22 ");
    tracep->declBit(c+142,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+768,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_23 ");
    tracep->declBit(c+143,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_24 ");
    tracep->declBit(c+144,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+770,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_25 ");
    tracep->declBit(c+145,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_26 ");
    tracep->declBit(c+146,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_27 ");
    tracep->declBit(c+147,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+773,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_28 ");
    tracep->declBit(c+148,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_29 ");
    tracep->declBit(c+149,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+775,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_3 ");
    tracep->declBit(c+150,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_30 ");
    tracep->declBit(c+151,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_31 ");
    tracep->declBit(c+152,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_4 ");
    tracep->declBit(c+153,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_5 ");
    tracep->declBit(c+154,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+780,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+589,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_6 ");
    tracep->declBit(c+155,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_7 ");
    tracep->declBit(c+156,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+594,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_8 ");
    tracep->declBit(c+157,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare_9 ");
    tracep->declBit(c+158,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"gt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ctr_unit_block ");
    tracep->declBus(c+4,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+603,"br_eq",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+604,"br_lt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"imm_gen_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+6,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+7,"reg_wr_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"PC_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"branch_u",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"dmem_wr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+818,"OP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+819,"OP_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+820,"LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+821,"STORE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+822,"BRANCH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+823,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+824,"AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+825,"JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+826,"JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+827,"HEX_DEC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+828,"ADD_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+829,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+830,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+831,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+832,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+833,"SRL_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+834,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+835,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+828,"ADDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+830,"SLTI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+831,"SLTIU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+832,"XORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+834,"ORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+835,"ANDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+829,"SLLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+833,"SRLI_SRAI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+828,"LB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+829,"LH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+830,"LW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+832,"LBU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+833,"LHU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+828,"SB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+829,"SH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+830,"SW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+828,"BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+829,"BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+832,"BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+833,"BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+834,"BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+835,"BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("digit_sel_block ");
    tracep->declBus(c+159,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+160,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+161,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+162,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+163,"e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+164,"f",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+165,"g",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+166,"h",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+167,"j",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+168,"k",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+836,"l",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+836,"m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+836,"n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+836,"q",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+836,"r",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+836,"s",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+27,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hex_to_dec ");
    tracep->declBus(c+14,"result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"digit9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+18,"digit8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+19,"digit7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+20,"digit6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+21,"digit5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+22,"digit4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+23,"digit3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+24,"digit2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+25,"digit1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+26,"digit0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+170,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_block ");
    tracep->declBit(c+789,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+171,"address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,0);
    tracep->declBus(c+4,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+837,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen_block ");
    tracep->declBus(c+4,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"imm_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+15,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+828,"R",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+829,"I",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+830,"B",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+831,"J1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+832,"J2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+833,"U",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+835,"S",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_block ");
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+789,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"unsigned_en_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+607,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+608,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+173,"sel_mod",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+790,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+791,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+792,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+793,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+794,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+795,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+796,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+797,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+798,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+799,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+800,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+801,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+804,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_a ");
    tracep->declBus(c+14,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+9,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_b ");
    tracep->declBus(c+608,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+10,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+609,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_block ");
    tracep->declBus(c+803,"data_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"addr_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+175,"addr_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+176,"addr_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+789,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"wr_en_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"data_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+608,"data_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+838,"nu_reg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+177+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_sel_block ");
    tracep->declBus(c+607,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+804,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+803,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+805,"W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__dut__DOT__instr),32);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__imm_gen_sel),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__alu_op),4);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__dut__DOT__reg_wr_en));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__dut__DOT__branch_u));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__dut__DOT__op_a_sel));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__dut__DOT__op_b_sel));
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__wb_sel),2);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+13,(((IData)(4U) + vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc)),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__dut__DOT__rs1_data),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__dut__DOT__imm),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__dut__DOT__operand_a),32);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__dut__DOT__digit9),4);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__dut__DOT__digit8),4);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__digit7),4);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__digit6),4);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__digit5),4);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__dut__DOT__digit4),4);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__dut__DOT__digit3),4);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__dut__DOT__digit2),4);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__dut__DOT__digit1),4);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT__digit0),4);
    bufp->fullIData(oldp+27,(((vlSelf->top__DOT__dut__DOT__instr 
                               >> 0x1fU) ? ((0x40000000U 
                                             & vlSelf->top__DOT__dut__DOT__instr)
                                             ? 0U : 
                                            ((0x20000000U 
                                              & vlSelf->top__DOT__dut__DOT__instr)
                                              ? 0U : 
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
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc),32);
    bufp->fullBit(oldp+29,((1U & vlSelf->top__DOT__dut__DOT__operand_a)));
    bufp->fullBit(oldp+30,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 1U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xaU))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xbU))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xcU))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xdU))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+36,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+37,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+40,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 2U))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x14U))));
    bufp->fullBit(oldp+43,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x15U))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x16U))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x17U))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x18U))));
    bufp->fullBit(oldp+47,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x19U))));
    bufp->fullBit(oldp+48,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+49,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+52,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 3U))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+54,((vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 0x1fU)));
    bufp->fullBit(oldp+55,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 4U))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 5U))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 6U))));
    bufp->fullBit(oldp+58,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 7U))));
    bufp->fullBit(oldp+59,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 8U))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 9U))));
    bufp->fullIData(oldp+61,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a))),32);
    bufp->fullBit(oldp+62,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)))));
    bufp->fullBit(oldp+63,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 1U))));
    bufp->fullBit(oldp+64,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+65,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+66,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+67,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+68,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0xeU))));
    bufp->fullBit(oldp+69,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0xfU))));
    bufp->fullBit(oldp+70,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x10U))));
    bufp->fullBit(oldp+71,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x11U))));
    bufp->fullBit(oldp+72,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x12U))));
    bufp->fullBit(oldp+73,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x13U))));
    bufp->fullBit(oldp+74,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 2U))));
    bufp->fullBit(oldp+75,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x14U))));
    bufp->fullBit(oldp+76,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x15U))));
    bufp->fullBit(oldp+77,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x16U))));
    bufp->fullBit(oldp+78,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x17U))));
    bufp->fullBit(oldp+79,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+80,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x19U))));
    bufp->fullBit(oldp+81,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+82,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+83,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+84,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+85,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 3U))));
    bufp->fullBit(oldp+86,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+87,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+88,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 4U))));
    bufp->fullBit(oldp+89,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 5U))));
    bufp->fullBit(oldp+90,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 6U))));
    bufp->fullBit(oldp+91,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 7U))));
    bufp->fullBit(oldp+92,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 8U))));
    bufp->fullBit(oldp+93,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 9U))));
    bufp->fullBit(oldp+94,((1U & vlSelf->top__DOT__dut__DOT__rs1_data)));
    bufp->fullBit(oldp+95,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 1U))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0xaU))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0xbU))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0xcU))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0xdU))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 2U))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+108,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+109,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+110,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+112,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+113,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+114,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+115,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 3U))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+119,((vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+120,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 4U))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 5U))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 6U))));
    bufp->fullBit(oldp+123,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 7U))));
    bufp->fullBit(oldp+124,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 8U))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   >> 9U))));
    bufp->fullIData(oldp+126,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data))),32);
    bufp->fullBit(oldp+127,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)))));
    bufp->fullBit(oldp+128,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+129,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+130,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+131,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+132,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+133,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+134,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+135,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+136,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+137,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+138,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+139,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+140,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+141,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+142,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+143,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+144,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+145,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+146,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+147,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+148,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+149,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+150,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+151,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+152,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+153,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+154,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+155,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+156,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+157,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+158,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   >> 9U))));
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__dut__DOT__digit0),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__dut__DOT__digit1),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__dut__DOT__digit2),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__dut__DOT__digit3),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__dut__DOT__digit4),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__dut__DOT__digit5),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__dut__DOT__digit6),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__dut__DOT__digit7),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__dut__DOT__digit8),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__dut__DOT__digit9),32);
    bufp->fullCData(oldp+169,((vlSelf->top__DOT__dut__DOT__instr 
                               >> 0x1cU)),4);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__temp),32);
    bufp->fullSData(oldp+171,((0x3fffU & vlSelf->top__DOT__dut__DOT__pc)),14);
    bufp->fullBit(oldp+172,((1U & (vlSelf->top__DOT__dut__DOT__instr 
                                   >> 0xeU))));
    bufp->fullCData(oldp+173,((3U & (vlSelf->top__DOT__dut__DOT__instr 
                                     >> 0xcU))),2);
    bufp->fullCData(oldp+174,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+175,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+176,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                        >> 7U))),5);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[1]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[2]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[3]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[4]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[5]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[6]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[7]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[8]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[9]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[10]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[11]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[12]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[13]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[14]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[15]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[16]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[17]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[18]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[19]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[20]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[21]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[22]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[23]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[24]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[25]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[26]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[27]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[28]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[29]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[30]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[31]),32);
    bufp->fullIData(oldp+209,((vlSelf->top__DOT__dut__DOT__operand_a 
                               + vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+210,(((IData)(1U) + (vlSelf->top__DOT__dut__DOT__operand_a 
                                              + (~ vlSelf->top__DOT__dut__DOT__operand_b)))),32);
    bufp->fullIData(oldp+211,((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+212,((vlSelf->top__DOT__dut__DOT__operand_a 
                               & vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+213,((vlSelf->top__DOT__dut__DOT__operand_a 
                               | vlSelf->top__DOT__dut__DOT__operand_b)),32);
    bufp->fullIData(oldp+214,(((0x1fU >= (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                   << (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                : 0U)),32);
    bufp->fullIData(oldp+215,(((0x1fU >= (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                ? (vlSelf->top__DOT__dut__DOT__operand_a 
                                   >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b))
                                : 0U)),32);
    bufp->fullQData(oldp+216,(((vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x1fU) ? ((0xffffffff00000000ULL 
                                              | (QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a))) 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__dut__DOT__operand_b))
                                : ((QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   >> (0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)))),64);
    bufp->fullBit(oldp+218,(((IData)(vlSelf->top__DOT__dut__DOT__branch_u)
                              ? (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u)
                              : (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s))));
    bufp->fullBit(oldp+219,((1U & (~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                      ^ vlSelf->top__DOT__dut__DOT__operand_b)))));
    bufp->fullBit(oldp+220,((1U & ((~ vlSelf->top__DOT__dut__DOT__operand_a) 
                                   & vlSelf->top__DOT__dut__DOT__operand_b))));
    bufp->fullBit(oldp+221,((1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                                   & (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    bufp->fullBit(oldp+222,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 1U)))));
    bufp->fullBit(oldp+223,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 1U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 1U)))));
    bufp->fullBit(oldp+224,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+225,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+226,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+227,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+228,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+229,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+230,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+231,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+232,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+233,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+234,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+235,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+236,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+237,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+238,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+239,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+240,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+241,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+242,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+243,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+244,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+245,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+246,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+247,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+248,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+249,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+250,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+251,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+252,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+253,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+254,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+255,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 2U)))));
    bufp->fullBit(oldp+256,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 2U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 2U)))));
    bufp->fullBit(oldp+257,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 2U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+258,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+259,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+260,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+261,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+262,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+263,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+264,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+265,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+266,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+267,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+268,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+269,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+270,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+271,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+272,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+273,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+274,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+275,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+276,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+277,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+278,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+279,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+280,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+281,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+282,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+283,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+284,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+285,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+286,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+287,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+288,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 3U)))));
    bufp->fullBit(oldp+289,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 3U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 3U)))));
    bufp->fullBit(oldp+290,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 3U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+291,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+292,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+293,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+294,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+295,(((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+296,(((vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+297,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 4U)))));
    bufp->fullBit(oldp+298,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 4U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 4U)))));
    bufp->fullBit(oldp+299,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 4U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+300,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 5U)))));
    bufp->fullBit(oldp+301,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 5U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 5U)))));
    bufp->fullBit(oldp+302,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 5U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+303,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 6U)))));
    bufp->fullBit(oldp+304,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 6U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 6U)))));
    bufp->fullBit(oldp+305,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 6U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+306,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 7U)))));
    bufp->fullBit(oldp+307,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 7U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 7U)))));
    bufp->fullBit(oldp+308,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 7U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+309,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 8U)))));
    bufp->fullBit(oldp+310,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 8U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 8U)))));
    bufp->fullBit(oldp+311,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 8U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+312,((1U & (~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                       ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                      >> 9U)))));
    bufp->fullBit(oldp+313,((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                       >> 9U)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                                  >> 9U)))));
    bufp->fullBit(oldp+314,((1U & ((vlSelf->top__DOT__dut__DOT__operand_a 
                                    >> 9U) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+315,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
    bufp->fullBit(oldp+316,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__operand_a))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__operand_b))))));
    bufp->fullBit(oldp+317,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__operand_b)))))));
    bufp->fullBit(oldp+318,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 1U)))));
    bufp->fullBit(oldp+319,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 1U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+320,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 1U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+321,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+322,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xaU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+323,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xaU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+324,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+325,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xbU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+326,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xbU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+327,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+328,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xcU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+329,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xcU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+330,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+331,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xdU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+332,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xdU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+333,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+334,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xeU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+335,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xeU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+336,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+337,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0xfU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+338,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0xfU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+339,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+340,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+341,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+342,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+343,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+344,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+345,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+346,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+347,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+348,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+349,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+350,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+351,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 2U)))));
    bufp->fullBit(oldp+352,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 2U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+353,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 2U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+354,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+355,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+356,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+357,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+358,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+359,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+360,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+361,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+362,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+363,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+364,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+365,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+366,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+367,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+368,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+369,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+370,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+371,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+372,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+373,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+374,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+375,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+376,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+377,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+378,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+379,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+380,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+381,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+382,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+383,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+384,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 3U)))));
    bufp->fullBit(oldp+385,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 3U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 3U)))));
    bufp->fullBit(oldp+386,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 3U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+387,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+388,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+389,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+390,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+391,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+392,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+393,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 4U)))));
    bufp->fullBit(oldp+394,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 4U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 4U)))));
    bufp->fullBit(oldp+395,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 4U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+396,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 5U)))));
    bufp->fullBit(oldp+397,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 5U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 5U)))));
    bufp->fullBit(oldp+398,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 5U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+399,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 6U)))));
    bufp->fullBit(oldp+400,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 6U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 6U)))));
    bufp->fullBit(oldp+401,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 6U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+402,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 7U)))));
    bufp->fullBit(oldp+403,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 7U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 7U)))));
    bufp->fullBit(oldp+404,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 7U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+405,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 8U)))));
    bufp->fullBit(oldp+406,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 8U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 8U)))));
    bufp->fullBit(oldp+407,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 8U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+408,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                      >> 9U)))));
    bufp->fullBit(oldp+409,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                       >> 9U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                  >> 9U)))));
    bufp->fullBit(oldp+410,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                    >> 9U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                                 >> 9U))))));
    bufp->fullBit(oldp+411,((1U & (~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                      ^ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    bufp->fullBit(oldp+412,((1U & ((~ vlSelf->top__DOT__dut__DOT__rs1_data) 
                                   & vlSelf->top__DOT__dut__DOT__rs2_data))));
    bufp->fullBit(oldp+413,((1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                                   & (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    bufp->fullBit(oldp+414,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 1U)))));
    bufp->fullBit(oldp+415,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 1U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 1U)))));
    bufp->fullBit(oldp+416,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 1U))))));
    bufp->fullBit(oldp+417,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+418,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+419,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+420,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+421,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+422,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+423,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+424,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+425,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+426,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+427,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+428,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+429,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+430,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+431,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+432,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+433,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+434,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+435,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+436,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+437,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+438,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+439,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+440,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+441,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+442,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+443,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+444,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+445,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+446,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+447,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 2U)))));
    bufp->fullBit(oldp+448,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 2U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 2U)))));
    bufp->fullBit(oldp+449,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 2U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 2U))))));
    bufp->fullBit(oldp+450,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+451,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+452,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+453,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+454,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+455,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+456,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+457,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+458,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+459,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+460,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+461,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+462,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+463,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+464,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+465,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+466,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+467,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+468,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+469,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+470,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+471,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+472,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+473,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+474,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+475,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+476,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+477,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+478,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+479,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+480,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 3U)))));
    bufp->fullBit(oldp+481,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 3U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 3U)))));
    bufp->fullBit(oldp+482,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 3U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 3U))))));
    bufp->fullBit(oldp+483,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+484,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+485,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+486,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+487,(((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+488,(((vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+489,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 4U)))));
    bufp->fullBit(oldp+490,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 4U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 4U)))));
    bufp->fullBit(oldp+491,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 4U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 4U))))));
    bufp->fullBit(oldp+492,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 5U)))));
    bufp->fullBit(oldp+493,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 5U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 5U)))));
    bufp->fullBit(oldp+494,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 5U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 5U))))));
    bufp->fullBit(oldp+495,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 6U)))));
    bufp->fullBit(oldp+496,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 6U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 6U)))));
    bufp->fullBit(oldp+497,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 6U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 6U))))));
    bufp->fullBit(oldp+498,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 7U)))));
    bufp->fullBit(oldp+499,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 7U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 7U)))));
    bufp->fullBit(oldp+500,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 7U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 7U))))));
    bufp->fullBit(oldp+501,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 8U)))));
    bufp->fullBit(oldp+502,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 8U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 8U)))));
    bufp->fullBit(oldp+503,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 8U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 8U))))));
    bufp->fullBit(oldp+504,((1U & (~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                      >> 9U)))));
    bufp->fullBit(oldp+505,((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                       >> 9U)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                  >> 9U)))));
    bufp->fullBit(oldp+506,((1U & ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                    >> 9U) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                                 >> 9U))))));
    bufp->fullBit(oldp+507,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
    bufp->fullBit(oldp+508,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__dut__DOT__rs1_data))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__dut__DOT__rs2_data))))));
    bufp->fullBit(oldp+509,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))))));
    bufp->fullBit(oldp+510,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 1U)))));
    bufp->fullBit(oldp+511,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 1U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+512,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 1U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+513,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+514,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xaU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+515,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xaU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+516,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+517,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xbU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xbU)))));
    bufp->fullBit(oldp+518,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xbU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+519,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+520,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xcU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+521,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xcU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+522,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+523,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xdU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+524,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xdU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+525,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+526,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xeU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+527,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xeU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+528,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+529,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0xfU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0xfU)))));
    bufp->fullBit(oldp+530,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0xfU) & (~ (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+531,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+532,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+533,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+534,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+535,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+536,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+537,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+538,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+539,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+540,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+541,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x13U)))));
    bufp->fullBit(oldp+542,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+543,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 2U)))));
    bufp->fullBit(oldp+544,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 2U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+545,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 2U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+546,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+547,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+548,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+549,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+550,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+551,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+552,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+553,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+554,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+555,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+556,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x17U)))));
    bufp->fullBit(oldp+557,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+558,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+559,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+560,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+561,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+562,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+563,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+564,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+565,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+566,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+567,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+568,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1bU)))));
    bufp->fullBit(oldp+569,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+570,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+571,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+572,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+573,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+574,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+575,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+576,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 3U)))));
    bufp->fullBit(oldp+577,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 3U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 3U)))));
    bufp->fullBit(oldp+578,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 3U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+579,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+580,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+581,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+582,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+583,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+584,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+585,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 4U)))));
    bufp->fullBit(oldp+586,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 4U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 4U)))));
    bufp->fullBit(oldp+587,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 4U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+588,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 5U)))));
    bufp->fullBit(oldp+589,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 5U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 5U)))));
    bufp->fullBit(oldp+590,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 5U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+591,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 6U)))));
    bufp->fullBit(oldp+592,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 6U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 6U)))));
    bufp->fullBit(oldp+593,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 6U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+594,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 7U)))));
    bufp->fullBit(oldp+595,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 7U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 7U)))));
    bufp->fullBit(oldp+596,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 7U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+597,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 8U)))));
    bufp->fullBit(oldp+598,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 8U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 8U)))));
    bufp->fullBit(oldp+599,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 8U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+600,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                      >> 9U)))));
    bufp->fullBit(oldp+601,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                       >> 9U)) & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                  >> 9U)))));
    bufp->fullBit(oldp+602,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                    >> 9U) & (~ (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                                 >> 9U))))));
    bufp->fullBit(oldp+603,(vlSelf->top__DOT__dut__DOT__br_eq));
    bufp->fullBit(oldp+604,(vlSelf->top__DOT__dut__DOT__br_lt));
    bufp->fullBit(oldp+605,(vlSelf->top__DOT__dut__DOT__PC_sel));
    bufp->fullBit(oldp+606,(vlSelf->top__DOT__dut__DOT__dmem_wr));
    bufp->fullIData(oldp+607,(vlSelf->top__DOT__dut__DOT__alu_data),32);
    bufp->fullIData(oldp+608,(vlSelf->top__DOT__dut__DOT__rs2_data),32);
    bufp->fullIData(oldp+609,(vlSelf->top__DOT__dut__DOT__operand_b),32);
    bufp->fullIData(oldp+610,(vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt),32);
    bufp->fullCData(oldp+611,((0x1fU & vlSelf->top__DOT__dut__DOT__operand_b)),6);
    bufp->fullBit(oldp+612,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt));
    bufp->fullBit(oldp+613,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u));
    bufp->fullBit(oldp+614,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s));
    bufp->fullBit(oldp+615,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt))))));
    bufp->fullBit(oldp+616,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s));
    bufp->fullBit(oldp+617,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt));
    bufp->fullIData(oldp+618,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+619,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+620,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullBit(oldp+621,((1U & vlSelf->top__DOT__dut__DOT__operand_b)));
    bufp->fullBit(oldp+622,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 1U))));
    bufp->fullBit(oldp+623,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+624,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+625,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+626,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+627,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+628,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+629,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+630,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+631,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+632,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+633,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 2U))));
    bufp->fullBit(oldp+634,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+635,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+636,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+637,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+638,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+639,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+640,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+641,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+642,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+643,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+644,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 3U))));
    bufp->fullBit(oldp+645,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+646,((vlSelf->top__DOT__dut__DOT__operand_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+647,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 4U))));
    bufp->fullBit(oldp+648,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 5U))));
    bufp->fullBit(oldp+649,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 6U))));
    bufp->fullBit(oldp+650,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 7U))));
    bufp->fullBit(oldp+651,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 8U))));
    bufp->fullBit(oldp+652,((1U & (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 9U))));
    bufp->fullBit(oldp+653,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt));
    bufp->fullBit(oldp+654,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp));
    bufp->fullBit(oldp+655,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp));
    bufp->fullBit(oldp+656,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp))))));
    bufp->fullBit(oldp+657,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c));
    bufp->fullBit(oldp+658,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c));
    bufp->fullBit(oldp+659,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c))))));
    bufp->fullIData(oldp+660,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))),32);
    bufp->fullIData(oldp+661,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+662,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+663,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullIData(oldp+664,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
    bufp->fullIData(oldp+665,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
    bufp->fullIData(oldp+666,(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
    bufp->fullBit(oldp+667,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    bufp->fullBit(oldp+668,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 1U))));
    bufp->fullBit(oldp+669,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+670,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+671,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+672,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+673,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+674,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+675,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+676,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+677,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+678,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+679,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 2U))));
    bufp->fullBit(oldp+680,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+681,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+682,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+683,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+684,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+685,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+686,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+687,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+688,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+689,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+690,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 3U))));
    bufp->fullBit(oldp+691,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+692,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+693,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 4U))));
    bufp->fullBit(oldp+694,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 5U))));
    bufp->fullBit(oldp+695,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 6U))));
    bufp->fullBit(oldp+696,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 7U))));
    bufp->fullBit(oldp+697,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 8U))));
    bufp->fullBit(oldp+698,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 9U))));
    bufp->fullBit(oldp+699,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u));
    bufp->fullBit(oldp+700,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s));
    bufp->fullBit(oldp+701,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt))))));
    bufp->fullBit(oldp+702,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s));
    bufp->fullBit(oldp+703,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt));
    bufp->fullIData(oldp+704,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+705,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+706,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullBit(oldp+707,((1U & vlSelf->top__DOT__dut__DOT__rs2_data)));
    bufp->fullBit(oldp+708,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 1U))));
    bufp->fullBit(oldp+709,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+710,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+711,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+712,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+713,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+714,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+715,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+716,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+717,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+718,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+719,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 2U))));
    bufp->fullBit(oldp+720,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+721,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+722,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+723,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+724,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+725,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+726,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+727,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+728,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+729,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+730,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 3U))));
    bufp->fullBit(oldp+731,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+732,((vlSelf->top__DOT__dut__DOT__rs2_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+733,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 4U))));
    bufp->fullBit(oldp+734,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 5U))));
    bufp->fullBit(oldp+735,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 6U))));
    bufp->fullBit(oldp+736,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 7U))));
    bufp->fullBit(oldp+737,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 8U))));
    bufp->fullBit(oldp+738,((1U & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 9U))));
    bufp->fullBit(oldp+739,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt));
    bufp->fullBit(oldp+740,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp));
    bufp->fullBit(oldp+741,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp));
    bufp->fullBit(oldp+742,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp))))));
    bufp->fullBit(oldp+743,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c));
    bufp->fullBit(oldp+744,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c));
    bufp->fullBit(oldp+745,((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c) 
                                      | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c))))));
    bufp->fullIData(oldp+746,(((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))),32);
    bufp->fullIData(oldp+747,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp),32);
    bufp->fullIData(oldp+748,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp),32);
    bufp->fullIData(oldp+749,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp),32);
    bufp->fullIData(oldp+750,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp),32);
    bufp->fullIData(oldp+751,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp),32);
    bufp->fullIData(oldp+752,(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp),32);
    bufp->fullBit(oldp+753,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    bufp->fullBit(oldp+754,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+755,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+756,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+757,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+758,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+759,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+760,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+761,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+762,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+763,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+764,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+765,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+766,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+767,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+768,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+769,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+770,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+771,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+772,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+773,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+774,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+775,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+776,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+777,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+778,((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+779,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+780,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+781,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+782,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+783,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+784,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 9U))));
    bufp->fullIData(oldp+785,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1),32);
    bufp->fullIData(oldp+786,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2),32);
    bufp->fullCData(oldp+787,(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask),4);
    bufp->fullBit(oldp+788,(vlSelf->rst_ni));
    bufp->fullBit(oldp+789,(vlSelf->clk_i));
    bufp->fullIData(oldp+790,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+791,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+792,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+793,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+794,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+795,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+796,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+797,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+798,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+799,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+800,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+801,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+802,(vlSelf->pc_debug_o),32);
    bufp->fullIData(oldp+803,(((2U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
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
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__digit7)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__digit6))
                                                : (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__digit5)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__digit4)))
                                            : ((0x20000000U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__digit3)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__digit2))
                                                : (
                                                   (0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? (IData)(vlSelf->top__DOT__dut__DOT__digit1)
                                                    : (IData)(vlSelf->top__DOT__dut__DOT__digit0)))))
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
    bufp->fullIData(oldp+804,(((IData)(vlSelf->top__DOT__dut__DOT__dmem_wr)
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
    bufp->fullIData(oldp+805,(0x20U),32);
    bufp->fullCData(oldp+806,(vlSelf->top__DOT__dut__DOT__digit_sel),4);
    bufp->fullCData(oldp+807,(0U),4);
    bufp->fullCData(oldp+808,(1U),4);
    bufp->fullCData(oldp+809,(2U),4);
    bufp->fullCData(oldp+810,(3U),4);
    bufp->fullCData(oldp+811,(4U),4);
    bufp->fullCData(oldp+812,(5U),4);
    bufp->fullCData(oldp+813,(6U),4);
    bufp->fullCData(oldp+814,(7U),4);
    bufp->fullCData(oldp+815,(8U),4);
    bufp->fullCData(oldp+816,(9U),4);
    bufp->fullCData(oldp+817,(0xaU),4);
    bufp->fullCData(oldp+818,(0xcU),5);
    bufp->fullCData(oldp+819,(4U),5);
    bufp->fullCData(oldp+820,(0U),5);
    bufp->fullCData(oldp+821,(8U),5);
    bufp->fullCData(oldp+822,(0x18U),5);
    bufp->fullCData(oldp+823,(0xdU),5);
    bufp->fullCData(oldp+824,(5U),5);
    bufp->fullCData(oldp+825,(0x1bU),5);
    bufp->fullCData(oldp+826,(0x19U),5);
    bufp->fullCData(oldp+827,(0x1fU),5);
    bufp->fullCData(oldp+828,(0U),3);
    bufp->fullCData(oldp+829,(1U),3);
    bufp->fullCData(oldp+830,(2U),3);
    bufp->fullCData(oldp+831,(3U),3);
    bufp->fullCData(oldp+832,(4U),3);
    bufp->fullCData(oldp+833,(5U),3);
    bufp->fullCData(oldp+834,(6U),3);
    bufp->fullCData(oldp+835,(7U),3);
    bufp->fullIData(oldp+836,(0U),32);
    bufp->fullIData(oldp+837,(0xeU),32);
    bufp->fullIData(oldp+838,(5U),32);
}
