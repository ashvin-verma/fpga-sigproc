// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhaar_dwt.h for the primary calling header

#include "Vhaar_dwt__pch.h"
#include "Vhaar_dwt___024root.h"

VL_ATTR_COLD void Vhaar_dwt___024root___eval_static(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhaar_dwt___024root___eval_final(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhaar_dwt___024root___eval_settle(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhaar_dwt___024root___dump_triggers__act(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge haar_dwt_tb.clk or posedge haar_dwt_tb.rst)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge haar_dwt_tb.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge haar_dwt_tb.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge haar_dwt_tb.done)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhaar_dwt___024root___dump_triggers__nba(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge haar_dwt_tb.clk or posedge haar_dwt_tb.rst)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge haar_dwt_tb.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge haar_dwt_tb.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge haar_dwt_tb.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhaar_dwt___024root___ctor_var_reset(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->haar_dwt_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->haar_dwt_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->haar_dwt_tb__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->haar_dwt_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->haar_dwt_tb__DOT__dout_a = VL_RAND_RESET_I(8);
    vlSelf->haar_dwt_tb__DOT__dout_d = VL_RAND_RESET_I(8);
    vlSelf->haar_dwt_tb__DOT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->haar_dwt_tb__DOT__DUT__DOT__signal[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->haar_dwt_tb__DOT__DUT__DOT__temp[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__done__0 = VL_RAND_RESET_I(1);
}
