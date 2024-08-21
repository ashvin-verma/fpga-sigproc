// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhaar_dwt.h for the primary calling header

#ifndef VERILATED_VHAAR_DWT___024ROOT_H_
#define VERILATED_VHAAR_DWT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhaar_dwt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhaar_dwt___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ haar_dwt_tb__DOT__clk;
    CData/*0:0*/ haar_dwt_tb__DOT__rst;
    CData/*0:0*/ haar_dwt_tb__DOT__done;
    CData/*7:0*/ haar_dwt_tb__DOT__din;
    CData/*0:0*/ haar_dwt_tb__DOT__start;
    CData/*7:0*/ haar_dwt_tb__DOT__dout_a;
    CData/*7:0*/ haar_dwt_tb__DOT__dout_d;
    CData/*0:0*/ __Vtrigprevexpr___TOP__haar_dwt_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__haar_dwt_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__haar_dwt_tb__DOT__done__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> haar_dwt_tb__DOT__DUT__DOT__signal;
    VlUnpacked<CData/*7:0*/, 4> haar_dwt_tb__DOT__DUT__DOT__temp;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdcd62a10__0;
    VlTriggerScheduler __VtrigSched_hb9af1690__0;
    VlTriggerScheduler __VtrigSched_h4a059363__0;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhaar_dwt__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhaar_dwt___024root(Vhaar_dwt__Syms* symsp, const char* v__name);
    ~Vhaar_dwt___024root();
    VL_UNCOPYABLE(Vhaar_dwt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
