// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHAAR_DWT__SYMS_H_
#define VERILATED_VHAAR_DWT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhaar_dwt.h"

// INCLUDE MODULE CLASSES
#include "Vhaar_dwt___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vhaar_dwt__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhaar_dwt* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhaar_dwt___024root            TOP;

    // CONSTRUCTORS
    Vhaar_dwt__Syms(VerilatedContext* contextp, const char* namep, Vhaar_dwt* modelp);
    ~Vhaar_dwt__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
