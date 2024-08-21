// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhaar_dwt.h for the primary calling header

#include "Vhaar_dwt__pch.h"
#include "Vhaar_dwt__Syms.h"
#include "Vhaar_dwt___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhaar_dwt___024root___dump_triggers__act(Vhaar_dwt___024root* vlSelf);
#endif  // VL_DEBUG

void Vhaar_dwt___024root___eval_triggers__act(Vhaar_dwt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhaar_dwt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhaar_dwt___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.haar_dwt_tb__DOT__clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__clk__0))) 
                                       | ((IData)(vlSelfRef.haar_dwt_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__rst__0)))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.haar_dwt_tb__DOT__rst)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__rst__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.haar_dwt_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.haar_dwt_tb__DOT__done) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__done__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__clk__0 
        = vlSelfRef.haar_dwt_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__rst__0 
        = vlSelfRef.haar_dwt_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__haar_dwt_tb__DOT__done__0 
        = vlSelfRef.haar_dwt_tb__DOT__done;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhaar_dwt___024root___dump_triggers__act(vlSelf);
    }
#endif
}
