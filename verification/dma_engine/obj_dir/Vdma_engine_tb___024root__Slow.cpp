// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma_engine_tb.h for the primary calling header

#include "Vdma_engine_tb__pch.h"

void Vdma_engine_tb___024root___ctor_var_reset(Vdma_engine_tb___024root* vlSelf);

Vdma_engine_tb___024root::Vdma_engine_tb___024root(Vdma_engine_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdma_engine_tb___024root___ctor_var_reset(this);
}

void Vdma_engine_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdma_engine_tb___024root::~Vdma_engine_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
