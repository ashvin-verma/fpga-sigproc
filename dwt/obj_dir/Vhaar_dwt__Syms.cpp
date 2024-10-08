// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vhaar_dwt__pch.h"
#include "Vhaar_dwt.h"
#include "Vhaar_dwt___024root.h"

// FUNCTIONS
Vhaar_dwt__Syms::~Vhaar_dwt__Syms()
{
}

Vhaar_dwt__Syms::Vhaar_dwt__Syms(VerilatedContext* contextp, const char* namep, Vhaar_dwt* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(57);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
