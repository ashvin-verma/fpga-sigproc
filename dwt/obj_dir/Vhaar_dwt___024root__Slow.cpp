// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhaar_dwt.h for the primary calling header

#include "Vhaar_dwt__pch.h"
#include "Vhaar_dwt__Syms.h"
#include "Vhaar_dwt___024root.h"

void Vhaar_dwt___024root___ctor_var_reset(Vhaar_dwt___024root* vlSelf);

Vhaar_dwt___024root::Vhaar_dwt___024root(Vhaar_dwt__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhaar_dwt___024root___ctor_var_reset(this);
}

void Vhaar_dwt___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhaar_dwt___024root::~Vhaar_dwt___024root() {
}
