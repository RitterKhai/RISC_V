// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(rst_ni,0,0);
        VL_IN8(clk_i,0,0);
        CData/*0:0*/ top__DOT__dut__DOT__br_eq;
        CData/*0:0*/ top__DOT__dut__DOT__br_lt;
        CData/*2:0*/ top__DOT__dut__DOT__imm_gen_sel;
        CData/*3:0*/ top__DOT__dut__DOT__alu_op;
        CData/*0:0*/ top__DOT__dut__DOT__reg_wr_en;
        CData/*0:0*/ top__DOT__dut__DOT__PC_sel;
        CData/*0:0*/ top__DOT__dut__DOT__branch_u;
        CData/*0:0*/ top__DOT__dut__DOT__dmem_wr;
        CData/*0:0*/ top__DOT__dut__DOT__op_a_sel;
        CData/*0:0*/ top__DOT__dut__DOT__op_b_sel;
        CData/*1:0*/ top__DOT__dut__DOT__wb_sel;
        CData/*3:0*/ top__DOT__dut__DOT__digit9;
        CData/*3:0*/ top__DOT__dut__DOT__digit8;
        CData/*3:0*/ top__DOT__dut__DOT__digit7;
        CData/*3:0*/ top__DOT__dut__DOT__digit6;
        CData/*3:0*/ top__DOT__dut__DOT__digit5;
        CData/*3:0*/ top__DOT__dut__DOT__digit4;
        CData/*3:0*/ top__DOT__dut__DOT__digit3;
        CData/*3:0*/ top__DOT__dut__DOT__digit2;
        CData/*3:0*/ top__DOT__dut__DOT__digit1;
        CData/*3:0*/ top__DOT__dut__DOT__digit0;
        CData/*3:0*/ top__DOT__dut__DOT__digit_sel;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__equal_u;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__equal_s;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__lessthan_s;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c;
        CData/*0:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__lt;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c;
        CData/*0:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c;
        CData/*3:0*/ top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96ff575f__0;
        IData/*31:0*/ top__DOT__dut__DOT__lsu_block__DOT__input_peri;
        IData/*31:0*/ top__DOT__dut__DOT__lsu_block__DOT__dataout_1;
        IData/*31:0*/ top__DOT__dut__DOT__lsu_block__DOT__dataout_2;
        IData/*31:0*/ top__DOT__dut__DOT__lsu_block__DOT__dataout_3;
        IData/*31:0*/ top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data;
        CData/*3:0*/ top__DOT__dut__DOT__lsu_block__DOT__mask;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        VL_IN(io_sw_i,31,0);
        VL_OUT(io_lcd_o,31,0);
        VL_OUT(io_ledg_o,31,0);
        VL_OUT(io_ledr_o,31,0);
        VL_OUT(io_hex0_o,31,0);
        VL_OUT(io_hex1_o,31,0);
        VL_OUT(io_hex2_o,31,0);
        VL_OUT(io_hex3_o,31,0);
        VL_OUT(io_hex4_o,31,0);
        VL_OUT(io_hex5_o,31,0);
        VL_OUT(io_hex6_o,31,0);
        VL_OUT(io_hex7_o,31,0);
    };
    struct {
        VL_OUT(pc_debug_o,31,0);
        IData/*31:0*/ top__DOT__dut__DOT__instr;
        IData/*31:0*/ top__DOT__dut__DOT__pc;
        IData/*31:0*/ top__DOT__dut__DOT__alu_data;
        IData/*31:0*/ top__DOT__dut__DOT__rs1_data;
        IData/*31:0*/ top__DOT__dut__DOT__rs2_data;
        IData/*31:0*/ top__DOT__dut__DOT__imm;
        IData/*31:0*/ top__DOT__dut__DOT__operand_a;
        IData/*31:0*/ top__DOT__dut__DOT__operand_b;
        IData/*31:0*/ top__DOT__dut__DOT__PC_block__DOT__pc_nxt;
        IData/*31:0*/ top__DOT__dut__DOT__PC_block__DOT__pc;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp;
        IData/*31:0*/ top__DOT__dut__DOT__hex_to_dec__DOT__temp;
        IData/*31:0*/ top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0;
        VlUnpacked<IData/*31:0*/, 4096> top__DOT__dut__DOT__imem_block__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__regfile_block__DOT__mem;
        VlUnpacked<IData/*31:0*/, 512> top__DOT__dut__DOT__lsu_block__DOT__memory;
        VlUnpacked<IData/*31:0*/, 64> top__DOT__dut__DOT__lsu_block__DOT__output_peri;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
