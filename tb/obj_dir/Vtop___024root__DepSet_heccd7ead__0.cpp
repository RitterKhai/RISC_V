// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
        = vlSelf->io_sw_i;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__regfile_block__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__regfile_block__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v1;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy0;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy1;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy2;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy3;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy4;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy5;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy6;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy7;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy8;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__busy9;
    CData/*4:0*/ __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i;
    VlWide<3>/*95:0*/ __Vtemp_hea047fc4__0;
    VlWide<3>/*95:0*/ __Vtemp_h2720cab9__0;
    VlWide<3>/*95:0*/ __Vtemp_hea047fc4__1;
    VlWide<3>/*95:0*/ __Vtemp_h7ee52d28__0;
    VlWide<3>/*95:0*/ __Vtemp_he9100632__0;
    VlWide<3>/*95:0*/ __Vtemp_h8b29dcfc__0;
    VlWide<3>/*95:0*/ __Vtemp_he9100632__1;
    VlWide<3>/*95:0*/ __Vtemp_h29dd742f__0;
    VlWide<3>/*95:0*/ __Vtemp_h03567219__0;
    VlWide<3>/*95:0*/ __Vtemp_h55aa449f__0;
    VlWide<3>/*95:0*/ __Vtemp_h03567219__1;
    VlWide<3>/*95:0*/ __Vtemp_h30c55618__0;
    VlWide<3>/*95:0*/ __Vtemp_h520f00d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h309fc4f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h520f00d1__1;
    VlWide<3>/*95:0*/ __Vtemp_h227eb376__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc2cd348__0;
    VlWide<3>/*95:0*/ __Vtemp_h902942ef__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc2cd348__1;
    VlWide<3>/*95:0*/ __Vtemp_h4af4bcfa__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1f1c8d6__0;
    VlWide<3>/*95:0*/ __Vtemp_h48844226__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1f1c8d6__1;
    VlWide<3>/*95:0*/ __Vtemp_hf18558cb__0;
    VlWide<3>/*95:0*/ __Vtemp_hb225c4c1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd7bd3995__0;
    VlWide<3>/*95:0*/ __Vtemp_hb225c4c1__1;
    VlWide<3>/*95:0*/ __Vtemp_h4bcffffa__0;
    VlWide<3>/*95:0*/ __Vtemp_hed18dee4__0;
    VlWide<3>/*95:0*/ __Vtemp_h7a5efb00__0;
    VlWide<3>/*95:0*/ __Vtemp_hed18dee4__1;
    VlWide<3>/*95:0*/ __Vtemp_hb30f193a__0;
    VlWide<3>/*95:0*/ __Vtemp_h56137496__0;
    VlWide<3>/*95:0*/ __Vtemp_hf584490a__0;
    VlWide<3>/*95:0*/ __Vtemp_h56137496__1;
    VlWide<3>/*95:0*/ __Vtemp_h0ec2e291__0;
    VlWide<3>/*95:0*/ __Vtemp_h64edf5e7__0;
    VlWide<3>/*95:0*/ __Vtemp_h097e133b__0;
    VlWide<3>/*95:0*/ __Vtemp_h64edf5e7__1;
    VlWide<3>/*95:0*/ __Vtemp_ha11fcb41__0;
    // Body
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy0 = vlSelf->top__DOT__dut__DOT__busy0;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy1 = vlSelf->top__DOT__dut__DOT__busy1;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy2 = vlSelf->top__DOT__dut__DOT__busy2;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy3 = vlSelf->top__DOT__dut__DOT__busy3;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy4 = vlSelf->top__DOT__dut__DOT__busy4;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy5 = vlSelf->top__DOT__dut__DOT__busy5;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy6 = vlSelf->top__DOT__dut__DOT__busy6;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy7 = vlSelf->top__DOT__dut__DOT__busy7;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy8 = vlSelf->top__DOT__dut__DOT__busy8;
    __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i 
        = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i;
    __Vdly__top__DOT__dut__DOT__busy9 = vlSelf->top__DOT__dut__DOT__busy9;
    __Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v1 = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__dut__DOT__pc = vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt;
        if (((IData)(vlSelf->top__DOT__dut__DOT__reg_wr_en) 
             & (0U != (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                >> 7U))))) {
            __Vdlyvval__top__DOT__dut__DOT__regfile_block__DOT__mem__v0 
                = ((2U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                    ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                        ? ((vlSelf->top__DOT__dut__DOT__instr 
                            >> 0x1fU) ? ((0x40000000U 
                                          & vlSelf->top__DOT__dut__DOT__instr)
                                          ? 0U : ((0x20000000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? 0U
                                                   : 
                                                  ((0x10000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? vlSelf->top__DOT__dut__DOT__digit9
                                                    : vlSelf->top__DOT__dut__DOT__digit8)))
                            : ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr)
                                ? ((0x20000000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? ((0x10000000U 
                                        & vlSelf->top__DOT__dut__DOT__instr)
                                        ? vlSelf->top__DOT__dut__DOT__digit7
                                        : vlSelf->top__DOT__dut__DOT__digit6)
                                    : ((0x10000000U 
                                        & vlSelf->top__DOT__dut__DOT__instr)
                                        ? vlSelf->top__DOT__dut__DOT__digit5
                                        : vlSelf->top__DOT__dut__DOT__digit4))
                                : ((0x20000000U & vlSelf->top__DOT__dut__DOT__instr)
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
                            : ((0U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                                             >> 0xcU)))
                                ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                    : ((((0x80U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                : ((1U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xcU)))
                                    ? ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                        ? (0xffffU 
                                           & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                        : ((((0x8000U 
                                              & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)
                                              ? 0xffffU
                                              : 0U) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                                    : vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data)))
                        : vlSelf->top__DOT__dut__DOT__alu_data));
            __Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__regfile_block__DOT__mem__v0 
                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                            >> 7U));
        }
        vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc 
            = vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt;
    } else {
        vlSelf->top__DOT__dut__DOT__pc = 0U;
        __Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v1 = 1U;
        vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc = 0U;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v0) {
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__regfile_block__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__regfile_block__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__regfile_block__DOT__mem__v1) {
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[1U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[2U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[3U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[4U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[5U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[6U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[7U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[8U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[9U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0xaU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0xbU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0xcU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0xdU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0xeU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0xfU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x10U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x11U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x12U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x13U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x14U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x15U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x16U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x17U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x18U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x19U] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x1aU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x1bU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x1cU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x1dU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x1eU] = 0U;
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[0x1fU] = 0U;
    }
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc;
    vlSelf->top__DOT__dut__DOT__instr = vlSelf->top__DOT__dut__DOT__imem_block__DOT__mem
        [(0xfffU & (vlSelf->top__DOT__dut__DOT__pc 
                    >> 2U))];
    vlSelf->top__DOT__dut__DOT__done9 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid8))) {
        __Vdly__top__DOT__dut__DOT__busy9 = 0U;
        vlSelf->top__DOT__dut__DOT__done9 = 0U;
        vlSelf->top__DOT__dut__DOT__valid9 = 0U;
        vlSelf->top__DOT__dut__DOT__temp9 = 0U;
        vlSelf->top__DOT__dut__DOT__digit9 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid9 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid8))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy9 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp8)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp8))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy9) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy9 = 0U;
                vlSelf->top__DOT__dut__DOT__done9 = 1U;
                vlSelf->top__DOT__dut__DOT__valid9 = 1U;
                vlSelf->top__DOT__dut__DOT__temp9 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit9 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo_next;
            }
        }
    }
    if ((0x40U & vlSelf->top__DOT__dut__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__dut__DOT__instr)) {
                vlSelf->top__DOT__dut__DOT__wb_sel 
                    = ((8U & vlSelf->top__DOT__dut__DOT__instr)
                        ? ((4U & vlSelf->top__DOT__dut__DOT__instr)
                            ? 3U : 0U) : 0U);
                vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
            } else if ((8U & vlSelf->top__DOT__dut__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__wb_sel = 2U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 3U;
                } else {
                    vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                vlSelf->top__DOT__dut__DOT__wb_sel = 2U;
                vlSelf->top__DOT__dut__DOT__imm_gen_sel = 4U;
            } else {
                vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
                vlSelf->top__DOT__dut__DOT__imm_gen_sel 
                    = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                        ? 2U : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                 ? 0U : 2U));
            }
        } else {
            vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
            vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
        }
        vlSelf->top__DOT__dut__DOT__reg_wr_en = (1U 
                                                 & ((vlSelf->top__DOT__dut__DOT__instr 
                                                     >> 5U) 
                                                    & ((0x10U 
                                                        & vlSelf->top__DOT__dut__DOT__instr)
                                                        ? (IData)(
                                                                  (0xcU 
                                                                   == 
                                                                   (0xcU 
                                                                    & vlSelf->top__DOT__dut__DOT__instr)))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->top__DOT__dut__DOT__instr)
                                                         ? 
                                                        (vlSelf->top__DOT__dut__DOT__instr 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->top__DOT__dut__DOT__instr 
                                                         >> 2U)))));
        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
        vlSelf->top__DOT__dut__DOT__branch_u = (1U 
                                                & (IData)(
                                                          (0x6020U 
                                                           == 
                                                           (0x603cU 
                                                            & vlSelf->top__DOT__dut__DOT__instr))));
        vlSelf->top__DOT__dut__DOT__op_b_sel = (1U 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x30U 
                                                             & vlSelf->top__DOT__dut__DOT__instr)) 
                                                           & ((8U 
                                                               & vlSelf->top__DOT__dut__DOT__instr)
                                                               ? 
                                                              (vlSelf->top__DOT__dut__DOT__instr 
                                                               >> 2U)
                                                               : (IData)(
                                                                         (0x2000U 
                                                                          != 
                                                                          (0x6004U 
                                                                           & vlSelf->top__DOT__dut__DOT__instr)))))));
        vlSelf->top__DOT__dut__DOT__op_a_sel = (1U 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x30U 
                                                             & vlSelf->top__DOT__dut__DOT__instr)) 
                                                           & ((8U 
                                                               & vlSelf->top__DOT__dut__DOT__instr)
                                                               ? 
                                                              (vlSelf->top__DOT__dut__DOT__instr 
                                                               >> 2U)
                                                               : 
                                                              ((~ 
                                                                (vlSelf->top__DOT__dut__DOT__instr 
                                                                 >> 2U)) 
                                                               & (IData)(
                                                                         (0x2000U 
                                                                          != 
                                                                          (0x6000U 
                                                                           & vlSelf->top__DOT__dut__DOT__instr))))))));
    } else {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr)) {
            vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
            vlSelf->top__DOT__dut__DOT__reg_wr_en = 
                (1U & (IData)((0x10U == (0x18U & vlSelf->top__DOT__dut__DOT__instr))));
            if ((0x10U & vlSelf->top__DOT__dut__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
                } else if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__alu_op = 0xaU;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 5U;
                } else {
                    vlSelf->top__DOT__dut__DOT__alu_op 
                        = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                            ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? 3U : 4U) : ((0x1000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 7U
                                                    : 6U)
                                                   : 2U))
                            : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? 5U
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 1U
                                                    : 0U))));
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
                }
                vlSelf->top__DOT__dut__DOT__op_b_sel 
                    = (1U & (IData)((4U == (0xcU & vlSelf->top__DOT__dut__DOT__instr))));
            } else {
                vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                vlSelf->top__DOT__dut__DOT__op_b_sel 
                    = (1U & (IData)((0U == (0xcU & vlSelf->top__DOT__dut__DOT__instr))));
                vlSelf->top__DOT__dut__DOT__imm_gen_sel 
                    = ((8U & vlSelf->top__DOT__dut__DOT__instr)
                        ? 0U : ((4U & vlSelf->top__DOT__dut__DOT__instr)
                                 ? 0U : 7U));
            }
            vlSelf->top__DOT__dut__DOT__branch_u = 
                (1U & (IData)((0x3010U == (0x701cU 
                                           & vlSelf->top__DOT__dut__DOT__instr))));
        } else {
            if ((0x10U & vlSelf->top__DOT__dut__DOT__instr)) {
                vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
                vlSelf->top__DOT__dut__DOT__reg_wr_en 
                    = (1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                                >> 3U)));
                if ((8U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
                } else if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 5U;
                } else {
                    vlSelf->top__DOT__dut__DOT__alu_op 
                        = ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                            ? ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? 3U : 4U) : ((0x1000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 7U
                                                    : 6U)
                                                   : 2U))
                            : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__dut__DOT__instr)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                   ? 5U
                                                   : 0U)));
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 1U;
                }
                vlSelf->top__DOT__dut__DOT__op_b_sel 
                    = (1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                                >> 3U)));
            } else {
                if ((8U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
                } else if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                    vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 0U;
                } else {
                    vlSelf->top__DOT__dut__DOT__wb_sel = 1U;
                    vlSelf->top__DOT__dut__DOT__imm_gen_sel = 1U;
                }
                vlSelf->top__DOT__dut__DOT__reg_wr_en 
                    = (1U & (IData)((0U == (0xcU & vlSelf->top__DOT__dut__DOT__instr))));
                vlSelf->top__DOT__dut__DOT__alu_op = 0U;
                vlSelf->top__DOT__dut__DOT__op_b_sel 
                    = (1U & (IData)((0U == (0xcU & vlSelf->top__DOT__dut__DOT__instr))));
            }
            vlSelf->top__DOT__dut__DOT__branch_u = 
                (1U & (IData)(((0x10U == (0x1cU & vlSelf->top__DOT__dut__DOT__instr)) 
                               & ((0x4000U & vlSelf->top__DOT__dut__DOT__instr)
                                   ? (IData)((0x3000U 
                                              != (0x3000U 
                                                  & vlSelf->top__DOT__dut__DOT__instr)))
                                   : ((0x2000U & vlSelf->top__DOT__dut__DOT__instr)
                                       ? (vlSelf->top__DOT__dut__DOT__instr 
                                          >> 0xcU) : 
                                      (vlSelf->top__DOT__dut__DOT__instr 
                                       >> 0xcU))))));
        }
        vlSelf->top__DOT__dut__DOT__op_a_sel = (1U 
                                                & (IData)(
                                                          (0x14U 
                                                           == 
                                                           (0x3cU 
                                                            & vlSelf->top__DOT__dut__DOT__instr))));
    }
    vlSelf->top__DOT__dut__DOT__busy9 = __Vdly__top__DOT__dut__DOT__busy9;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i;
    vlSelf->top__DOT__dut__DOT__imm = ((4U & (IData)(vlSelf->top__DOT__dut__DOT__imm_gen_sel))
                                        ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__imm_gen_sel))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__imm_gen_sel))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__dut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->top__DOT__dut__DOT__instr 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->top__DOT__dut__DOT__instr 
                                                            >> 7U))))
                                                : 0U)
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__imm_gen_sel))
                                                ? (0xfffff000U 
                                                   & vlSelf->top__DOT__dut__DOT__instr)
                                                : (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__dut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__dut__DOT__instr 
                                                      >> 0x14U))))
                                        : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__imm_gen_sel))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__imm_gen_sel))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__dut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->top__DOT__dut__DOT__instr) 
                                                      | ((0x800U 
                                                          & (vlSelf->top__DOT__dut__DOT__instr 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->top__DOT__dut__DOT__instr 
                                                               >> 0x14U)))))
                                                : (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__dut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->top__DOT__dut__DOT__instr 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->top__DOT__dut__DOT__instr 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->top__DOT__dut__DOT__instr 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->top__DOT__dut__DOT__instr 
                                                                  >> 7U)))))))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__dut__DOT__imm_gen_sel))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__dut__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__dut__DOT__instr 
                                                      >> 0x14U))
                                                : 0U)));
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_hea047fc4__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo;
        __Vtemp_hea047fc4__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc);
        __Vtemp_hea047fc4__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h2720cab9__0, __Vtemp_hea047fc4__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h2720cab9__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h2720cab9__0[1U]))));
        __Vtemp_hea047fc4__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo;
        __Vtemp_hea047fc4__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc);
        __Vtemp_hea047fc4__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h7ee52d28__0, __Vtemp_hea047fc4__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo_next 
            = __Vtemp_h7ee52d28__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done8 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid7))) {
        __Vdly__top__DOT__dut__DOT__busy8 = 0U;
        vlSelf->top__DOT__dut__DOT__done8 = 0U;
        vlSelf->top__DOT__dut__DOT__valid8 = 0U;
        vlSelf->top__DOT__dut__DOT__temp8 = 0U;
        vlSelf->top__DOT__dut__DOT__digit8 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid8 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid7))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy8 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp7)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp7))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy8) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy8 = 0U;
                vlSelf->top__DOT__dut__DOT__done8 = 1U;
                vlSelf->top__DOT__dut__DOT__valid8 = 1U;
                vlSelf->top__DOT__dut__DOT__temp8 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit8 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy8 = __Vdly__top__DOT__dut__DOT__busy8;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_he9100632__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo;
        __Vtemp_he9100632__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc);
        __Vtemp_he9100632__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h8b29dcfc__0, __Vtemp_he9100632__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h8b29dcfc__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h8b29dcfc__0[1U]))));
        __Vtemp_he9100632__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo;
        __Vtemp_he9100632__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc);
        __Vtemp_he9100632__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h29dd742f__0, __Vtemp_he9100632__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo_next 
            = __Vtemp_h29dd742f__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done7 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid6))) {
        __Vdly__top__DOT__dut__DOT__busy7 = 0U;
        vlSelf->top__DOT__dut__DOT__done7 = 0U;
        vlSelf->top__DOT__dut__DOT__valid7 = 0U;
        vlSelf->top__DOT__dut__DOT__temp7 = 0U;
        vlSelf->top__DOT__dut__DOT__digit7 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid7 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid6))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy7 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp6)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp6))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy7) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy7 = 0U;
                vlSelf->top__DOT__dut__DOT__done7 = 1U;
                vlSelf->top__DOT__dut__DOT__valid7 = 1U;
                vlSelf->top__DOT__dut__DOT__temp7 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit7 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy7 = __Vdly__top__DOT__dut__DOT__busy7;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_h03567219__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo;
        __Vtemp_h03567219__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc);
        __Vtemp_h03567219__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h55aa449f__0, __Vtemp_h03567219__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h55aa449f__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h55aa449f__0[1U]))));
        __Vtemp_h03567219__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo;
        __Vtemp_h03567219__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc);
        __Vtemp_h03567219__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h30c55618__0, __Vtemp_h03567219__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo_next 
            = __Vtemp_h30c55618__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done6 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid5))) {
        __Vdly__top__DOT__dut__DOT__busy6 = 0U;
        vlSelf->top__DOT__dut__DOT__done6 = 0U;
        vlSelf->top__DOT__dut__DOT__valid6 = 0U;
        vlSelf->top__DOT__dut__DOT__temp6 = 0U;
        vlSelf->top__DOT__dut__DOT__digit6 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid6 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid5))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy6 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp5)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp5))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy6) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy6 = 0U;
                vlSelf->top__DOT__dut__DOT__done6 = 1U;
                vlSelf->top__DOT__dut__DOT__valid6 = 1U;
                vlSelf->top__DOT__dut__DOT__temp6 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit6 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy6 = __Vdly__top__DOT__dut__DOT__busy6;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_h520f00d1__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo;
        __Vtemp_h520f00d1__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc);
        __Vtemp_h520f00d1__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h309fc4f3__0, __Vtemp_h520f00d1__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h309fc4f3__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h309fc4f3__0[1U]))));
        __Vtemp_h520f00d1__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo;
        __Vtemp_h520f00d1__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc);
        __Vtemp_h520f00d1__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h227eb376__0, __Vtemp_h520f00d1__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo_next 
            = __Vtemp_h227eb376__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done5 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid4))) {
        __Vdly__top__DOT__dut__DOT__busy5 = 0U;
        vlSelf->top__DOT__dut__DOT__done5 = 0U;
        vlSelf->top__DOT__dut__DOT__valid5 = 0U;
        vlSelf->top__DOT__dut__DOT__temp5 = 0U;
        vlSelf->top__DOT__dut__DOT__digit5 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid5 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid4))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy5 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp4)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp4))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy5) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy5 = 0U;
                vlSelf->top__DOT__dut__DOT__done5 = 1U;
                vlSelf->top__DOT__dut__DOT__valid5 = 1U;
                vlSelf->top__DOT__dut__DOT__temp5 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit5 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy5 = __Vdly__top__DOT__dut__DOT__busy5;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_hfc2cd348__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo;
        __Vtemp_hfc2cd348__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc);
        __Vtemp_hfc2cd348__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h902942ef__0, __Vtemp_hfc2cd348__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h902942ef__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h902942ef__0[1U]))));
        __Vtemp_hfc2cd348__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo;
        __Vtemp_hfc2cd348__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc);
        __Vtemp_hfc2cd348__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h4af4bcfa__0, __Vtemp_hfc2cd348__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo_next 
            = __Vtemp_h4af4bcfa__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done4 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid3))) {
        __Vdly__top__DOT__dut__DOT__busy4 = 0U;
        vlSelf->top__DOT__dut__DOT__done4 = 0U;
        vlSelf->top__DOT__dut__DOT__valid4 = 0U;
        vlSelf->top__DOT__dut__DOT__temp4 = 0U;
        vlSelf->top__DOT__dut__DOT__digit4 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid4 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid3))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy4 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp3)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp3))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy4) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy4 = 0U;
                vlSelf->top__DOT__dut__DOT__done4 = 1U;
                vlSelf->top__DOT__dut__DOT__valid4 = 1U;
                vlSelf->top__DOT__dut__DOT__temp4 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit4 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy4 = __Vdly__top__DOT__dut__DOT__busy4;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_hb1f1c8d6__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo;
        __Vtemp_hb1f1c8d6__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc);
        __Vtemp_hb1f1c8d6__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h48844226__0, __Vtemp_hb1f1c8d6__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h48844226__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h48844226__0[1U]))));
        __Vtemp_hb1f1c8d6__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo;
        __Vtemp_hb1f1c8d6__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc);
        __Vtemp_hb1f1c8d6__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hf18558cb__0, __Vtemp_hb1f1c8d6__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo_next 
            = __Vtemp_hf18558cb__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done3 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid2))) {
        __Vdly__top__DOT__dut__DOT__busy3 = 0U;
        vlSelf->top__DOT__dut__DOT__done3 = 0U;
        vlSelf->top__DOT__dut__DOT__valid3 = 0U;
        vlSelf->top__DOT__dut__DOT__temp3 = 0U;
        vlSelf->top__DOT__dut__DOT__digit3 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid3 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid2))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy3 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp2)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp2))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy3) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy3 = 0U;
                vlSelf->top__DOT__dut__DOT__done3 = 1U;
                vlSelf->top__DOT__dut__DOT__valid3 = 1U;
                vlSelf->top__DOT__dut__DOT__temp3 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit3 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy3 = __Vdly__top__DOT__dut__DOT__busy3;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_hb225c4c1__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo;
        __Vtemp_hb225c4c1__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc);
        __Vtemp_hb225c4c1__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hd7bd3995__0, __Vtemp_hb225c4c1__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_hd7bd3995__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_hd7bd3995__0[1U]))));
        __Vtemp_hb225c4c1__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo;
        __Vtemp_hb225c4c1__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc);
        __Vtemp_hb225c4c1__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h4bcffffa__0, __Vtemp_hb225c4c1__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo_next 
            = __Vtemp_h4bcffffa__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done2 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid1))) {
        __Vdly__top__DOT__dut__DOT__busy2 = 0U;
        vlSelf->top__DOT__dut__DOT__done2 = 0U;
        vlSelf->top__DOT__dut__DOT__valid2 = 0U;
        vlSelf->top__DOT__dut__DOT__temp2 = 0U;
        vlSelf->top__DOT__dut__DOT__digit2 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid2 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid1))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy2 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp1)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp1))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy2) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy2 = 0U;
                vlSelf->top__DOT__dut__DOT__done2 = 1U;
                vlSelf->top__DOT__dut__DOT__valid2 = 1U;
                vlSelf->top__DOT__dut__DOT__temp2 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit2 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy2 = __Vdly__top__DOT__dut__DOT__busy2;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_hed18dee4__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo;
        __Vtemp_hed18dee4__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc);
        __Vtemp_hed18dee4__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h7a5efb00__0, __Vtemp_hed18dee4__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h7a5efb00__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h7a5efb00__0[1U]))));
        __Vtemp_hed18dee4__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo;
        __Vtemp_hed18dee4__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc);
        __Vtemp_hed18dee4__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hb30f193a__0, __Vtemp_hed18dee4__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo_next 
            = __Vtemp_hb30f193a__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done1 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__valid0))) {
        __Vdly__top__DOT__dut__DOT__busy1 = 0U;
        vlSelf->top__DOT__dut__DOT__done1 = 0U;
        vlSelf->top__DOT__dut__DOT__valid1 = 0U;
        vlSelf->top__DOT__dut__DOT__temp1 = 0U;
        vlSelf->top__DOT__dut__DOT__digit1 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid1 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__valid0))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy1 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp0)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__temp0))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy1) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy1 = 0U;
                vlSelf->top__DOT__dut__DOT__done1 = 1U;
                vlSelf->top__DOT__dut__DOT__valid1 = 1U;
                vlSelf->top__DOT__dut__DOT__temp1 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit1 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy1 = __Vdly__top__DOT__dut__DOT__busy1;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i;
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_h56137496__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo;
        __Vtemp_h56137496__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc);
        __Vtemp_h56137496__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_hf584490a__0, __Vtemp_h56137496__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_hf584490a__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_hf584490a__0[1U]))));
        __Vtemp_h56137496__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo;
        __Vtemp_h56137496__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc);
        __Vtemp_h56137496__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h0ec2e291__0, __Vtemp_h56137496__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo_next 
            = __Vtemp_h0ec2e291__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__done0 = 0U;
    if (((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__start))) {
        __Vdly__top__DOT__dut__DOT__busy0 = 0U;
        vlSelf->top__DOT__dut__DOT__done0 = 0U;
        vlSelf->top__DOT__dut__DOT__valid0 = 0U;
        vlSelf->top__DOT__dut__DOT__temp0 = 0U;
        vlSelf->top__DOT__dut__DOT__digit0 = 0U;
        __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i = 0U;
        vlSelf->top__DOT__dut__DOT__valid0 = 0U;
    }
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__start))) {
        if ((0x1fU > (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i))) {
            __Vdly__top__DOT__dut__DOT__busy0 = 1U;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__b1 = 0xaU;
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc 
                = ((QData)((IData)(vlSelf->top__DOT__dut__DOT__rs1_data)) 
                   >> 0x1fU);
            vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo 
                = ((IData)((QData)((IData)(vlSelf->top__DOT__dut__DOT__rs1_data))) 
                   << 1U);
        }
        if (vlSelf->top__DOT__dut__DOT__busy0) {
            if ((0x1fU == (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i))) {
                __Vdly__top__DOT__dut__DOT__busy0 = 0U;
                vlSelf->top__DOT__dut__DOT__done0 = 1U;
                vlSelf->top__DOT__dut__DOT__valid0 = 1U;
                vlSelf->top__DOT__dut__DOT__temp0 = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo_next;
                vlSelf->top__DOT__dut__DOT__digit0 
                    = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next 
                               >> 1U));
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i = 0x1fU;
            } else {
                __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i)));
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next;
                vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo 
                    = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo_next;
            }
        }
    }
    vlSelf->top__DOT__dut__DOT__busy0 = __Vdly__top__DOT__dut__DOT__busy0;
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i 
        = __Vdly__top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i;
    vlSelf->top__DOT__dut__DOT__rs1_data = vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                   >> 0xfU))];
    if ((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc 
         >= (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__b1)))) {
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next 
            = (0x1ffffffffULL & (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc 
                                 - (QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__b1))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT____Vconcswap_1_h6f06e9a5__0 
            = (((QData)((IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next)) 
                << 1U) | (QData)((IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT____Vconcswap_1_h6f06e9a5__0;
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT____Vconcswap_1_h9d46bfda__0 
            = (1U | (vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo 
                     << 1U));
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo_next 
            = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT____Vconcswap_1_h9d46bfda__0;
    } else {
        __Vtemp_h64edf5e7__0[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo;
        __Vtemp_h64edf5e7__0[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc);
        __Vtemp_h64edf5e7__0[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_h097e133b__0, __Vtemp_h64edf5e7__0, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next 
            = (0x1ffffffffULL & (((QData)((IData)((1U 
                                                   & __Vtemp_h097e133b__0[2U]))) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h097e133b__0[1U]))));
        __Vtemp_h64edf5e7__1[0U] = vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo;
        __Vtemp_h64edf5e7__1[1U] = (IData)(vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc);
        __Vtemp_h64edf5e7__1[2U] = (IData)((vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc 
                                            >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp_ha11fcb41__0, __Vtemp_h64edf5e7__1, 1U);
        vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo_next 
            = __Vtemp_ha11fcb41__0[0U];
    }
    vlSelf->top__DOT__dut__DOT__operand_a = ((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel)
                                              ? vlSelf->top__DOT__dut__DOT__pc
                                              : vlSelf->top__DOT__dut__DOT__rs1_data);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v0;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v1;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v2;
    SData/*8:0*/ __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v3;
    // Body
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v1 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v2 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v3 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3 = 0U;
    if ((((((((((0U == (0xfU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                >> 8U))) | (1U == (0xfU 
                                                   & (vlSelf->top__DOT__dut__DOT__alu_data 
                                                      >> 8U)))) 
               | (2U == (0xfU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                 >> 8U)))) | (3U == 
                                              (0xfU 
                                               & (vlSelf->top__DOT__dut__DOT__alu_data 
                                                  >> 8U)))) 
             | (4U == (0xfU & (vlSelf->top__DOT__dut__DOT__alu_data 
                               >> 8U)))) | (5U == (0xfU 
                                                   & (vlSelf->top__DOT__dut__DOT__alu_data 
                                                      >> 8U)))) 
           | (6U == (0xfU & (vlSelf->top__DOT__dut__DOT__alu_data 
                             >> 8U)))) | (7U == (0xfU 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_data 
                                                    >> 8U)))) 
         & (IData)(vlSelf->top__DOT__dut__DOT__dmem_wr))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v0 
                = (0xffU & vlSelf->top__DOT__dut__DOT__rs2_data);
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v0 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v0 = 0U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v0 
                = (0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                             >> 2U));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v1 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__rs2_data 
                            >> 8U));
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v1 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v1 = 8U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v1 
                = (0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                             >> 2U));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v2 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__rs2_data 
                            >> 0x10U));
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v2 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v2 
                = (0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                             >> 2U));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v3 
                = (vlSelf->top__DOT__dut__DOT__rs2_data 
                   >> 0x18U);
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v3 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v3 
                = (0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                             >> 2U));
        }
    }
    if ((IData)(((0x800U == (0xf00U & vlSelf->top__DOT__dut__DOT__alu_data)) 
                 & (IData)(vlSelf->top__DOT__dut__DOT__dmem_wr)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0 
                = (0xffU & vlSelf->top__DOT__dut__DOT__rs2_data);
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0 = 0U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0 
                = (0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                            >> 2U));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__rs2_data 
                            >> 8U));
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1 = 8U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1 
                = (0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                            >> 2U));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2 
                = (0xffU & (vlSelf->top__DOT__dut__DOT__rs2_data 
                            >> 0x10U));
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2 
                = (0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                            >> 2U));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3 
                = (vlSelf->top__DOT__dut__DOT__rs2_data 
                   >> 0x18U);
            __Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3 = 1U;
            __Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3 
                = (0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                            >> 2U));
        }
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v0) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v0))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v0))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v1) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v1))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v1))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v2) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v2))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v2))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__memory__v3) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v3))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__memory__v3))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v0))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v1))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v2))));
    }
    if (__Vdlyvset__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3))) 
                & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__dut__DOT__lsu_block__DOT__output_peri__v3))));
    }
    vlSelf->io_lcd_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0x28U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0x24U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0x20U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0x1cU];
    vlSelf->io_hex6_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0x18U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0x14U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0x10U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0xcU];
    vlSelf->io_hex2_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [8U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [4U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
        [0U];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__start 
        = ((vlSelf->io_sw_i == vlSelf->top__DOT__dut__DOT__rs1_data)
            ? 1U : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__dmem_wr = (IData)((0x20U 
                                                   == 
                                                   (0x7cU 
                                                    & vlSelf->top__DOT__dut__DOT__instr)));
    vlSelf->top__DOT__dut__DOT__rs2_data = vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                   >> 0x14U))];
    vlSelf->top__DOT__dut__DOT__operand_b = ((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel)
                                              ? vlSelf->top__DOT__dut__DOT__imm
                                              : vlSelf->top__DOT__dut__DOT__rs2_data);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (1U & ((~ vlSelf->top__DOT__dut__DOT__rs1_data) 
                    & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (2U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                         >> 1U)) << 1U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (4U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                         >> 2U)) << 2U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (8U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                         >> 3U)) << 3U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x10U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 4U)) << 4U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x20U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 5U)) << 5U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x40U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 6U)) << 6U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x80U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 7U)) << 7U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x100U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 8U)) << 8U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x200U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 9U)) << 9U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x400U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 0xaU)) << 0xaU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x800U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 0xbU)) << 0xbU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x1000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xcU)) << 0xcU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x2000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xdU)) << 0xdU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x4000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xeU)) << 0xeU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x8000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xfU)) << 0xfU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x10000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x10U)) << 0x10U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x20000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x11U)) << 0x11U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x40000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x12U)) << 0x12U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x80000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x13U)) << 0x13U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x100000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x14U)) << 0x14U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x200000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x15U)) << 0x15U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x400000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x16U)) << 0x16U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x800000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x17U)) << 0x17U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x1000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x18U)) << 0x18U) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x2000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x19U)) << 0x19U) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x4000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1aU)) << 0x1aU) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x8000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1bU)) << 0x1bU) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x10000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1cU)) << 0x1cU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x20000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1dU)) << 0x1dU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x40000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1eU)) << 0x1eU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp) 
           | (0x80000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1fU)) << 0x1fU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (1U & ((~ vlSelf->top__DOT__dut__DOT__rs1_data) 
                    & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (2U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                         >> 1U)) << 1U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (4U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                         >> 2U)) << 2U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (8U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                         >> 3U)) << 3U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x10U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 4U)) << 4U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x20U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 5U)) << 5U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x40U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 6U)) << 6U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x80U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 7U)) << 7U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x100U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 8U)) << 8U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x200U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 9U)) << 9U) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x400U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 0xaU)) << 0xaU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x800U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                             >> 0xbU)) << 0xbU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x1000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xcU)) << 0xcU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x2000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xdU)) << 0xdU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x4000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xeU)) << 0xeU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x8000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                              >> 0xfU)) << 0xfU) & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x10000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x10U)) << 0x10U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x20000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x11U)) << 0x11U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x40000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x12U)) << 0x12U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x80000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                               >> 0x13U)) << 0x13U) 
                          & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x100000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x14U)) << 0x14U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x200000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x15U)) << 0x15U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x400000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x16U)) << 0x16U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x800000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                >> 0x17U)) << 0x17U) 
                           & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x1000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x18U)) << 0x18U) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x2000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x19U)) << 0x19U) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x4000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1aU)) << 0x1aU) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x8000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                 >> 0x1bU)) << 0x1bU) 
                            & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x10000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1cU)) << 0x1cU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x20000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1dU)) << 0x1dU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x40000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1eU)) << 0x1eU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x80000000U & (((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                                  >> 0x1fU)) << 0x1fU) 
                             & vlSelf->top__DOT__dut__DOT__rs2_data)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (1U & ((~ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data))) 
                    & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (2U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         >> 1U)) << 1U) & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (4U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         >> 2U)) << 2U) & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (8U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         >> 3U)) << 3U) & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x10U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            >> 4U)) << 4U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x20U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            >> 5U)) << 5U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x40U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            >> 6U)) << 6U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x80U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            >> 7U)) << 7U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x100U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             >> 8U)) << 8U) & ((IData)(1U) 
                                               + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x200U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             >> 9U)) << 9U) & ((IData)(1U) 
                                               + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x400U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             >> 0xaU)) << 0xaU) & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x800U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             >> 0xbU)) << 0xbU) & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x1000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              >> 0xcU)) << 0xcU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x2000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              >> 0xdU)) << 0xdU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x4000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              >> 0xeU)) << 0xeU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x8000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              >> 0xfU)) << 0xfU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x10000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               >> 0x10U)) << 0x10U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x20000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               >> 0x11U)) << 0x11U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x40000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               >> 0x12U)) << 0x12U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x80000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               >> 0x13U)) << 0x13U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x100000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                >> 0x14U)) << 0x14U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x200000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                >> 0x15U)) << 0x15U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x400000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                >> 0x16U)) << 0x16U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x800000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                >> 0x17U)) << 0x17U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x1000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 >> 0x18U)) << 0x18U) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x2000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 >> 0x19U)) << 0x19U) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x4000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 >> 0x1aU)) << 0x1aU) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x8000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 >> 0x1bU)) << 0x1bU) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x10000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                  >> 0x1cU)) << 0x1cU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x20000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                  >> 0x1dU)) << 0x1dU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x40000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                  >> 0x1eU)) << 0x1eU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x80000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                  >> 0x1fU)) << 0x1fU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & (~ vlSelf->top__DOT__dut__DOT__rs2_data))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (2U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (4U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (8U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x10U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 4U)) << 4U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x20U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 5U)) << 5U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x40U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 6U)) << 6U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x80U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 7U)) << 7U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x100U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 8U)) << 8U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x200U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 9U)) << 9U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x400U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 0xaU)) << 0xaU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x800U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 0xbU)) << 0xbU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x1000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xcU)) << 0xcU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x2000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xdU)) << 0xdU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x4000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xeU)) << 0xeU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x8000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xfU)) << 0xfU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x10000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x10U)) << 0x10U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x20000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x11U)) << 0x11U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x40000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x12U)) << 0x12U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x80000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x13U)) << 0x13U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x100000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x14U)) << 0x14U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x200000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x15U)) << 0x15U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x400000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x16U)) << 0x16U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x800000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x17U)) << 0x17U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x1000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x18U)) << 0x18U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x2000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x19U)) << 0x19U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x4000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1aU)) << 0x1aU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x8000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1bU)) << 0x1bU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x10000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1cU)) << 0x1cU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x20000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1dU)) << 0x1dU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x40000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1eU)) << 0x1eU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp) 
           | (0x80000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1fU)) << 0x1fU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (1U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & (~ vlSelf->top__DOT__dut__DOT__rs2_data))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (2U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (4U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (8U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x10U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 4U)) << 4U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x20U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 5U)) << 5U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x40U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 6U)) << 6U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x80U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                       & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                              >> 7U)) << 7U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x100U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 8U)) << 8U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x200U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 9U)) << 9U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x400U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 0xaU)) << 0xaU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x800U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                        & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                               >> 0xbU)) << 0xbU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x1000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xcU)) << 0xcU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x2000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xdU)) << 0xdU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x4000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xeU)) << 0xeU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x8000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                         & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                >> 0xfU)) << 0xfU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x10000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x10U)) << 0x10U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x20000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x11U)) << 0x11U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x40000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x12U)) << 0x12U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x80000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                          & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                 >> 0x13U)) << 0x13U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x100000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x14U)) << 0x14U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x200000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x15U)) << 0x15U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x400000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x16U)) << 0x16U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x800000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                           & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                  >> 0x17U)) << 0x17U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x1000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x18U)) << 0x18U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x2000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x19U)) << 0x19U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x4000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1aU)) << 0x1aU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x8000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                            & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                   >> 0x1bU)) << 0x1bU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x10000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1cU)) << 0x1cU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x20000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1dU)) << 0x1dU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x40000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1eU)) << 0x1eU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x80000000U & (vlSelf->top__DOT__dut__DOT__rs1_data 
                             & ((~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1fU)) << 0x1fU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                    & (~ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (2U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                    & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (4U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                    & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (8U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                    & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x10U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                              >> 4U)) << 4U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x20U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                              >> 5U)) << 5U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x40U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                              >> 6U)) << 6U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x80U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                              >> 7U)) << 7U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x100U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                               >> 8U)) << 8U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x200U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                               >> 9U)) << 9U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x400U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                               >> 0xaU)) << 0xaU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x800U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                               >> 0xbU)) << 0xbU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x1000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                >> 0xcU)) << 0xcU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x2000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                >> 0xdU)) << 0xdU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x4000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                >> 0xeU)) << 0xeU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x8000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                >> 0xfU)) << 0xfU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x10000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                 >> 0x10U)) << 0x10U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x20000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                 >> 0x11U)) << 0x11U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x40000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                 >> 0x12U)) << 0x12U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x80000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                 >> 0x13U)) << 0x13U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x100000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                  >> 0x14U)) << 0x14U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x200000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                  >> 0x15U)) << 0x15U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x400000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                  >> 0x16U)) << 0x16U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x800000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                  >> 0x17U)) << 0x17U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x1000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x18U)) << 0x18U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x2000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x19U)) << 0x19U))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x4000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1aU)) << 0x1aU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x8000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                   >> 0x1bU)) << 0x1bU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x10000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1cU)) << 0x1cU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x20000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1dU)) << 0x1dU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x40000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1eU)) << 0x1eU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x80000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data)) 
                                    >> 0x1fU)) << 0x1fU))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (1U & (~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                       ^ vlSelf->top__DOT__dut__DOT__rs2_data))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (2U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                         ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (4U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                         ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (8U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                         ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x10U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 4U)) << 4U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x20U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 5U)) << 5U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x40U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 6U)) << 6U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x80U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 7U)) << 7U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x100U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 8U)) << 8U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x200U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 9U)) << 9U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x400U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 0xaU)) << 0xaU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x800U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 0xbU)) << 0xbU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x1000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xcU)) << 0xcU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x2000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xdU)) << 0xdU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x4000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xeU)) << 0xeU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x8000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xfU)) << 0xfU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x10000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x10U)) << 0x10U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x20000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x11U)) << 0x11U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x40000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x12U)) << 0x12U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x80000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x13U)) << 0x13U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x100000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x14U)) << 0x14U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x200000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x15U)) << 0x15U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x400000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x16U)) << 0x16U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x800000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x17U)) << 0x17U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x1000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x18U)) << 0x18U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x2000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x19U)) << 0x19U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x4000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x1aU)) << 0x1aU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x8000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x1bU)) << 0x1bU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x10000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                  ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                 >> 0x1cU)) << 0x1cU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x20000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                  ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                 >> 0x1dU)) << 0x1dU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | (0x40000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                  ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                 >> 0x1eU)) << 0x1eU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp) 
           | ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                   ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                  >> 0x1fU)) << 0x1fU));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (1U & (~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                       ^ vlSelf->top__DOT__dut__DOT__rs2_data))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (2U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                         ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (4U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                         ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (8U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                         ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x10U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 4U)) << 4U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x20U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 5U)) << 5U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x40U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 6U)) << 6U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x80U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                            ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                           >> 7U)) << 7U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x100U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 8U)) << 8U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x200U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 9U)) << 9U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x400U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 0xaU)) << 0xaU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x800U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                             ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                            >> 0xbU)) << 0xbU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x1000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xcU)) << 0xcU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x2000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xdU)) << 0xdU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x4000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xeU)) << 0xeU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x8000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                              ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                             >> 0xfU)) << 0xfU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x10000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x10U)) << 0x10U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x20000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x11U)) << 0x11U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x40000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x12U)) << 0x12U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x80000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                               ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                              >> 0x13U)) << 0x13U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x100000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x14U)) << 0x14U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x200000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x15U)) << 0x15U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x400000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x16U)) << 0x16U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x800000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                               >> 0x17U)) << 0x17U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x1000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x18U)) << 0x18U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x2000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x19U)) << 0x19U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x4000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x1aU)) << 0x1aU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x8000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                >> 0x1bU)) << 0x1bU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x10000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                  ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                 >> 0x1cU)) << 0x1cU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x20000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                  ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                 >> 0x1dU)) << 0x1dU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x40000000U & ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                  ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                                 >> 0x1eU)) << 0x1eU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | ((~ ((vlSelf->top__DOT__dut__DOT__rs1_data 
                   ^ vlSelf->top__DOT__dut__DOT__rs2_data) 
                  >> 0x1fU)) << 0x1fU));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                       ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))))));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x10U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                           >> 4U)) << 4U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x20U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                           >> 5U)) << 5U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x40U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                           >> 6U)) << 6U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x80U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                           >> 7U)) << 7U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x100U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                            >> 8U)) << 8U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x200U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                            >> 9U)) << 9U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x400U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                            >> 0xaU)) << 0xaU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x800U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                            >> 0xbU)) << 0xbU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x1000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                             >> 0xcU)) << 0xcU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x2000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                             >> 0xdU)) << 0xdU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x4000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                             >> 0xeU)) << 0xeU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x8000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                             >> 0xfU)) << 0xfU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x10000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                              >> 0x10U)) << 0x10U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x20000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                              >> 0x11U)) << 0x11U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x40000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                              >> 0x12U)) << 0x12U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x80000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                              >> 0x13U)) << 0x13U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x100000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                               >> 0x14U)) << 0x14U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x200000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                               >> 0x15U)) << 0x15U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x400000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                               >> 0x16U)) << 0x16U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x800000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                               >> 0x17U)) << 0x17U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x1000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                >> 0x18U)) << 0x18U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x2000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                >> 0x19U)) << 0x19U)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x4000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                >> 0x1aU)) << 0x1aU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x8000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                >> 0x1bU)) << 0x1bU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x10000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                  ^ ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                 >> 0x1cU)) << 0x1cU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x20000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                  ^ ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                 >> 0x1dU)) << 0x1dU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x40000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                                  ^ ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                 >> 0x1eU)) << 0x1eU)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs1_data)) 
                   ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                  >> 0x1fU)) << 0x1fU));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (1U & ((~ vlSelf->top__DOT__dut__DOT__operand_a) 
                    & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (2U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                         >> 1U)) << 1U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (4U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                         >> 2U)) << 2U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (8U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                         >> 3U)) << 3U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x10U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 4U)) << 4U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x20U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 5U)) << 5U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x40U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 6U)) << 6U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x80U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 7U)) << 7U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x100U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 8U)) << 8U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x200U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 9U)) << 9U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x400U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 0xaU)) << 0xaU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x800U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 0xbU)) << 0xbU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x1000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xcU)) << 0xcU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x2000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xdU)) << 0xdU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x4000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xeU)) << 0xeU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x8000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xfU)) << 0xfU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x10000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x10U)) << 0x10U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x20000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x11U)) << 0x11U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x40000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x12U)) << 0x12U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x80000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x13U)) << 0x13U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x100000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x14U)) << 0x14U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x200000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x15U)) << 0x15U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x400000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x16U)) << 0x16U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x800000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x17U)) << 0x17U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x1000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x18U)) << 0x18U) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x2000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x19U)) << 0x19U) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x4000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1aU)) << 0x1aU) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x8000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1bU)) << 0x1bU) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x10000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1cU)) << 0x1cU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x20000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1dU)) << 0x1dU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x40000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1eU)) << 0x1eU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp) 
           | (0x80000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1fU)) << 0x1fU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (1U & ((~ vlSelf->top__DOT__dut__DOT__operand_a) 
                    & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (2U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                         >> 1U)) << 1U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (4U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                         >> 2U)) << 2U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (8U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                         >> 3U)) << 3U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x10U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 4U)) << 4U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x20U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 5U)) << 5U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x40U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 6U)) << 6U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x80U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 7U)) << 7U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x100U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 8U)) << 8U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x200U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 9U)) << 9U) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x400U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 0xaU)) << 0xaU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x800U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                             >> 0xbU)) << 0xbU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x1000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xcU)) << 0xcU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x2000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xdU)) << 0xdU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x4000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xeU)) << 0xeU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x8000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                              >> 0xfU)) << 0xfU) & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x10000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x10U)) << 0x10U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x20000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x11U)) << 0x11U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x40000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x12U)) << 0x12U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x80000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                               >> 0x13U)) << 0x13U) 
                          & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x100000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x14U)) << 0x14U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x200000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x15U)) << 0x15U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x400000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x16U)) << 0x16U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x800000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                >> 0x17U)) << 0x17U) 
                           & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x1000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x18U)) << 0x18U) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x2000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x19U)) << 0x19U) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x4000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1aU)) << 0x1aU) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x8000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                 >> 0x1bU)) << 0x1bU) 
                            & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x10000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1cU)) << 0x1cU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x20000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1dU)) << 0x1dU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x40000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1eU)) << 0x1eU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp) 
           | (0x80000000U & (((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                                  >> 0x1fU)) << 0x1fU) 
                             & vlSelf->top__DOT__dut__DOT__operand_b)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (1U & ((~ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a))) 
                    & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (2U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         >> 1U)) << 1U) & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (4U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         >> 2U)) << 2U) & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (8U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         >> 3U)) << 3U) & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x10U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            >> 4U)) << 4U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x20U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            >> 5U)) << 5U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x40U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            >> 6U)) << 6U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x80U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            >> 7U)) << 7U) & ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x100U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             >> 8U)) << 8U) & ((IData)(1U) 
                                               + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x200U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             >> 9U)) << 9U) & ((IData)(1U) 
                                               + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x400U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             >> 0xaU)) << 0xaU) & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x800U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             >> 0xbU)) << 0xbU) & ((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x1000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              >> 0xcU)) << 0xcU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x2000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              >> 0xdU)) << 0xdU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x4000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              >> 0xeU)) << 0xeU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x8000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              >> 0xfU)) << 0xfU) & 
                         ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x10000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               >> 0x10U)) << 0x10U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x20000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               >> 0x11U)) << 0x11U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x40000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               >> 0x12U)) << 0x12U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x80000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               >> 0x13U)) << 0x13U) 
                          & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x100000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                >> 0x14U)) << 0x14U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x200000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                >> 0x15U)) << 0x15U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x400000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                >> 0x16U)) << 0x16U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x800000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                >> 0x17U)) << 0x17U) 
                           & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x1000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 >> 0x18U)) << 0x18U) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x2000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 >> 0x19U)) << 0x19U) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x4000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 >> 0x1aU)) << 0x1aU) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x8000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 >> 0x1bU)) << 0x1bU) 
                            & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x10000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1cU)) << 0x1cU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x20000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1dU)) << 0x1dU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x40000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1eU)) << 0x1eU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp) 
           | (0x80000000U & (((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  >> 0x1fU)) << 0x1fU) 
                             & ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & (~ vlSelf->top__DOT__dut__DOT__operand_b))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (2U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (4U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (8U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x10U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 4U)) << 4U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x20U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 5U)) << 5U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x40U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 6U)) << 6U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x80U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 7U)) << 7U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x100U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 8U)) << 8U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x200U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 9U)) << 9U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x400U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 0xaU)) << 0xaU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x800U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 0xbU)) << 0xbU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x1000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xcU)) << 0xcU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x2000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xdU)) << 0xdU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x4000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xeU)) << 0xeU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x8000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xfU)) << 0xfU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x10000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x10U)) << 0x10U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x20000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x11U)) << 0x11U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x40000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x12U)) << 0x12U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x80000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x13U)) << 0x13U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x100000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x14U)) << 0x14U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x200000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x15U)) << 0x15U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x400000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x16U)) << 0x16U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x800000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x17U)) << 0x17U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x1000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x18U)) << 0x18U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x2000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x19U)) << 0x19U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x4000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1aU)) << 0x1aU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x8000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1bU)) << 0x1bU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x10000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1cU)) << 0x1cU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x20000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1dU)) << 0x1dU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x40000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1eU)) << 0x1eU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp) 
           | (0x80000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1fU)) << 0x1fU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (1U & (~ (vlSelf->top__DOT__dut__DOT__operand_a 
                       ^ vlSelf->top__DOT__dut__DOT__operand_b))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (2U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                         ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (4U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                         ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (8U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                         ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x10U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 4U)) << 4U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x20U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 5U)) << 5U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x40U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 6U)) << 6U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x80U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 7U)) << 7U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x100U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 8U)) << 8U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x200U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 9U)) << 9U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x400U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 0xaU)) << 0xaU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x800U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 0xbU)) << 0xbU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x1000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xcU)) << 0xcU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x2000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xdU)) << 0xdU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x4000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xeU)) << 0xeU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x8000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xfU)) << 0xfU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x10000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x10U)) << 0x10U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x20000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x11U)) << 0x11U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x40000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x12U)) << 0x12U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x80000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x13U)) << 0x13U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x100000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x14U)) << 0x14U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x200000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x15U)) << 0x15U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x400000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x16U)) << 0x16U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x800000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x17U)) << 0x17U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x1000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x18U)) << 0x18U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x2000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x19U)) << 0x19U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x4000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x1aU)) << 0x1aU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x8000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x1bU)) << 0x1bU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x10000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                 >> 0x1cU)) << 0x1cU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x20000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                 >> 0x1dU)) << 0x1dU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | (0x40000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                 >> 0x1eU)) << 0x1eU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp) 
           | ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                   ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                  >> 0x1fU)) << 0x1fU));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (1U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & (~ vlSelf->top__DOT__dut__DOT__operand_b))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (2U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (4U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (8U & (vlSelf->top__DOT__dut__DOT__operand_a 
                    & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x10U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 4U)) << 4U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x20U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 5U)) << 5U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x40U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 6U)) << 6U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x80U & (vlSelf->top__DOT__dut__DOT__operand_a 
                       & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                              >> 7U)) << 7U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x100U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 8U)) << 8U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x200U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 9U)) << 9U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x400U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 0xaU)) << 0xaU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x800U & (vlSelf->top__DOT__dut__DOT__operand_a 
                        & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                               >> 0xbU)) << 0xbU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x1000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xcU)) << 0xcU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x2000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xdU)) << 0xdU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x4000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xeU)) << 0xeU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x8000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                         & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                >> 0xfU)) << 0xfU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x10000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x10U)) << 0x10U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x20000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x11U)) << 0x11U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x40000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x12U)) << 0x12U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x80000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                          & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                 >> 0x13U)) << 0x13U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x100000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x14U)) << 0x14U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x200000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x15U)) << 0x15U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x400000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x16U)) << 0x16U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x800000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                           & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                  >> 0x17U)) << 0x17U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x1000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x18U)) << 0x18U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x2000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x19U)) << 0x19U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x4000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1aU)) << 0x1aU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x8000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                            & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                   >> 0x1bU)) << 0x1bU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x10000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1cU)) << 0x1cU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x20000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1dU)) << 0x1dU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x40000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1eU)) << 0x1eU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp) 
           | (0x80000000U & (vlSelf->top__DOT__dut__DOT__operand_a 
                             & ((~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1fU)) << 0x1fU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (1U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                    & (~ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (2U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                    & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (4U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                    & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (8U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                    & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x10U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                              >> 4U)) << 4U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x20U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                              >> 5U)) << 5U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x40U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                              >> 6U)) << 6U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x80U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                       & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                              >> 7U)) << 7U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x100U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                               >> 8U)) << 8U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x200U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                               >> 9U)) << 9U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x400U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                               >> 0xaU)) << 0xaU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x800U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                        & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                               >> 0xbU)) << 0xbU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x1000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                >> 0xcU)) << 0xcU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x2000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                >> 0xdU)) << 0xdU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x4000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                >> 0xeU)) << 0xeU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x8000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                >> 0xfU)) << 0xfU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x10000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                 >> 0x10U)) << 0x10U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x20000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                 >> 0x11U)) << 0x11U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x40000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                 >> 0x12U)) << 0x12U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x80000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                          & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                 >> 0x13U)) << 0x13U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x100000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                  >> 0x14U)) << 0x14U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x200000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                  >> 0x15U)) << 0x15U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x400000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                  >> 0x16U)) << 0x16U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x800000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                           & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                  >> 0x17U)) << 0x17U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x1000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x18U)) << 0x18U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x2000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x19U)) << 0x19U))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x4000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1aU)) << 0x1aU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x8000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            & ((~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                   >> 0x1bU)) << 0x1bU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x10000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1cU)) << 0x1cU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x20000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1dU)) << 0x1dU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x40000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1eU)) << 0x1eU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp) 
           | (0x80000000U & (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             & ((~ (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b)) 
                                    >> 0x1fU)) << 0x1fU))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (1U & (~ (vlSelf->top__DOT__dut__DOT__operand_a 
                       ^ vlSelf->top__DOT__dut__DOT__operand_b))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (2U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                         ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (4U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                         ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (8U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                         ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x10U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 4U)) << 4U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x20U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 5U)) << 5U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x40U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 6U)) << 6U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x80U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                            ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                           >> 7U)) << 7U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x100U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 8U)) << 8U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x200U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 9U)) << 9U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x400U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 0xaU)) << 0xaU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x800U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                             ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                            >> 0xbU)) << 0xbU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x1000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xcU)) << 0xcU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x2000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xdU)) << 0xdU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x4000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xeU)) << 0xeU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x8000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                              ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                             >> 0xfU)) << 0xfU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x10000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x10U)) << 0x10U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x20000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x11U)) << 0x11U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x40000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x12U)) << 0x12U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x80000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                              >> 0x13U)) << 0x13U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x100000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x14U)) << 0x14U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x200000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x15U)) << 0x15U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x400000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x16U)) << 0x16U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x800000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                               >> 0x17U)) << 0x17U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x1000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x18U)) << 0x18U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x2000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x19U)) << 0x19U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x4000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x1aU)) << 0x1aU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x8000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                 ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                >> 0x1bU)) << 0x1bU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x10000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                 >> 0x1cU)) << 0x1cU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x20000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                 >> 0x1dU)) << 0x1dU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | (0x40000000U & ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                                  ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                                 >> 0x1eU)) << 0x1eU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp) 
           | ((~ ((vlSelf->top__DOT__dut__DOT__operand_a 
                   ^ vlSelf->top__DOT__dut__DOT__operand_b) 
                  >> 0x1fU)) << 0x1fU));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffffeU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                       ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))))));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffffdU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffffbU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffff7U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffffefU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x10U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                           >> 4U)) << 4U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffffdfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x20U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                           >> 5U)) << 5U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffffbfU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x40U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                           >> 6U)) << 6U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffff7fU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x80U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                            ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                           >> 7U)) << 7U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffeffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x100U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                            >> 8U)) << 8U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffdffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x200U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                            >> 9U)) << 9U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffffbffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x400U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                            >> 0xaU)) << 0xaU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffff7ffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x800U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                             ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                            >> 0xbU)) << 0xbU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffefffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x1000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                             >> 0xcU)) << 0xcU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffdfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x2000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                             >> 0xdU)) << 0xdU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffffbfffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x4000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                             >> 0xeU)) << 0xeU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffff7fffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x8000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                              ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                             >> 0xfU)) << 0xfU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffeffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x10000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                              >> 0x10U)) << 0x10U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffdffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x20000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                              >> 0x11U)) << 0x11U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfffbffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x40000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                              >> 0x12U)) << 0x12U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfff7ffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x80000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                               ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                              >> 0x13U)) << 0x13U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffefffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x100000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                               >> 0x14U)) << 0x14U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffdfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x200000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                               >> 0x15U)) << 0x15U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xffbfffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x400000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                               >> 0x16U)) << 0x16U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xff7fffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x800000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                               >> 0x17U)) << 0x17U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfeffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x1000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                >> 0x18U)) << 0x18U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfdffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x2000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                >> 0x19U)) << 0x19U)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xfbffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x4000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                >> 0x1aU)) << 0x1aU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xf7ffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x8000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                 ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                >> 0x1bU)) << 0x1bU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xefffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x10000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  ^ ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                 >> 0x1cU)) << 0x1cU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xdfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x20000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  ^ ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                 >> 0x1dU)) << 0x1dU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0xbfffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | (0x40000000U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                                  ^ ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                                 >> 0x1eU)) << 0x1eU)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
        = ((0x7fffffffU & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp) 
           | ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_a)) 
                   ^ ((IData)(1U) + (~ vlSelf->top__DOT__dut__DOT__operand_b))) 
                  >> 0x1fU)) << 0x1fU));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt 
        = (1U & ((((((((((((((((((((((((((((((((vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                >> 0x1fU) 
                                               | ((vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp 
                                                   >> 0x1fU) 
                                                  & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                     >> 0x1eU))) 
                                              | ((IData)(
                                                         (0xc0000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                    >> 0x1dU))) 
                                             | ((IData)(
                                                        (0xe0000000U 
                                                         == 
                                                         (0xe0000000U 
                                                          & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                   >> 0x1cU))) 
                                            | ((IData)(
                                                       (0xf0000000U 
                                                        == 
                                                        (0xf0000000U 
                                                         & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                  >> 0x1bU))) 
                                           | ((IData)(
                                                      (0xf8000000U 
                                                       == 
                                                       (0xf8000000U 
                                                        & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                              & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                 >> 0x1aU))) 
                                          | ((IData)(
                                                     (0xfc000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                             & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                >> 0x19U))) 
                                         | ((IData)(
                                                    (0xfe000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                            & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                               >> 0x18U))) 
                                        | ((IData)(
                                                   (0xff000000U 
                                                    == 
                                                    (0xff000000U 
                                                     & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                              >> 0x17U))) 
                                       | ((IData)((0xff800000U 
                                                   == 
                                                   (0xff800000U 
                                                    & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                          & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                             >> 0x16U))) 
                                      | ((IData)((0xffc00000U 
                                                  == 
                                                  (0xffc00000U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                            >> 0x15U))) 
                                     | ((IData)((0xffe00000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                        & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                           >> 0x14U))) 
                                    | ((IData)((0xfff00000U 
                                                == 
                                                (0xfff00000U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                          >> 0x13U))) 
                                   | ((IData)((0xfff80000U 
                                               == (0xfff80000U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                      & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                         >> 0x12U))) 
                                  | ((IData)((0xfffc0000U 
                                              == (0xfffc0000U 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                        >> 0x11U))) 
                                 | ((IData)((0xfffe0000U 
                                             == (0xfffe0000U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                    & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                       >> 0x10U))) 
                                | ((IData)((0xffff0000U 
                                            == (0xffff0000U 
                                                & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                   & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                      >> 0xfU))) | 
                               ((IData)((0xffff8000U 
                                         == (0xffff8000U 
                                             & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                   >> 0xeU))) | ((IData)(
                                                         (0xffffc000U 
                                                          == 
                                                          (0xffffc000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xdU))) 
                             | ((IData)((0xffffe000U 
                                         == (0xffffe000U 
                                             & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                   >> 0xcU))) | ((IData)(
                                                         (0xfffff000U 
                                                          == 
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xbU))) 
                           | ((IData)((0xfffff800U 
                                       == (0xfffff800U 
                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                              & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                 >> 0xaU))) | ((IData)(
                                                       (0xfffffc00U 
                                                        == 
                                                        (0xfffffc00U 
                                                         & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                                  >> 9U))) 
                         | ((IData)((0xfffffe00U == 
                                     (0xfffffe00U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                            & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                               >> 8U))) | ((IData)(
                                                   (0xffffff00U 
                                                    == 
                                                    (0xffffff00U 
                                                     & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                              >> 7U))) 
                       | ((IData)((0xffffff80U == (0xffffff80U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                          & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                             >> 6U))) | ((IData)((0xffffffc0U 
                                                  == 
                                                  (0xffffffc0U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                            >> 5U))) 
                     | ((IData)((0xffffffe0U == (0xffffffe0U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                        & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                           >> 4U))) | ((IData)((0xfffffff0U 
                                                == 
                                                (0xfffffff0U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                          >> 3U))) 
                   | ((IData)((0xfffffff8U == (0xfffffff8U 
                                               & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                      & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                         >> 2U))) | ((IData)((0xfffffffcU 
                                              == (0xfffffffcU 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp 
                                        >> 1U))) | 
                 ((IData)((0xfffffffeU == (0xfffffffeU 
                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp))) 
                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u 
        = (IData)((0xffffffffU == vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp 
        = (1U & ((((((((((((((((((((((((((((((((vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                >> 0x1fU) 
                                               | ((vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
                                                   >> 0x1fU) 
                                                  & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                     >> 0x1eU))) 
                                              | ((IData)(
                                                         (0xc0000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                    >> 0x1dU))) 
                                             | ((IData)(
                                                        (0xe0000000U 
                                                         == 
                                                         (0xe0000000U 
                                                          & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                   >> 0x1cU))) 
                                            | ((IData)(
                                                       (0xf0000000U 
                                                        == 
                                                        (0xf0000000U 
                                                         & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                  >> 0x1bU))) 
                                           | ((IData)(
                                                      (0xf8000000U 
                                                       == 
                                                       (0xf8000000U 
                                                        & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                              & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                 >> 0x1aU))) 
                                          | ((IData)(
                                                     (0xfc000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                             & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                >> 0x19U))) 
                                         | ((IData)(
                                                    (0xfe000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                            & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                               >> 0x18U))) 
                                        | ((IData)(
                                                   (0xff000000U 
                                                    == 
                                                    (0xff000000U 
                                                     & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                              >> 0x17U))) 
                                       | ((IData)((0xff800000U 
                                                   == 
                                                   (0xff800000U 
                                                    & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                          & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                             >> 0x16U))) 
                                      | ((IData)((0xffc00000U 
                                                  == 
                                                  (0xffc00000U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                            >> 0x15U))) 
                                     | ((IData)((0xffe00000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                        & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                           >> 0x14U))) 
                                    | ((IData)((0xfff00000U 
                                                == 
                                                (0xfff00000U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                          >> 0x13U))) 
                                   | ((IData)((0xfff80000U 
                                               == (0xfff80000U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                      & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                         >> 0x12U))) 
                                  | ((IData)((0xfffc0000U 
                                              == (0xfffc0000U 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                        >> 0x11U))) 
                                 | ((IData)((0xfffe0000U 
                                             == (0xfffe0000U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                    & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                       >> 0x10U))) 
                                | ((IData)((0xffff0000U 
                                            == (0xffff0000U 
                                                & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                   & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                      >> 0xfU))) | 
                               ((IData)((0xffff8000U 
                                         == (0xffff8000U 
                                             & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                   >> 0xeU))) | ((IData)(
                                                         (0xffffc000U 
                                                          == 
                                                          (0xffffc000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xdU))) 
                             | ((IData)((0xffffe000U 
                                         == (0xffffe000U 
                                             & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                   >> 0xcU))) | ((IData)(
                                                         (0xfffff000U 
                                                          == 
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xbU))) 
                           | ((IData)((0xfffff800U 
                                       == (0xfffff800U 
                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                              & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                 >> 0xaU))) | ((IData)(
                                                       (0xfffffc00U 
                                                        == 
                                                        (0xfffffc00U 
                                                         & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                  >> 9U))) 
                         | ((IData)((0xfffffe00U == 
                                     (0xfffffe00U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                            & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                               >> 8U))) | ((IData)(
                                                   (0xffffff00U 
                                                    == 
                                                    (0xffffff00U 
                                                     & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                              >> 7U))) 
                       | ((IData)((0xffffff80U == (0xffffff80U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                          & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                             >> 6U))) | ((IData)((0xffffffc0U 
                                                  == 
                                                  (0xffffffc0U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                            >> 5U))) 
                     | ((IData)((0xffffffe0U == (0xffffffe0U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                        & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                           >> 4U))) | ((IData)((0xfffffff0U 
                                                == 
                                                (0xfffffff0U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                          >> 3U))) 
                   | ((IData)((0xfffffff8U == (0xfffffff8U 
                                               & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                      & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                         >> 2U))) | ((IData)((0xfffffffcU 
                                              == (0xfffffffcU 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                        >> 1U))) | 
                 ((IData)((0xfffffffeU == (0xfffffffeU 
                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp 
        = (IData)((0xffffffffU == vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c 
        = (1U & ((((((((((((((((((((((((((((((((vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                >> 0x1fU) 
                                               | ((vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
                                                   >> 0x1fU) 
                                                  & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                     >> 0x1eU))) 
                                              | ((IData)(
                                                         (0xc0000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                    >> 0x1dU))) 
                                             | ((IData)(
                                                        (0xe0000000U 
                                                         == 
                                                         (0xe0000000U 
                                                          & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                   >> 0x1cU))) 
                                            | ((IData)(
                                                       (0xf0000000U 
                                                        == 
                                                        (0xf0000000U 
                                                         & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                  >> 0x1bU))) 
                                           | ((IData)(
                                                      (0xf8000000U 
                                                       == 
                                                       (0xf8000000U 
                                                        & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                              & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                 >> 0x1aU))) 
                                          | ((IData)(
                                                     (0xfc000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                             & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                >> 0x19U))) 
                                         | ((IData)(
                                                    (0xfe000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                            & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                               >> 0x18U))) 
                                        | ((IData)(
                                                   (0xff000000U 
                                                    == 
                                                    (0xff000000U 
                                                     & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                              >> 0x17U))) 
                                       | ((IData)((0xff800000U 
                                                   == 
                                                   (0xff800000U 
                                                    & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                          & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                             >> 0x16U))) 
                                      | ((IData)((0xffc00000U 
                                                  == 
                                                  (0xffc00000U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                            >> 0x15U))) 
                                     | ((IData)((0xffe00000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                        & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                           >> 0x14U))) 
                                    | ((IData)((0xfff00000U 
                                                == 
                                                (0xfff00000U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                          >> 0x13U))) 
                                   | ((IData)((0xfff80000U 
                                               == (0xfff80000U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                      & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                         >> 0x12U))) 
                                  | ((IData)((0xfffc0000U 
                                              == (0xfffc0000U 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                        >> 0x11U))) 
                                 | ((IData)((0xfffe0000U 
                                             == (0xfffe0000U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                    & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                       >> 0x10U))) 
                                | ((IData)((0xffff0000U 
                                            == (0xffff0000U 
                                                & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                   & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                      >> 0xfU))) | 
                               ((IData)((0xffff8000U 
                                         == (0xffff8000U 
                                             & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                   >> 0xeU))) | ((IData)(
                                                         (0xffffc000U 
                                                          == 
                                                          (0xffffc000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                    >> 0xdU))) 
                             | ((IData)((0xffffe000U 
                                         == (0xffffe000U 
                                             & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                   >> 0xcU))) | ((IData)(
                                                         (0xfffff000U 
                                                          == 
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                    >> 0xbU))) 
                           | ((IData)((0xfffff800U 
                                       == (0xfffff800U 
                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                              & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                 >> 0xaU))) | ((IData)(
                                                       (0xfffffc00U 
                                                        == 
                                                        (0xfffffc00U 
                                                         & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                  >> 9U))) 
                         | ((IData)((0xfffffe00U == 
                                     (0xfffffe00U & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                            & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                               >> 8U))) | ((IData)(
                                                   (0xffffff00U 
                                                    == 
                                                    (0xffffff00U 
                                                     & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                              >> 7U))) 
                       | ((IData)((0xffffff80U == (0xffffff80U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                          & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                             >> 6U))) | ((IData)((0xffffffc0U 
                                                  == 
                                                  (0xffffffc0U 
                                                   & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                            >> 5U))) 
                     | ((IData)((0xffffffe0U == (0xffffffe0U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                        & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                           >> 4U))) | ((IData)((0xfffffff0U 
                                                == 
                                                (0xfffffff0U 
                                                 & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                          >> 3U))) 
                   | ((IData)((0xfffffff8U == (0xfffffff8U 
                                               & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                      & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                         >> 2U))) | ((IData)((0xfffffffcU 
                                              == (0xfffffffcU 
                                                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                        >> 1U))) | 
                 ((IData)((0xfffffffeU == (0xfffffffeU 
                                           & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                  & vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp)));
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c 
        = (IData)((0xffffffffU == vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u 
        = (IData)((0xffffffffU == vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt 
        = (1U & ((((((((((((((((((((((((((((((((vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                >> 0x1fU) 
                                               | ((vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp 
                                                   >> 0x1fU) 
                                                  & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                     >> 0x1eU))) 
                                              | ((IData)(
                                                         (0xc0000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                    >> 0x1dU))) 
                                             | ((IData)(
                                                        (0xe0000000U 
                                                         == 
                                                         (0xe0000000U 
                                                          & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                   >> 0x1cU))) 
                                            | ((IData)(
                                                       (0xf0000000U 
                                                        == 
                                                        (0xf0000000U 
                                                         & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                  >> 0x1bU))) 
                                           | ((IData)(
                                                      (0xf8000000U 
                                                       == 
                                                       (0xf8000000U 
                                                        & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                              & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                 >> 0x1aU))) 
                                          | ((IData)(
                                                     (0xfc000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                             & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                >> 0x19U))) 
                                         | ((IData)(
                                                    (0xfe000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                            & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                               >> 0x18U))) 
                                        | ((IData)(
                                                   (0xff000000U 
                                                    == 
                                                    (0xff000000U 
                                                     & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                              >> 0x17U))) 
                                       | ((IData)((0xff800000U 
                                                   == 
                                                   (0xff800000U 
                                                    & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                          & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                             >> 0x16U))) 
                                      | ((IData)((0xffc00000U 
                                                  == 
                                                  (0xffc00000U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                            >> 0x15U))) 
                                     | ((IData)((0xffe00000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                        & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                           >> 0x14U))) 
                                    | ((IData)((0xfff00000U 
                                                == 
                                                (0xfff00000U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                          >> 0x13U))) 
                                   | ((IData)((0xfff80000U 
                                               == (0xfff80000U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                      & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                         >> 0x12U))) 
                                  | ((IData)((0xfffc0000U 
                                              == (0xfffc0000U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                        >> 0x11U))) 
                                 | ((IData)((0xfffe0000U 
                                             == (0xfffe0000U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                    & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                       >> 0x10U))) 
                                | ((IData)((0xffff0000U 
                                            == (0xffff0000U 
                                                & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                   & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                      >> 0xfU))) | 
                               ((IData)((0xffff8000U 
                                         == (0xffff8000U 
                                             & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                   >> 0xeU))) | ((IData)(
                                                         (0xffffc000U 
                                                          == 
                                                          (0xffffc000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xdU))) 
                             | ((IData)((0xffffe000U 
                                         == (0xffffe000U 
                                             & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                   >> 0xcU))) | ((IData)(
                                                         (0xfffff000U 
                                                          == 
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xbU))) 
                           | ((IData)((0xfffff800U 
                                       == (0xfffff800U 
                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                              & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                 >> 0xaU))) | ((IData)(
                                                       (0xfffffc00U 
                                                        == 
                                                        (0xfffffc00U 
                                                         & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                                  >> 9U))) 
                         | ((IData)((0xfffffe00U == 
                                     (0xfffffe00U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                            & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                               >> 8U))) | ((IData)(
                                                   (0xffffff00U 
                                                    == 
                                                    (0xffffff00U 
                                                     & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                              >> 7U))) 
                       | ((IData)((0xffffff80U == (0xffffff80U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                          & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                             >> 6U))) | ((IData)((0xffffffc0U 
                                                  == 
                                                  (0xffffffc0U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                            >> 5U))) 
                     | ((IData)((0xffffffe0U == (0xffffffe0U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                        & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                           >> 4U))) | ((IData)((0xfffffff0U 
                                                == 
                                                (0xfffffff0U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                          >> 3U))) 
                   | ((IData)((0xfffffff8U == (0xfffffff8U 
                                               & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                      & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                         >> 2U))) | ((IData)((0xfffffffcU 
                                              == (0xfffffffcU 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp 
                                        >> 1U))) | 
                 ((IData)((0xfffffffeU == (0xfffffffeU 
                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp))) 
                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp 
        = (IData)((0xffffffffU == vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp 
        = (1U & ((((((((((((((((((((((((((((((((vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                >> 0x1fU) 
                                               | ((vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp 
                                                   >> 0x1fU) 
                                                  & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                     >> 0x1eU))) 
                                              | ((IData)(
                                                         (0xc0000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                    >> 0x1dU))) 
                                             | ((IData)(
                                                        (0xe0000000U 
                                                         == 
                                                         (0xe0000000U 
                                                          & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                   >> 0x1cU))) 
                                            | ((IData)(
                                                       (0xf0000000U 
                                                        == 
                                                        (0xf0000000U 
                                                         & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                  >> 0x1bU))) 
                                           | ((IData)(
                                                      (0xf8000000U 
                                                       == 
                                                       (0xf8000000U 
                                                        & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                              & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                 >> 0x1aU))) 
                                          | ((IData)(
                                                     (0xfc000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                             & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                >> 0x19U))) 
                                         | ((IData)(
                                                    (0xfe000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                            & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                               >> 0x18U))) 
                                        | ((IData)(
                                                   (0xff000000U 
                                                    == 
                                                    (0xff000000U 
                                                     & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                              >> 0x17U))) 
                                       | ((IData)((0xff800000U 
                                                   == 
                                                   (0xff800000U 
                                                    & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                          & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                             >> 0x16U))) 
                                      | ((IData)((0xffc00000U 
                                                  == 
                                                  (0xffc00000U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                            >> 0x15U))) 
                                     | ((IData)((0xffe00000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                        & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                           >> 0x14U))) 
                                    | ((IData)((0xfff00000U 
                                                == 
                                                (0xfff00000U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                          >> 0x13U))) 
                                   | ((IData)((0xfff80000U 
                                               == (0xfff80000U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                      & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                         >> 0x12U))) 
                                  | ((IData)((0xfffc0000U 
                                              == (0xfffc0000U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                        >> 0x11U))) 
                                 | ((IData)((0xfffe0000U 
                                             == (0xfffe0000U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                    & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                       >> 0x10U))) 
                                | ((IData)((0xffff0000U 
                                            == (0xffff0000U 
                                                & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                   & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                      >> 0xfU))) | 
                               ((IData)((0xffff8000U 
                                         == (0xffff8000U 
                                             & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                   >> 0xeU))) | ((IData)(
                                                         (0xffffc000U 
                                                          == 
                                                          (0xffffc000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xdU))) 
                             | ((IData)((0xffffe000U 
                                         == (0xffffe000U 
                                             & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                   >> 0xcU))) | ((IData)(
                                                         (0xfffff000U 
                                                          == 
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                    >> 0xbU))) 
                           | ((IData)((0xfffff800U 
                                       == (0xfffff800U 
                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                              & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                 >> 0xaU))) | ((IData)(
                                                       (0xfffffc00U 
                                                        == 
                                                        (0xfffffc00U 
                                                         & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                                  >> 9U))) 
                         | ((IData)((0xfffffe00U == 
                                     (0xfffffe00U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                            & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                               >> 8U))) | ((IData)(
                                                   (0xffffff00U 
                                                    == 
                                                    (0xffffff00U 
                                                     & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                              >> 7U))) 
                       | ((IData)((0xffffff80U == (0xffffff80U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                          & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                             >> 6U))) | ((IData)((0xffffffc0U 
                                                  == 
                                                  (0xffffffc0U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                            >> 5U))) 
                     | ((IData)((0xffffffe0U == (0xffffffe0U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                        & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                           >> 4U))) | ((IData)((0xfffffff0U 
                                                == 
                                                (0xfffffff0U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                          >> 3U))) 
                   | ((IData)((0xfffffff8U == (0xfffffff8U 
                                               & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                      & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                         >> 2U))) | ((IData)((0xfffffffcU 
                                              == (0xfffffffcU 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp 
                                        >> 1U))) | 
                 ((IData)((0xfffffffeU == (0xfffffffeU 
                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp))) 
                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp)));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c 
        = (IData)((0xffffffffU == vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp));
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c 
        = (1U & ((((((((((((((((((((((((((((((((vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                >> 0x1fU) 
                                               | ((vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp 
                                                   >> 0x1fU) 
                                                  & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                     >> 0x1eU))) 
                                              | ((IData)(
                                                         (0xc0000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                    >> 0x1dU))) 
                                             | ((IData)(
                                                        (0xe0000000U 
                                                         == 
                                                         (0xe0000000U 
                                                          & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                   >> 0x1cU))) 
                                            | ((IData)(
                                                       (0xf0000000U 
                                                        == 
                                                        (0xf0000000U 
                                                         & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                  >> 0x1bU))) 
                                           | ((IData)(
                                                      (0xf8000000U 
                                                       == 
                                                       (0xf8000000U 
                                                        & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                              & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                 >> 0x1aU))) 
                                          | ((IData)(
                                                     (0xfc000000U 
                                                      == 
                                                      (0xfc000000U 
                                                       & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                             & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                >> 0x19U))) 
                                         | ((IData)(
                                                    (0xfe000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                            & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                               >> 0x18U))) 
                                        | ((IData)(
                                                   (0xff000000U 
                                                    == 
                                                    (0xff000000U 
                                                     & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                              >> 0x17U))) 
                                       | ((IData)((0xff800000U 
                                                   == 
                                                   (0xff800000U 
                                                    & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                          & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                             >> 0x16U))) 
                                      | ((IData)((0xffc00000U 
                                                  == 
                                                  (0xffc00000U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                            >> 0x15U))) 
                                     | ((IData)((0xffe00000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                        & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                           >> 0x14U))) 
                                    | ((IData)((0xfff00000U 
                                                == 
                                                (0xfff00000U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                          >> 0x13U))) 
                                   | ((IData)((0xfff80000U 
                                               == (0xfff80000U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                      & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                         >> 0x12U))) 
                                  | ((IData)((0xfffc0000U 
                                              == (0xfffc0000U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                        >> 0x11U))) 
                                 | ((IData)((0xfffe0000U 
                                             == (0xfffe0000U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                    & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                       >> 0x10U))) 
                                | ((IData)((0xffff0000U 
                                            == (0xffff0000U 
                                                & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                   & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                      >> 0xfU))) | 
                               ((IData)((0xffff8000U 
                                         == (0xffff8000U 
                                             & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                   >> 0xeU))) | ((IData)(
                                                         (0xffffc000U 
                                                          == 
                                                          (0xffffc000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                    >> 0xdU))) 
                             | ((IData)((0xffffe000U 
                                         == (0xffffe000U 
                                             & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                   >> 0xcU))) | ((IData)(
                                                         (0xfffff000U 
                                                          == 
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                                 & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                    >> 0xbU))) 
                           | ((IData)((0xfffff800U 
                                       == (0xfffff800U 
                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                              & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                 >> 0xaU))) | ((IData)(
                                                       (0xfffffc00U 
                                                        == 
                                                        (0xfffffc00U 
                                                         & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                               & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                                  >> 9U))) 
                         | ((IData)((0xfffffe00U == 
                                     (0xfffffe00U & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                            & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                               >> 8U))) | ((IData)(
                                                   (0xffffff00U 
                                                    == 
                                                    (0xffffff00U 
                                                     & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                           & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                              >> 7U))) 
                       | ((IData)((0xffffff80U == (0xffffff80U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                          & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                             >> 6U))) | ((IData)((0xffffffc0U 
                                                  == 
                                                  (0xffffffc0U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                         & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                            >> 5U))) 
                     | ((IData)((0xffffffe0U == (0xffffffe0U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                        & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                           >> 4U))) | ((IData)((0xfffffff0U 
                                                == 
                                                (0xfffffff0U 
                                                 & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                       & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                          >> 3U))) 
                   | ((IData)((0xfffffff8U == (0xfffffff8U 
                                               & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                      & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                         >> 2U))) | ((IData)((0xfffffffcU 
                                              == (0xfffffffcU 
                                                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                                     & (vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp 
                                        >> 1U))) | 
                 ((IData)((0xfffffffeU == (0xfffffffeU 
                                           & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp))) 
                  & vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp)));
    if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                   >> 0x1fU)) & (~ (vlSelf->top__DOT__dut__DOT__rs2_data 
                                    >> 0x1fU))))) {
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt 
            = (1U & (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp));
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s 
            = vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp;
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s 
            = (1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp) 
                        | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp))));
    } else if (((vlSelf->top__DOT__dut__DOT__rs1_data 
                 & vlSelf->top__DOT__dut__DOT__rs2_data) 
                >> 0x1fU)) {
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt 
            = (1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c)));
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s 
            = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c) 
                     | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c)));
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s 
            = vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c;
    } else {
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt 
            = (1U & ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                         >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                       >> 0x1fU)));
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s 
            = (1U & (~ ((~ (vlSelf->top__DOT__dut__DOT__rs1_data 
                            >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__rs2_data 
                                          >> 0x1fU))));
        vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s = 0U;
    }
    if ((1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                   >> 0x1fU)) & (~ (vlSelf->top__DOT__dut__DOT__operand_b 
                                    >> 0x1fU))))) {
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s 
            = vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp;
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt 
            = (1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp));
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s 
            = (1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp) 
                        | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp))));
    } else if (((vlSelf->top__DOT__dut__DOT__operand_a 
                 & vlSelf->top__DOT__dut__DOT__operand_b) 
                >> 0x1fU)) {
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s 
            = vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c;
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt 
            = (1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c)));
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s 
            = (1U & ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c) 
                     | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c)));
    } else {
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s = 0U;
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt 
            = (1U & ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                         >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                       >> 0x1fU)));
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s 
            = (1U & (~ ((~ (vlSelf->top__DOT__dut__DOT__operand_a 
                            >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__operand_b 
                                          >> 0x1fU))));
    }
    if (vlSelf->top__DOT__dut__DOT__branch_u) {
        vlSelf->top__DOT__dut__DOT__br_eq = vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u;
        vlSelf->top__DOT__dut__DOT__br_lt = (1U & (~ 
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u) 
                                                    | (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt))));
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt 
            = (1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u) 
                        | (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt))));
    } else {
        vlSelf->top__DOT__dut__DOT__br_eq = vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s;
        vlSelf->top__DOT__dut__DOT__br_lt = (1U & (IData)(vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s));
        vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt 
            = (1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s));
    }
    vlSelf->top__DOT__dut__DOT__PC_sel = (1U & (IData)(
                                                       ((0x60U 
                                                         == 
                                                         (0x70U 
                                                          & vlSelf->top__DOT__dut__DOT__instr)) 
                                                        & ((8U 
                                                            & vlSelf->top__DOT__dut__DOT__instr)
                                                            ? 
                                                           (vlSelf->top__DOT__dut__DOT__instr 
                                                            >> 2U)
                                                            : 
                                                           ((vlSelf->top__DOT__dut__DOT__instr 
                                                             >> 2U) 
                                                            | ((0x4000U 
                                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                                ? 
                                                               ((0x2000U 
                                                                 & vlSelf->top__DOT__dut__DOT__instr)
                                                                 ? 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__dut__DOT__instr)
                                                                  ? 
                                                                 (~ (IData)(vlSelf->top__DOT__dut__DOT__br_lt))
                                                                  : (IData)(vlSelf->top__DOT__dut__DOT__br_lt))
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlSelf->top__DOT__dut__DOT__instr)
                                                                  ? 
                                                                 (~ (IData)(vlSelf->top__DOT__dut__DOT__br_lt))
                                                                  : (IData)(vlSelf->top__DOT__dut__DOT__br_lt)))
                                                                : 
                                                               ((~ 
                                                                 (vlSelf->top__DOT__dut__DOT__instr 
                                                                  >> 0xdU)) 
                                                                & ((0x1000U 
                                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                                    ? 
                                                                   (~ (IData)(vlSelf->top__DOT__dut__DOT__br_eq))
                                                                    : (IData)(vlSelf->top__DOT__dut__DOT__br_eq)))))))));
    vlSelf->top__DOT__dut__DOT__alu_data = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                             ? ((4U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 0U
                                                   : vlSelf->top__DOT__dut__DOT__operand_b)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt)
                                                    ? 1U
                                                    : 0U))))
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? (IData)(
                                                             ((vlSelf->top__DOT__dut__DOT__operand_a 
                                                               >> 0x1fU)
                                                               ? 
                                                              ((0xffffffff00000000ULL 
                                                                | (QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a))) 
                                                               >> 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT__dut__DOT__operand_b))
                                                               : 
                                                              ((QData)((IData)(vlSelf->top__DOT__dut__DOT__operand_a)) 
                                                               >> 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT__dut__DOT__operand_b))))
                                                   : 
                                                  ((0x1fU 
                                                    >= 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__operand_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__dut__DOT__operand_b))
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((0x1fU 
                                                    >= 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__dut__DOT__operand_b))
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__operand_a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__dut__DOT__operand_b))
                                                    : 0U)
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   | vlSelf->top__DOT__dut__DOT__operand_b)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   & vlSelf->top__DOT__dut__DOT__operand_b)
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__operand_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (vlSelf->top__DOT__dut__DOT__operand_a 
                                                    + 
                                                    (~ vlSelf->top__DOT__dut__DOT__operand_b)))
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   + vlSelf->top__DOT__dut__DOT__operand_b)))));
    vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt 
        = ((IData)(vlSelf->top__DOT__dut__DOT__PC_sel)
            ? vlSelf->top__DOT__dut__DOT__alu_data : 
           ((IData)(4U) + vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc));
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask 
        = ((0U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                         >> 0xcU))) ? ((0U == (3U & vlSelf->top__DOT__dut__DOT__alu_data))
                                        ? 1U : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->top__DOT__dut__DOT__alu_data))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data))
                                                  ? 4U
                                                  : 8U)))
            : ((1U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                             >> 0xcU))) ? ((0U == (3U 
                                                   & vlSelf->top__DOT__dut__DOT__alu_data))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & vlSelf->top__DOT__dut__DOT__alu_data))
                                             ? 3U : 0xcU))
                : ((2U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU))) ? 0xfU : (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96ff575f__0))));
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 = 0U;
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 = 0U;
    if (vlSelf->top__DOT__dut__DOT__dmem_wr) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 = 0U;
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 = 0U;
    } else if ((0U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                             >> 0xcU)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                      [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                  >> 2U))]));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                          >> 2U))] 
                               >> 8U)));
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                               [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                           >> 2U))] 
                               >> 8U)));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                               [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                           >> 2U))] 
                               >> 0x10U)));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                 >> 2U))] >> 0x18U));
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                      [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                  >> 2U))] >> 0x18U));
        }
    } else if ((1U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                             >> 0xcU)))) {
        if ((3U == (3U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                      [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                  >> 2U))]));
        }
        if ((0xcU == (0xcU & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                 >> 2U))] >> 0x10U));
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
                      [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                                  >> 2U))] >> 0x10U));
        }
    } else {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
            = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
            [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                       >> 2U))];
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
            = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
            [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                        >> 2U))];
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 = 0U;
    if (vlSelf->top__DOT__dut__DOT__dmem_wr) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 = 0U;
    } else if ((0U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                             >> 0xcU)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                               >> 8U)));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                               >> 0x10U)));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                      >> 0x18U));
        }
    } else if ((1U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                             >> 0xcU)))) {
        if ((3U == (3U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri));
        }
        if ((0xcU == (0xcU & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                      >> 0x10U));
        }
    } else {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
            = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri;
    }
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data 
        = ((0x800U & vlSelf->top__DOT__dut__DOT__alu_data)
            ? ((0x400U & vlSelf->top__DOT__dut__DOT__alu_data)
                ? vlSelf->top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0
                : ((0x200U & vlSelf->top__DOT__dut__DOT__alu_data)
                    ? vlSelf->top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0
                    : ((0x100U & vlSelf->top__DOT__dut__DOT__alu_data)
                        ? vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3
                        : vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2)))
            : vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    Vtop___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    Vtop___024root___combo__TOP__2(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
