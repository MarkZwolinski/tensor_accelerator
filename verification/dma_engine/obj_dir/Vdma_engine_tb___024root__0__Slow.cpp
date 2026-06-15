// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma_engine_tb.h for the primary calling header

#include "Vdma_engine_tb__pch.h"

extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h9e67c271_0;
void Vdma_engine_tb___024root___timing_ready(Vdma_engine_tb___024root* vlSelf);

VL_ATTR_COLD void Vdma_engine_tb___024root___eval_static(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_static\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dma_engine_tb__DOT__clk = 0U;
    vlSelfRef.dma_engine_tb__DOT__rst_n = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    vlSelfRef.dma_engine_tb__DOT__axi_arready = 1U;
    vlSelfRef.dma_engine_tb__DOT__axi_bvalid = 0U;
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__axi_rdata, Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.dma_engine_tb__DOT__axi_rvalid = 0U;
    vlSelfRef.dma_engine_tb__DOT__aw_accepted = 0U;
    vlSelfRef.dma_engine_tb__DOT__aw_addr_lat = 0ULL;
    vlSelfRef.dma_engine_tb__DOT__errors = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_load_cmd = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_store_cmd = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_cmd_done = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_write = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_read = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_read_ar = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_write_aw = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_backpressure = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_consecutive_cmds = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A2_ant = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A3_ant = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A5_ant = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__prev_cmd_done = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__rst_n__0 = 0U;
    Vdma_engine_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vdma_engine_tb___024root___eval_static__TOP(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_static__TOP\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dma_engine_tb__DOT__clk = 0U;
    vlSelfRef.dma_engine_tb__DOT__rst_n = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    vlSelfRef.dma_engine_tb__DOT__axi_arready = 1U;
    vlSelfRef.dma_engine_tb__DOT__axi_bvalid = 0U;
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__axi_rdata, Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.dma_engine_tb__DOT__axi_rvalid = 0U;
    vlSelfRef.dma_engine_tb__DOT__aw_accepted = 0U;
    vlSelfRef.dma_engine_tb__DOT__aw_addr_lat = 0ULL;
    vlSelfRef.dma_engine_tb__DOT__errors = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_load_cmd = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_store_cmd = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_cmd_done = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_write = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_read = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_read_ar = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_write_aw = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_backpressure = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_consecutive_cmds = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A2_ant = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A3_ant = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A5_ant = 0U;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__prev_cmd_done = 0U;
}

VL_ATTR_COLD void Vdma_engine_tb___024root___eval_initial__TOP(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_initial__TOP\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("dma_engine_tb.vcd"s);
    VL_PRINTF_MT("-Info: dma_engine_tb.sv:133: $dumpvar ignored, as Verilated without --trace\n");
}

VL_ATTR_COLD void Vdma_engine_tb___024root___eval_final(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_final\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdma_engine_tb___024root___eval_settle(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_settle\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vdma_engine_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_engine_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdma_engine_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge dma_engine_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge dma_engine_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdma_engine_tb___024root___ctor_var_reset(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___ctor_var_reset\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->dma_engine_tb__DOT__sram_rdata, __VscopeHash, 8289603813505878272ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->dma_engine_tb__DOT__ext_mem[__Vi0], __VscopeHash, 8499073057402828873ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(256, vlSelf->dma_engine_tb__DOT__sram_mem[__Vi0], __VscopeHash, 12591514011119102331ull);
    }
    vlSelf->dma_engine_tb__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7339517528527633074ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__op_type = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6241371140415934232ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__row_count = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10667539696927742606ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__col_count = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14629346894475786942ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__rows_cfg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10098091722951503717ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__cols_cfg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16669883661939454481ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__ext_stride_cfg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1095757567097776752ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__int_stride_cfg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17331784713430483592ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__ext_base = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10465541812486068979ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__ext_ptr = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16260565598750710576ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__int_base = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7851647833185118737ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__int_ptr = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6476548900188404967ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->dma_engine_tb__DOT__dut__DOT__data_buf, __VscopeHash, 10768533174712087406ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__sram_addr_reg = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10904121808218663936ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->dma_engine_tb__DOT__dut__DOT__sram_wdata_reg, __VscopeHash, 6835382499395256904ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__sram_we_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12534556889326037628ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__sram_re_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13485158949994574325ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__axi_awaddr_reg = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13984261808229802762ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__axi_araddr_reg = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3024447982379932257ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11844014694513357137ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18398248476999957369ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->dma_engine_tb__DOT__dut__DOT__axi_wdata_reg, __VscopeHash, 9644177835135272942ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__axi_wlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1148566561010737557ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030687261965061282ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__axi_rready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10552438111439876106ull);
    vlSelf->dma_engine_tb__DOT__dut__DOT__done_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5995595804166680439ull);
    vlSelf->dma_engine_tb__DOT__chk__DOT__assertion_failures = 0;
    vlSelf->dma_engine_tb__DOT__chk__DOT__prev_cmd_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4824422745819170944ull);
    vlSelf->dma_engine_tb__DOT__chk__DOT__prev_cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9611559626907604118ull);
    vlSelf->dma_engine_tb__DOT__chk__DOT__prev_cmd_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16160557904883860324ull);
    vlSelf->dma_engine_tb__DOT__chk__DOT___Vpast_2_1 = 0;
    vlSelf->dma_engine_tb__DOT__chk__DOT___Vpast_4_1 = 0;
    VL_ZERO_RESET_W(256, vlSelf->__Vdly__dma_engine_tb__DOT__sram_rdata);
    vlSelf->__Vdly__dma_engine_tb__DOT__axi_rvalid = 0;
    vlSelf->__Vdly__dma_engine_tb__DOT__axi_bvalid = 0;
    vlSelf->__Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg = 0;
    vlSelf->__Vdly__dma_engine_tb__DOT__dut__DOT__axi_araddr_reg = 0;
    VL_ZERO_RESET_W(256, vlSelf->__VdlyVal__dma_engine_tb__DOT__ext_mem__v0);
    vlSelf->__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0 = 0;
    vlSelf->__VdlySet__dma_engine_tb__DOT__ext_mem__v0 = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_we_reg = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_re_reg = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__state = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__done_reg = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__rst_n = 0;
    vlSelf->__Vsampled_TOP__dma_engine_tb__DOT__cmd_valid = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__dma_engine_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dma_engine_tb__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
