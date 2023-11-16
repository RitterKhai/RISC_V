// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hbd784fe6__0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    __Vilp = 0U;
    while ((__Vilp <= 0x1ffU)) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96ff575f__0 
        = (0xfU & VL_RAND_RESET_I(4));
    __Vtemp_hbd784fe6__0[0U] = 0x2e73696dU;
    __Vtemp_hbd784fe6__0[1U] = 0x64617461U;
    __Vtemp_hbd784fe6__0[2U] = 0x6d656d2eU;
    __Vtemp_hbd784fe6__0[3U] = 0x696e7374U;
    __Vtemp_hbd784fe6__0[4U] = 0x6d656d2fU;
    __Vtemp_hbd784fe6__0[5U] = 0x2e2fU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hbd784fe6__0)
                 ,  &(vlSelf->top__DOT__dut__DOT__imem_block__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
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
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
        = vlSelf->io_sw_i;
    vlSelf->pc_debug_o = vlSelf->top__DOT__dut__DOT__pc;
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
    vlSelf->top__DOT__dut__DOT__instr = vlSelf->top__DOT__dut__DOT__imem_block__DOT__mem
        [(0xfffU & (vlSelf->top__DOT__dut__DOT__pc 
                    >> 2U))];
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
    vlSelf->top__DOT__dut__DOT__dmem_wr = (IData)((0x20U 
                                                   == 
                                                   (0x7cU 
                                                    & vlSelf->top__DOT__dut__DOT__instr)));
    vlSelf->top__DOT__dut__DOT__rs2_data = vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                   >> 0x14U))];
    vlSelf->top__DOT__dut__DOT__rs1_data = vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                   >> 0xfU))];
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
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__start 
        = ((vlSelf->io_sw_i == vlSelf->top__DOT__dut__DOT__rs1_data)
            ? 1U : 0U);
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
    vlSelf->top__DOT__dut__DOT__operand_a = ((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel)
                                              ? vlSelf->top__DOT__dut__DOT__pc
                                              : vlSelf->top__DOT__dut__DOT__rs1_data);
    vlSelf->top__DOT__dut__DOT__operand_b = ((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel)
                                              ? vlSelf->top__DOT__dut__DOT__imm
                                              : vlSelf->top__DOT__dut__DOT__rs2_data);
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
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u 
        = (IData)((0xffffffffU == vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp));
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
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
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 = 0U;
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 = 0U;
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 = 0U;
    if (vlSelf->top__DOT__dut__DOT__dmem_wr) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 = 0U;
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 = 0U;
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 = 0U;
    } else if ((0U == (3U & (vlSelf->top__DOT__dut__DOT__instr 
                             >> 0xcU)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri));
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
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                               >> 8U)));
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
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                               >> 0x10U)));
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
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                      >> 0x18U));
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
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffffU & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri));
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
            vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3) 
                   | (vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri 
                      >> 0x10U));
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
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 
            = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri;
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 
            = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri
            [(0x3fU & (vlSelf->top__DOT__dut__DOT__alu_data 
                       >> 2U))];
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 
            = vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory
            [(0x1ffU & (vlSelf->top__DOT__dut__DOT__alu_data 
                        >> 2U))];
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->pc_debug_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__imm_gen_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__reg_wr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__PC_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__branch_u = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__dmem_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__digit_sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__temp9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__temp0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__busy9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__busy0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__valid0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc_nxt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__PC_block__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__imem_block__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__regfile_block__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_u = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__equal_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__lessthan_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__eq_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__gt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_0__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__eq_temp_2c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__gt_temp_2c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__eq_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__gt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_0__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__eq_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__gt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_compare__DOT__compare_1__DOT__compare_1__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_u = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__equal_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__lessthan_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__eq_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__gt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_0__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__eq_temp_2c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__gt_temp_2c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__eq_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__gt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_0__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__eq_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__gt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_block__DOT__compare_u_s__DOT__compare_1__DOT__compare_1__DOT__lt_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d0__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d1__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d2__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d3__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d4__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d5__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d6__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d7__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d8__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__quo_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__acc_next = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT__i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT____Vconcswap_1_h6f06e9a5__0 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__hex_to_dec__DOT__d9__DOT____Vconcswap_1_h9d46bfda__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96ff575f__0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__input_peri = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__lsu_block__DOT__output_peri[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__dataout_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__temp_ld_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__lsu_block__DOT__mask = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
