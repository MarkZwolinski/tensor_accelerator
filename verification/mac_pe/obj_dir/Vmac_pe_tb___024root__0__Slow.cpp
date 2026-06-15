// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_pe_tb.h for the primary calling header

#include "Vmac_pe_tb__pch.h"

void Vmac_pe_tb___024root___timing_ready(Vmac_pe_tb___024root* vlSelf);

VL_ATTR_COLD void Vmac_pe_tb___024root___eval_static(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_static\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mac_pe_tb__DOT__clk = 0U;
    vlSelfRef.mac_pe_tb__DOT__rst_n = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = 0U;
    vlSelfRef.mac_pe_tb__DOT__load_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = 0U;
    vlSelfRef.mac_pe_tb__DOT__weight_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__act_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__psum_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_act_reg = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_act_out = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_psum_out = 0U;
    vlSelfRef.mac_pe_tb__DOT__errors = 0U;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_idle = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_only = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_only = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_and_lw = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_with_clear = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_zero = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_pos = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_neg = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_zero = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_pos = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_neg = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_psum_nonzero = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A1_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A3_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A4_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A5_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_then_en = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_consecutive_en = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_enable = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_lw = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_rst_n = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__rst_n__0 = 0U;
    Vmac_pe_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vmac_pe_tb___024root___eval_static__TOP(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_static__TOP\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mac_pe_tb__DOT__clk = 0U;
    vlSelfRef.mac_pe_tb__DOT__rst_n = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = 0U;
    vlSelfRef.mac_pe_tb__DOT__load_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = 0U;
    vlSelfRef.mac_pe_tb__DOT__weight_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__act_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__psum_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_act_reg = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_act_out = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_psum_out = 0U;
    vlSelfRef.mac_pe_tb__DOT__errors = 0U;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_idle = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_only = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_only = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_and_lw = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_with_clear = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_zero = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_pos = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_neg = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_zero = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_pos = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_neg = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_psum_nonzero = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A1_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A3_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A4_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A5_ant = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_then_en = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_consecutive_en = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_enable = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_lw = 0U;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_rst_n = 0U;
}

VL_ATTR_COLD void Vmac_pe_tb___024root___eval_initial__TOP(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_initial__TOP\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("mac_pe_tb.vcd"s);
    VL_PRINTF_MT("-Info: mac_pe_tb.sv:62: $dumpvar ignored, as Verilated without --trace\n");
}

VL_ATTR_COLD void Vmac_pe_tb___024root___eval_final(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_final\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_pe_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmac_pe_tb___024root___eval_phase__stl(Vmac_pe_tb___024root* vlSelf);

VL_ATTR_COLD void Vmac_pe_tb___024root___eval_settle(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_settle\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmac_pe_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("mac_pe_tb.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vmac_pe_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vmac_pe_tb___024root___eval_triggers_vec__stl(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_triggers_vec__stl\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vmac_pe_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_pe_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmac_pe_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmac_pe_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vmac_pe_tb___024root___stl_sequent__TOP__0(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___stl_sequent__TOP__0\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ mac_pe_tb__DOT__dut__DOT__product;
    mac_pe_tb__DOT__dut__DOT__product = 0;
    // Body
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_prod_ext 
        = VL_EXTENDS_II(32,16, (0x0000ffffU & VL_MULS_III(16, 
                                                          (0x0000ffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg))), 
                                                          (0x0000ffffU 
                                                           & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight))))));
    mac_pe_tb__DOT__dut__DOT__product = (0x0000ffffU 
                                         & VL_MULS_III(16, 
                                                       (0x0000ffffU 
                                                        & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg))), 
                                                       (0x0000ffffU 
                                                        & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__dut__DOT__weight_reg)))));
    vlSelfRef.mac_pe_tb__DOT__dut__DOT__product_ext 
        = (((- (IData)((1U & ((IData)(mac_pe_tb__DOT__dut__DOT__product) 
                              >> 0x0000000fU)))) << 0x00000010U) 
           | (IData)(mac_pe_tb__DOT__dut__DOT__product));
}

VL_ATTR_COLD void Vmac_pe_tb___024root___eval_stl(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_stl\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vinline__stl_sequent__TOP__0_mac_pe_tb__DOT__dut__DOT__product;
    __Vinline__stl_sequent__TOP__0_mac_pe_tb__DOT__dut__DOT__product = 0;
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_prod_ext 
            = VL_EXTENDS_II(32,16, (0x0000ffffU & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight))))));
        __Vinline__stl_sequent__TOP__0_mac_pe_tb__DOT__dut__DOT__product 
            = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg))), 
                                         (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__dut__DOT__weight_reg)))));
        vlSelfRef.mac_pe_tb__DOT__dut__DOT__product_ext 
            = (((- (IData)((1U & (__Vinline__stl_sequent__TOP__0_mac_pe_tb__DOT__dut__DOT__product 
                                  >> 0x0000000fU)))) 
                << 0x00000010U) | __Vinline__stl_sequent__TOP__0_mac_pe_tb__DOT__dut__DOT__product);
    }
}

VL_ATTR_COLD bool Vmac_pe_tb___024root___eval_phase__stl(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_phase__stl\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmac_pe_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_pe_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmac_pe_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmac_pe_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmac_pe_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmac_pe_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmac_pe_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge mac_pe_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge mac_pe_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmac_pe_tb___024root___ctor_var_reset(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___ctor_var_reset\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->mac_pe_tb__DOT__act_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12242288972436024512ull);
    vlSelf->mac_pe_tb__DOT__psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12538608083411177415ull);
    vlSelf->mac_pe_tb__DOT__dut__DOT__weight_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5979738893157220462ull);
    vlSelf->mac_pe_tb__DOT__dut__DOT__act_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2818248217393030244ull);
    vlSelf->mac_pe_tb__DOT__dut__DOT__product_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6166242527127162772ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__assertion_failures = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT__f_prod_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10714364726412025719ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12124027777916727011ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_clear_acc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419460281680453080ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_f_act_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14679142357819529217ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_psum_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15333054049412511118ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_f_prod_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17033454381508073819ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_act_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12365332335634615141ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_psum_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15239962921449298115ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT__prev_rst_rose = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 613945495952470367ull);
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_1_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_2_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_4_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_5_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_6_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_8_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_9_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_11_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_12_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_13_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_15_1 = 0;
    vlSelf->mac_pe_tb__DOT__chk__DOT___Vpast_16_1 = 0;
    vlSelf->mac_pe_tb__DOT__cov__DOT___Vpast_0_1 = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__act_out = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__psum_out = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__rst_n = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__enable = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_act_reg = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__clear_acc = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__psum_in = 0;
    vlSelf->__Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_prod_ext = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__mac_pe_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__mac_pe_tb__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
