// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhaar_dwt.h for the primary calling header

#include "Vhaar_dwt__pch.h"
#include "Vhaar_dwt___024root.h"

VlCoroutine Vhaar_dwt___024root___eval_initial__TOP__Vtiming__0(Vhaar_dwt___024root* vlSelf);
VlCoroutine Vhaar_dwt___024root___eval_initial__TOP__Vtiming__1(Vhaar_dwt___024root* vlSelf);
VlCoroutine Vhaar_dwt___024root___eval_initial__TOP__Vtiming__2(Vhaar_dwt___024root* vlSelf);

void Vhaar_dwt___024root___eval_initial(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhaar_dwt___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vhaar_dwt___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vhaar_dwt___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__clk__0 
        = vlSelfRef.haar_dwt_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__rst__0 
        = vlSelfRef.haar_dwt_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__done__0 
        = vlSelfRef.haar_dwt_tb__DOT__done;
}

VL_INLINE_OPT VlCoroutine Vhaar_dwt___024root___eval_initial__TOP__Vtiming__0(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.haar_dwt_tb__DOT__clk = 0U;
    vlSelfRef.haar_dwt_tb__DOT__rst = 1U;
    vlSelfRef.haar_dwt_tb__DOT__din = 0U;
    vlSelfRef.haar_dwt_tb__DOT__start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "haar_dwt_tb.v", 
                                         36);
    vlSelfRef.haar_dwt_tb__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vhaar_dwt___024root___eval_initial__TOP__Vtiming__1(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hdcd62a10__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge haar_dwt_tb.rst)", 
                                                         "haar_dwt_tb.v", 
                                                         42);
    vlSelfRef.haar_dwt_tb__DOT__din = 0U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__din = 1U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__din = 2U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__din = 3U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__din = 4U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__din = 5U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__din = 6U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__din = 7U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         45);
    vlSelfRef.haar_dwt_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_hb9af1690__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.clk)", 
                                                         "haar_dwt_tb.v", 
                                                         48);
    vlSelfRef.haar_dwt_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h4a059363__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge haar_dwt_tb.done)", 
                                                         "haar_dwt_tb.v", 
                                                         50);
    VL_WRITEF_NX("Approximation coefficients: %3#\nDetail coefficients: %3#\n",0,
                 8,vlSelfRef.haar_dwt_tb__DOT__dout_a,
                 8,(IData)(vlSelfRef.haar_dwt_tb__DOT__dout_d));
    VL_FINISH_MT("haar_dwt_tb.v", 53, "");
}

VL_INLINE_OPT VlCoroutine Vhaar_dwt___024root___eval_initial__TOP__Vtiming__2(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "haar_dwt_tb.v", 
                                             39);
        vlSelfRef.haar_dwt_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.haar_dwt_tb__DOT__clk)));
    }
}

void Vhaar_dwt___024root___eval_act(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vhaar_dwt___024root___nba_sequent__TOP__0(Vhaar_dwt___024root* vlSelf);

void Vhaar_dwt___024root___eval_nba(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhaar_dwt___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhaar_dwt___024root___nba_sequent__TOP__0(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v8;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v8 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v9;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v9 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v10;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v10 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v11;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v11 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v12;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v12 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v13;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v13 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v14;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v14 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v15;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v15 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v0;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v0 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v1;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v1 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v2;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v2 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v3;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v3 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v16;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v16 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v17;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v17 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v18;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v18 = 0;
    CData/*7:0*/ __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v19;
    __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v19 = 0;
    CData/*0:0*/ __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v0;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v0 = 0;
    CData/*0:0*/ __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v1;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v1 = 0;
    CData/*0:0*/ __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v8;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v8 = 0;
    CData/*0:0*/ __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v1;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v1 = 0;
    CData/*0:0*/ __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v2;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v2 = 0;
    CData/*0:0*/ __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v3;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v3 = 0;
    CData/*0:0*/ __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v16;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v16 = 0;
    // Body
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v1 = 0U;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v2 = 0U;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v3 = 0U;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v0 = 0U;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v1 = 0U;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v16 = 0U;
    __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v8 = 0U;
    vlSelfRef.haar_dwt_tb__DOT__done = ((1U & (~ (IData)(vlSelfRef.haar_dwt_tb__DOT__rst))) 
                                        && (IData)(vlSelfRef.haar_dwt_tb__DOT__start));
    if (vlSelfRef.haar_dwt_tb__DOT__rst) {
        __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v0 = 1U;
        vlSelfRef.haar_dwt_tb__DOT__dout_a = 0U;
        vlSelfRef.haar_dwt_tb__DOT__dout_d = 0U;
        __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v1 = 1U;
    } else if (vlSelfRef.haar_dwt_tb__DOT__start) {
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v8 
            = vlSelfRef.haar_dwt_tb__DOT__din;
        __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v8 = 1U;
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v9 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [0U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v10 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [1U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v11 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [2U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v12 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [3U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v13 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [4U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v14 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [5U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v15 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [6U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v0 
            = (0xffU & VL_SHIFTR_III(8,8,32, (0xffU 
                                              & (vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [0U] 
                                                 + 
                                                 vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [1U])), 1U));
        vlSelfRef.haar_dwt_tb__DOT__dout_d = ((0xfeU 
                                               & (IData)(vlSelfRef.haar_dwt_tb__DOT__dout_d)) 
                                              | (1U 
                                                 & ((vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                     [0U] 
                                                     - 
                                                     vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                     [1U]) 
                                                    >> 1U)));
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v1 
            = (0xffU & VL_SHIFTR_III(8,8,32, (0xffU 
                                              & (vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [2U] 
                                                 + 
                                                 vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [3U])), 1U));
        __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v1 = 1U;
        vlSelfRef.haar_dwt_tb__DOT__dout_d = ((0xfdU 
                                               & (IData)(vlSelfRef.haar_dwt_tb__DOT__dout_d)) 
                                              | (2U 
                                                 & (vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                    [2U] 
                                                    - 
                                                    vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                    [3U])));
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v2 
            = (0xffU & VL_SHIFTR_III(8,8,32, (0xffU 
                                              & (vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [4U] 
                                                 + 
                                                 vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [5U])), 1U));
        __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v2 = 1U;
        vlSelfRef.haar_dwt_tb__DOT__dout_d = ((0xfbU 
                                               & (IData)(vlSelfRef.haar_dwt_tb__DOT__dout_d)) 
                                              | (4U 
                                                 & ((vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                     [4U] 
                                                     - 
                                                     vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                     [5U]) 
                                                    << 1U)));
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v3 
            = (0xffU & VL_SHIFTR_III(8,8,32, (0xffU 
                                              & (vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [6U] 
                                                 + 
                                                 vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                 [7U])), 1U));
        __VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v3 = 1U;
        vlSelfRef.haar_dwt_tb__DOT__dout_d = ((0xf7U 
                                               & (IData)(vlSelfRef.haar_dwt_tb__DOT__dout_d)) 
                                              | (8U 
                                                 & ((vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                     [6U] 
                                                     - 
                                                     vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
                                                     [7U]) 
                                                    << 2U)));
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v16 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp
            [0U];
        __VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v16 = 1U;
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v17 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp
            [1U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v18 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp
            [2U];
        __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v19 
            = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp
            [3U];
        vlSelfRef.haar_dwt_tb__DOT__dout_a = vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal
            [0U];
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v8) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp[0U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v0;
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v1) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp[1U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v1;
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v2) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp[2U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v2;
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__temp__v3) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__temp[3U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__temp__v3;
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v0) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[0U] = 0U;
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v1) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[1U] = 0U;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[2U] = 0U;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[3U] = 0U;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[4U] = 0U;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[5U] = 0U;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[6U] = 0U;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[7U] = 0U;
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v8) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[0U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v8;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[1U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v9;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[2U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v10;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[3U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v11;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[4U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v12;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[5U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v13;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[6U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v14;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[7U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v15;
    }
    if (__VdlySet__haar_dwt_tb__DOT__DUT__DOT__signal__v16) {
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[0U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v16;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[1U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v17;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[2U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v18;
        vlSelfRef.haar_dwt_tb__DOT__DUT__DOT__signal[3U] 
            = __VdlyVal__haar_dwt_tb__DOT__DUT__DOT__signal__v19;
    }
}

void Vhaar_dwt___024root___timing_commit(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hdcd62a10__0.commit(
                                                   "@(negedge haar_dwt_tb.rst)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb9af1690__0.commit(
                                                   "@(posedge haar_dwt_tb.clk)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h4a059363__0.commit(
                                                   "@(posedge haar_dwt_tb.done)");
    }
}

void Vhaar_dwt___024root___timing_resume(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hdcd62a10__0.resume(
                                                   "@(negedge haar_dwt_tb.rst)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb9af1690__0.resume(
                                                   "@(posedge haar_dwt_tb.clk)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h4a059363__0.resume(
                                                   "@(posedge haar_dwt_tb.done)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vhaar_dwt___024root___eval_triggers__act(Vhaar_dwt___024root* vlSelf);

bool Vhaar_dwt___024root___eval_phase__act(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhaar_dwt___024root___eval_triggers__act(vlSelf);
    Vhaar_dwt___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhaar_dwt___024root___timing_resume(vlSelf);
        Vhaar_dwt___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhaar_dwt___024root___eval_phase__nba(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhaar_dwt___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhaar_dwt___024root___dump_triggers__nba(Vhaar_dwt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhaar_dwt___024root___dump_triggers__act(Vhaar_dwt___024root* vlSelf);
#endif  // VL_DEBUG

void Vhaar_dwt___024root___eval(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vhaar_dwt___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("haar_dwt_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vhaar_dwt___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("haar_dwt_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhaar_dwt___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhaar_dwt___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhaar_dwt___024root___eval_debug_assertions(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
