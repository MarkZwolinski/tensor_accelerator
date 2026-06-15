// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAC_PE_TB__SYMS_H_
#define VERILATED_VMAC_PE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmac_pe_tb.h"

// INCLUDE MODULE CLASSES
#include "Vmac_pe_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vmac_pe_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmac_pe_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmac_pe_tb___024root           TOP;

    // CONSTRUCTORS
    Vmac_pe_tb__Syms(VerilatedContext* contextp, const char* namep, Vmac_pe_tb* modelp);
    ~Vmac_pe_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
