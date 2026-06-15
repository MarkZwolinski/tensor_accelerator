// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_pe_tb.h for the primary calling header

#include "Vmac_pe_tb__pch.h"

void Vmac_pe_tb___024root___ctor_var_reset(Vmac_pe_tb___024root* vlSelf);

Vmac_pe_tb___024root::Vmac_pe_tb___024root(Vmac_pe_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmac_pe_tb___024root___ctor_var_reset(this);
}

void Vmac_pe_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmac_pe_tb___024root::~Vmac_pe_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
