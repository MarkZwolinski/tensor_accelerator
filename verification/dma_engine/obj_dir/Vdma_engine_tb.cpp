// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdma_engine_tb__pch.h"

//============================================================
// Constructors

Vdma_engine_tb::Vdma_engine_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdma_engine_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdma_engine_tb::Vdma_engine_tb(const char* _vcname__)
    : Vdma_engine_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdma_engine_tb::~Vdma_engine_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdma_engine_tb___024root___eval_debug_assertions(Vdma_engine_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdma_engine_tb___024root___eval_static(Vdma_engine_tb___024root* vlSelf);
void Vdma_engine_tb___024root___eval_initial(Vdma_engine_tb___024root* vlSelf);
void Vdma_engine_tb___024root___eval_settle(Vdma_engine_tb___024root* vlSelf);
void Vdma_engine_tb___024root___eval(Vdma_engine_tb___024root* vlSelf);

void Vdma_engine_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdma_engine_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdma_engine_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdma_engine_tb___024root___eval_static(&(vlSymsp->TOP));
        Vdma_engine_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vdma_engine_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdma_engine_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdma_engine_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vdma_engine_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdma_engine_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdma_engine_tb___024root___eval_final(Vdma_engine_tb___024root* vlSelf);

VL_ATTR_COLD void Vdma_engine_tb::final() {
    contextp()->executingFinal(true);
    Vdma_engine_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdma_engine_tb::hierName() const { return vlSymsp->name(); }
const char* Vdma_engine_tb::modelName() const { return "Vdma_engine_tb"; }
unsigned Vdma_engine_tb::threads() const { return 1; }
void Vdma_engine_tb::prepareClone() const { contextp()->prepareClone(); }
void Vdma_engine_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
