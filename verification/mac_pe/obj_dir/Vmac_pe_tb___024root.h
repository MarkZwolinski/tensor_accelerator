// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmac_pe_tb.h for the primary calling header

#ifndef VERILATED_VMAC_PE_TB___024ROOT_H_
#define VERILATED_VMAC_PE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmac_pe_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmac_pe_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mac_pe_tb__DOT__clk;
        CData/*0:0*/ mac_pe_tb__DOT__rst_n;
        CData/*0:0*/ mac_pe_tb__DOT__enable;
        CData/*0:0*/ mac_pe_tb__DOT__load_weight;
        CData/*0:0*/ mac_pe_tb__DOT__clear_acc;
        CData/*7:0*/ mac_pe_tb__DOT__weight_in;
        CData/*7:0*/ mac_pe_tb__DOT__act_in;
        CData/*7:0*/ mac_pe_tb__DOT__act_out;
        CData/*7:0*/ mac_pe_tb__DOT__ref_weight;
        CData/*7:0*/ mac_pe_tb__DOT__ref_act_reg;
        CData/*7:0*/ mac_pe_tb__DOT__ref_act_out;
        CData/*7:0*/ mac_pe_tb__DOT__dut__DOT__weight_reg;
        CData/*7:0*/ mac_pe_tb__DOT__dut__DOT__act_reg;
        CData/*7:0*/ mac_pe_tb__DOT__chk__DOT__f_weight;
        CData/*7:0*/ mac_pe_tb__DOT__chk__DOT__f_act_reg;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT__prev_enable;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT__prev_clear_acc;
        CData/*7:0*/ mac_pe_tb__DOT__chk__DOT__prev_f_act_reg;
        CData/*7:0*/ mac_pe_tb__DOT__chk__DOT__prev_act_out;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT__prev_rst_rose;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_1_1;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_2_1;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_4_1;
        CData/*7:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_5_1;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_8_1;
        CData/*7:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_9_1;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_11_1;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_15_1;
        CData/*0:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_16_1;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_idle;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_lw_only;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_en_only;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_en_and_lw;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_en_with_clear;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_weight_zero;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_weight_max_pos;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_weight_max_neg;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_act_zero;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_act_max_pos;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_act_max_neg;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_psum_nonzero;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_A1_ant;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_A3_ant;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_A4_ant;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_A5_ant;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_lw_then_en;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__cov_consecutive_en;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__prev_enable;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__prev_lw;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT__prev_rst_n;
        CData/*0:0*/ mac_pe_tb__DOT__cov__DOT___Vpast_0_1;
        CData/*7:0*/ __Vsampled_TOP__mac_pe_tb__DOT__act_out;
        CData/*0:0*/ __Vsampled_TOP__mac_pe_tb__DOT__rst_n;
        CData/*0:0*/ __Vsampled_TOP__mac_pe_tb__DOT__enable;
        CData/*7:0*/ __Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_act_reg;
        CData/*0:0*/ __Vsampled_TOP__mac_pe_tb__DOT__clear_acc;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mac_pe_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__mac_pe_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ mac_pe_tb__DOT__psum_in;
    };
    struct {
        IData/*31:0*/ mac_pe_tb__DOT__psum_out;
        IData/*31:0*/ mac_pe_tb__DOT__ref_psum_out;
        IData/*31:0*/ mac_pe_tb__DOT__errors;
        IData/*31:0*/ mac_pe_tb__DOT__dut__DOT__product_ext;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT__assertion_failures;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT__f_prod_ext;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT__prev_psum_in;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT__prev_f_prod_ext;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT__prev_psum_out;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_6_1;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_12_1;
        IData/*31:0*/ mac_pe_tb__DOT__chk__DOT___Vpast_13_1;
        IData/*31:0*/ __Vsampled_TOP__mac_pe_tb__DOT__psum_out;
        IData/*31:0*/ __Vsampled_TOP__mac_pe_tb__DOT__psum_in;
        IData/*31:0*/ __Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_prod_ext;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__3__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__6__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__9__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__17__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__20__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__23__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__26__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__29__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__39__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__55__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__63__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__66__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__76__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__86__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__96__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__106__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__112__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__115__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__120__tag;
    std::string __Vtask_mac_pe_tb__DOT__chk_outputs__130__tag;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h527aa988__0;
    VlUnpacked<std::string, 18> __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names;

    // INTERNAL VARIABLES
    Vmac_pe_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmac_pe_tb___024root(Vmac_pe_tb__Syms* symsp, const char* namep);
    ~Vmac_pe_tb___024root();
    VL_UNCOPYABLE(Vmac_pe_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
