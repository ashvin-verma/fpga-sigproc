// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhaar_dwt__pch.h"

//============================================================
// Constructors

Vhaar_dwt::Vhaar_dwt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhaar_dwt__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhaar_dwt::Vhaar_dwt(const char* _vcname__)
    : Vhaar_dwt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhaar_dwt::~Vhaar_dwt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhaar_dwt___024root___eval_debug_assertions(Vhaar_dwt___024root* vlSelf);
#endif  // VL_DEBUG
void Vhaar_dwt___024root___eval_static(Vhaar_dwt___024root* vlSelf);
void Vhaar_dwt___024root___eval_initial(Vhaar_dwt___024root* vlSelf);
void Vhaar_dwt___024root___eval_settle(Vhaar_dwt___024root* vlSelf);
void Vhaar_dwt___024root___eval(Vhaar_dwt___024root* vlSelf);

void Vhaar_dwt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhaar_dwt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhaar_dwt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhaar_dwt___024root___eval_static(&(vlSymsp->TOP));
        Vhaar_dwt___024root___eval_initial(&(vlSymsp->TOP));
        Vhaar_dwt___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhaar_dwt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhaar_dwt::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhaar_dwt::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhaar_dwt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhaar_dwt___024root___eval_final(Vhaar_dwt___024root* vlSelf);

VL_ATTR_COLD void Vhaar_dwt::final() {
    Vhaar_dwt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhaar_dwt::hierName() const { return vlSymsp->name(); }
const char* Vhaar_dwt::modelName() const { return "Vhaar_dwt"; }
unsigned Vhaar_dwt::threads() const { return 1; }
void Vhaar_dwt::prepareClone() const { contextp()->prepareClone(); }
void Vhaar_dwt::atClone() const {
    contextp()->threadPoolpOnClone();
}
