// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma_engine_tb.h for the primary calling header

#ifndef VERILATED_VDMA_ENGINE_TB___024ROOT_H_
#define VERILATED_VDMA_ENGINE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdma_engine_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_engine_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ dma_engine_tb__DOT__clk;
        CData/*0:0*/ dma_engine_tb__DOT__rst_n;
        CData/*0:0*/ dma_engine_tb__DOT__cmd_valid;
        CData/*0:0*/ dma_engine_tb__DOT__axi_arready;
        CData/*0:0*/ dma_engine_tb__DOT__axi_bvalid;
        CData/*0:0*/ dma_engine_tb__DOT__axi_rvalid;
        CData/*0:0*/ dma_engine_tb__DOT__aw_accepted;
        CData/*3:0*/ dma_engine_tb__DOT__dut__DOT__state;
        CData/*7:0*/ dma_engine_tb__DOT__dut__DOT__op_type;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__sram_we_reg;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__sram_re_reg;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__axi_wlast_reg;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__axi_rready_reg;
        CData/*0:0*/ dma_engine_tb__DOT__dut__DOT__done_reg;
        CData/*0:0*/ dma_engine_tb__DOT__chk__DOT__prev_cmd_ready;
        CData/*0:0*/ dma_engine_tb__DOT__chk__DOT__prev_cmd_valid;
        CData/*0:0*/ dma_engine_tb__DOT__chk__DOT__prev_cmd_done;
        CData/*0:0*/ dma_engine_tb__DOT__chk__DOT___Vpast_2_1;
        CData/*0:0*/ dma_engine_tb__DOT__chk__DOT___Vpast_4_1;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_load_cmd;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_store_cmd;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_cmd_done;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_sram_write;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_sram_read;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_axi_read_ar;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_axi_write_aw;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_backpressure;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_consecutive_cmds;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_A2_ant;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_A3_ant;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__cov_A5_ant;
        CData/*0:0*/ dma_engine_tb__DOT__cov__DOT__prev_cmd_done;
        CData/*0:0*/ __Vdly__dma_engine_tb__DOT__axi_rvalid;
        CData/*0:0*/ __Vdly__dma_engine_tb__DOT__axi_bvalid;
        CData/*0:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg;
        CData/*5:0*/ __VdlyDim0__dma_engine_tb__DOT__ext_mem__v0;
        CData/*0:0*/ __VdlySet__dma_engine_tb__DOT__ext_mem__v0;
        CData/*0:0*/ __Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_we_reg;
        CData/*0:0*/ __Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_re_reg;
        CData/*3:0*/ __Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__state;
        CData/*0:0*/ __Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__done_reg;
        CData/*0:0*/ __Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg;
        CData/*0:0*/ __Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg;
        CData/*0:0*/ __Vsampled_TOP__dma_engine_tb__DOT__rst_n;
        CData/*0:0*/ __Vsampled_TOP__dma_engine_tb__DOT__cmd_valid;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dma_engine_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dma_engine_tb__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*11:0*/ dma_engine_tb__DOT__dut__DOT__row_count;
        SData/*11:0*/ dma_engine_tb__DOT__dut__DOT__col_count;
        SData/*11:0*/ dma_engine_tb__DOT__dut__DOT__rows_cfg;
        SData/*11:0*/ dma_engine_tb__DOT__dut__DOT__cols_cfg;
        SData/*11:0*/ dma_engine_tb__DOT__dut__DOT__ext_stride_cfg;
        SData/*11:0*/ dma_engine_tb__DOT__dut__DOT__int_stride_cfg;
        VlWide<4>/*127:0*/ dma_engine_tb__DOT__cmd;
        VlWide<8>/*255:0*/ dma_engine_tb__DOT__sram_rdata;
        VlWide<8>/*255:0*/ dma_engine_tb__DOT__axi_rdata;
        IData/*31:0*/ dma_engine_tb__DOT__errors;
        IData/*19:0*/ dma_engine_tb__DOT__dut__DOT__int_base;
    };
    struct {
        IData/*19:0*/ dma_engine_tb__DOT__dut__DOT__int_ptr;
        VlWide<8>/*255:0*/ dma_engine_tb__DOT__dut__DOT__data_buf;
        IData/*19:0*/ dma_engine_tb__DOT__dut__DOT__sram_addr_reg;
        VlWide<8>/*255:0*/ dma_engine_tb__DOT__dut__DOT__sram_wdata_reg;
        VlWide<8>/*255:0*/ dma_engine_tb__DOT__dut__DOT__axi_wdata_reg;
        IData/*31:0*/ dma_engine_tb__DOT__chk__DOT__assertion_failures;
        VlWide<8>/*255:0*/ __Vdly__dma_engine_tb__DOT__sram_rdata;
        VlWide<8>/*255:0*/ __VdlyVal__dma_engine_tb__DOT__ext_mem__v0;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*39:0*/ dma_engine_tb__DOT__aw_addr_lat;
        QData/*39:0*/ dma_engine_tb__DOT__dut__DOT__ext_base;
        QData/*39:0*/ dma_engine_tb__DOT__dut__DOT__ext_ptr;
        QData/*39:0*/ dma_engine_tb__DOT__dut__DOT__axi_awaddr_reg;
        QData/*39:0*/ dma_engine_tb__DOT__dut__DOT__axi_araddr_reg;
        QData/*39:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__axi_araddr_reg;
        VlUnpacked<VlWide<8>/*255:0*/, 64> dma_engine_tb__DOT__ext_mem;
        VlUnpacked<VlWide<8>/*255:0*/, 64> dma_engine_tb__DOT__sram_mem;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string __Vtask_dma_engine_tb__DOT__wait_done__3__tag;
    std::string __Vtask_dma_engine_tb__DOT__wait_done__6__tag;
    std::string __Vtask_dma_engine_tb__DOT__wait_done__9__tag;
    std::string __Vtask_dma_engine_tb__DOT__wait_done__12__tag;
    std::string __Vtask_dma_engine_tb__DOT__wait_done__18__tag;
    std::string __Vtask_dma_engine_tb__DOT__wait_done__20__tag;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc180e617__0;
    VlUnpacked<std::string, 12> __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names;

    // INTERNAL VARIABLES
    Vdma_engine_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_engine_tb___024root(Vdma_engine_tb__Syms* symsp, const char* namep);
    ~Vdma_engine_tb___024root();
    VL_UNCOPYABLE(Vdma_engine_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
