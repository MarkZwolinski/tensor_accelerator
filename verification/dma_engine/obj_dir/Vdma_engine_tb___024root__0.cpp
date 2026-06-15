// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma_engine_tb.h for the primary calling header

#include "Vdma_engine_tb__pch.h"

VlCoroutine Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__0(Vdma_engine_tb___024root* vlSelf);
VlCoroutine Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__1(Vdma_engine_tb___024root* vlSelf);

void Vdma_engine_tb___024root___eval_initial(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_initial\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("dma_engine_tb.vcd"s);
    VL_PRINTF_MT("-Info: dma_engine_tb.sv:133: $dumpvar ignored, as Verilated without --trace\n");
    Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h9e67c271_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h99a6bdf3_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h0f71e435_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h966aaf07_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_ha7b01553_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hafef2e3c_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hc683530c_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h75161255_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h85665294_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hfc5ac8df_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hdce4799f_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h3e8dbcc7_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h5a9af61c_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h3ac4a703_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h57168600_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h679682fe_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h2be70ea1_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h90002ff1_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h10cf5efa_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h0da76719_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hd8a28988_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hf00fe9e0_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_ha4e336a6_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h8623053c_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h1a74309a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h198c8ed5_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hd94b5b11_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hc50cef07_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h3a6ee9ad_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h2942039c_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hed1eefcb_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_he5306278_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hde04b292_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h36d1d45a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h9996f249_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_heae64c2a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h17992ad5_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h8e5e5c9b_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h6db6a948_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h0c0d789a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h977b27b6_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_ha0a49d9f_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h71c6bf60_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h080c89ec_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h618c099b_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h4972342a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h317bf4ee_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_haca9259f_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h5b85b197_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hea98ed1f_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h286950b9_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h9d0e650a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h6e54216a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h39256437_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hac7b553a_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h63434484_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h0f18cf93_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h54fbb86b_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h54df9db3_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hd4c46151_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h1a632721_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hb388d951_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_hebf3dac6_0;
void Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(Vdma_engine_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h3d73b83e_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h3f6e56d1_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h6db09745_0;
extern const VlWide<8>/*255:0*/ Vdma_engine_tb__ConstPool__CONST_h14b26c6b_0;

VlCoroutine Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__0(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ dma_engine_tb__DOT__c;
    VL_ZERO_W(128, dma_engine_tb__DOT__c);
    VlWide<4>/*127:0*/ dma_engine_tb__DOT__c_ld;
    VL_ZERO_W(128, dma_engine_tb__DOT__c_ld);
    VlWide<4>/*127:0*/ dma_engine_tb__DOT__c_st;
    VL_ZERO_W(128, dma_engine_tb__DOT__c_st);
    IData/*31:0*/ dma_engine_tb__DOT__local_cycles;
    dma_engine_tb__DOT__local_cycles = 0;
    IData/*31:0*/ dma_engine_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    dma_engine_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__reset_dut__0__dma_engine_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_dma_engine_tb__DOT__reset_dut__0__dma_engine_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout);
    CData/*7:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__subop;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__subop = 0;
    QData/*39:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_addr = 0;
    IData/*19:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__int_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__int_addr = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__rows;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__rows = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__cols;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__cols = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_stride = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__int_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__int_stride = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__1__c;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__1__c);
    VlWide<4>/*127:0*/ __Vtask_dma_engine_tb__DOT__issue_cmd__2__c;
    VL_ZERO_W(128, __Vtask_dma_engine_tb__DOT__issue_cmd__2__c);
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__3____Vincrement1;
    __Vtask_dma_engine_tb__DOT__wait_done__3____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__3__cycles;
    __Vtask_dma_engine_tb__DOT__wait_done__3__cycles = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout);
    CData/*7:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__subop;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__subop = 0;
    QData/*39:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_addr = 0;
    IData/*19:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__int_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__int_addr = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__rows;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__rows = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__cols;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__cols = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_stride = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__int_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__int_stride = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__4__c;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__4__c);
    VlWide<4>/*127:0*/ __Vtask_dma_engine_tb__DOT__issue_cmd__5__c;
    VL_ZERO_W(128, __Vtask_dma_engine_tb__DOT__issue_cmd__5__c);
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__6____Vincrement1;
    __Vtask_dma_engine_tb__DOT__wait_done__6____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__6__cycles;
    __Vtask_dma_engine_tb__DOT__wait_done__6__cycles = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout);
    CData/*7:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__subop;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__subop = 0;
    QData/*39:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_addr = 0;
    IData/*19:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__int_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__int_addr = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__rows;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__rows = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__cols;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__cols = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_stride = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__int_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__int_stride = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__7__c;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__7__c);
    VlWide<4>/*127:0*/ __Vtask_dma_engine_tb__DOT__issue_cmd__8__c;
    VL_ZERO_W(128, __Vtask_dma_engine_tb__DOT__issue_cmd__8__c);
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__9____Vincrement1;
    __Vtask_dma_engine_tb__DOT__wait_done__9____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__9__cycles;
    __Vtask_dma_engine_tb__DOT__wait_done__9__cycles = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout);
    CData/*7:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__subop;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__subop = 0;
    QData/*39:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_addr = 0;
    IData/*19:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__int_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__int_addr = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__rows;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__rows = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__cols;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__cols = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_stride = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__int_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__int_stride = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__10__c;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__10__c);
    VlWide<4>/*127:0*/ __Vtask_dma_engine_tb__DOT__issue_cmd__11__c;
    VL_ZERO_W(128, __Vtask_dma_engine_tb__DOT__issue_cmd__11__c);
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__12____Vincrement1;
    __Vtask_dma_engine_tb__DOT__wait_done__12____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__12__cycles;
    __Vtask_dma_engine_tb__DOT__wait_done__12__cycles = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout);
    CData/*7:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__subop;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__subop = 0;
    QData/*39:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_addr = 0;
    IData/*19:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__int_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__int_addr = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__rows;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__rows = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__cols;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__cols = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_stride = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__int_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__int_stride = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__13__c;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__13__c);
    VlWide<4>/*127:0*/ __Vtask_dma_engine_tb__DOT__issue_cmd__14__c;
    VL_ZERO_W(128, __Vtask_dma_engine_tb__DOT__issue_cmd__14__c);
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout);
    CData/*7:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__subop;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__subop = 0;
    QData/*39:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_addr = 0;
    IData/*19:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__int_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__int_addr = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__rows;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__rows = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__cols;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__cols = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_stride = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__int_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__int_stride = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__15__c;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__15__c);
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout);
    CData/*7:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__subop;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__subop = 0;
    QData/*39:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_addr = 0;
    IData/*19:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__int_addr;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__int_addr = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__rows;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__rows = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__cols;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__cols = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_stride = 0;
    SData/*11:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__int_stride;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__int_stride = 0;
    VlWide<4>/*127:0*/ __Vfunc_dma_engine_tb__DOT__make_cmd__16__c;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__16__c);
    VlWide<4>/*127:0*/ __Vtask_dma_engine_tb__DOT__issue_cmd__17__c;
    VL_ZERO_W(128, __Vtask_dma_engine_tb__DOT__issue_cmd__17__c);
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__18____Vincrement1;
    __Vtask_dma_engine_tb__DOT__wait_done__18____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__18__cycles;
    __Vtask_dma_engine_tb__DOT__wait_done__18__cycles = 0;
    VlWide<4>/*127:0*/ __Vtask_dma_engine_tb__DOT__issue_cmd__19__c;
    VL_ZERO_W(128, __Vtask_dma_engine_tb__DOT__issue_cmd__19__c);
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__20____Vincrement1;
    __Vtask_dma_engine_tb__DOT__wait_done__20____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__wait_done__20__cycles;
    __Vtask_dma_engine_tb__DOT__wait_done__20__cycles = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits = 0;
    IData/*31:0*/ __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__total;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__total = 0;
    VlUnpacked<CData/*0:0*/, 12> __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[__Vi0] = 0;
    }
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    std::string __Vtemp_17;
    std::string __Vtemp_18;
    std::string __Vtemp_19;
    // Body
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[0U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[1U], Vdma_engine_tb__ConstPool__CONST_h4e9f510d_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[2U], Vdma_engine_tb__ConstPool__CONST_h99a6bdf3_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[3U], Vdma_engine_tb__ConstPool__CONST_h0f71e435_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[4U], Vdma_engine_tb__ConstPool__CONST_h966aaf07_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[5U], Vdma_engine_tb__ConstPool__CONST_ha7b01553_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[6U], Vdma_engine_tb__ConstPool__CONST_hafef2e3c_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[7U], Vdma_engine_tb__ConstPool__CONST_hc683530c_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[8U], Vdma_engine_tb__ConstPool__CONST_h75161255_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[9U], Vdma_engine_tb__ConstPool__CONST_h85665294_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[10U], Vdma_engine_tb__ConstPool__CONST_hfc5ac8df_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[11U], Vdma_engine_tb__ConstPool__CONST_hdce4799f_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[12U], Vdma_engine_tb__ConstPool__CONST_h3e8dbcc7_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[13U], Vdma_engine_tb__ConstPool__CONST_h5a9af61c_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[14U], Vdma_engine_tb__ConstPool__CONST_h3ac4a703_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[15U], Vdma_engine_tb__ConstPool__CONST_h57168600_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[16U], Vdma_engine_tb__ConstPool__CONST_h679682fe_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[17U], Vdma_engine_tb__ConstPool__CONST_h2be70ea1_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[18U], Vdma_engine_tb__ConstPool__CONST_h90002ff1_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[19U], Vdma_engine_tb__ConstPool__CONST_h10cf5efa_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[20U], Vdma_engine_tb__ConstPool__CONST_h0da76719_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[21U], Vdma_engine_tb__ConstPool__CONST_hd8a28988_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[22U], Vdma_engine_tb__ConstPool__CONST_hf00fe9e0_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[23U], Vdma_engine_tb__ConstPool__CONST_ha4e336a6_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[24U], Vdma_engine_tb__ConstPool__CONST_h8623053c_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[25U], Vdma_engine_tb__ConstPool__CONST_h1a74309a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[26U], Vdma_engine_tb__ConstPool__CONST_h198c8ed5_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[27U], Vdma_engine_tb__ConstPool__CONST_hd94b5b11_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[28U], Vdma_engine_tb__ConstPool__CONST_hc50cef07_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[29U], Vdma_engine_tb__ConstPool__CONST_h3a6ee9ad_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[30U], Vdma_engine_tb__ConstPool__CONST_h2942039c_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[31U], Vdma_engine_tb__ConstPool__CONST_hed1eefcb_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[32U], Vdma_engine_tb__ConstPool__CONST_he5306278_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[33U], Vdma_engine_tb__ConstPool__CONST_hde04b292_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[34U], Vdma_engine_tb__ConstPool__CONST_h36d1d45a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[35U], Vdma_engine_tb__ConstPool__CONST_h9996f249_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[36U], Vdma_engine_tb__ConstPool__CONST_heae64c2a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[37U], Vdma_engine_tb__ConstPool__CONST_h17992ad5_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[38U], Vdma_engine_tb__ConstPool__CONST_h8e5e5c9b_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[39U], Vdma_engine_tb__ConstPool__CONST_h6db6a948_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[40U], Vdma_engine_tb__ConstPool__CONST_h0c0d789a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[41U], Vdma_engine_tb__ConstPool__CONST_h977b27b6_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[42U], Vdma_engine_tb__ConstPool__CONST_ha0a49d9f_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[43U], Vdma_engine_tb__ConstPool__CONST_h71c6bf60_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[44U], Vdma_engine_tb__ConstPool__CONST_h080c89ec_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[45U], Vdma_engine_tb__ConstPool__CONST_h618c099b_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[46U], Vdma_engine_tb__ConstPool__CONST_h4972342a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[47U], Vdma_engine_tb__ConstPool__CONST_h317bf4ee_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[48U], Vdma_engine_tb__ConstPool__CONST_haca9259f_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[49U], Vdma_engine_tb__ConstPool__CONST_h5b85b197_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[50U], Vdma_engine_tb__ConstPool__CONST_hea98ed1f_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[51U], Vdma_engine_tb__ConstPool__CONST_h286950b9_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[52U], Vdma_engine_tb__ConstPool__CONST_h9d0e650a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[53U], Vdma_engine_tb__ConstPool__CONST_h6e54216a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[54U], Vdma_engine_tb__ConstPool__CONST_h39256437_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[55U], Vdma_engine_tb__ConstPool__CONST_hac7b553a_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[56U], Vdma_engine_tb__ConstPool__CONST_h63434484_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[57U], Vdma_engine_tb__ConstPool__CONST_h0f18cf93_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[58U], Vdma_engine_tb__ConstPool__CONST_h54fbb86b_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[59U], Vdma_engine_tb__ConstPool__CONST_h54df9db3_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[60U], Vdma_engine_tb__ConstPool__CONST_hd4c46151_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[61U], Vdma_engine_tb__ConstPool__CONST_h1a632721_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[62U], Vdma_engine_tb__ConstPool__CONST_hb388d951_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[63U], Vdma_engine_tb__ConstPool__CONST_hebf3dac6_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[0U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[1U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[2U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[3U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[4U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[5U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[6U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[7U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[8U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[9U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[10U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[11U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[12U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[13U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[14U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[15U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[16U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[17U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[18U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[19U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[20U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[21U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[22U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[23U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[24U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[25U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[26U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[27U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[28U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[29U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[30U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[31U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[32U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[33U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[34U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[35U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[36U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[37U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[38U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[39U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[40U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[41U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[42U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[43U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[44U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[45U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[46U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[47U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[48U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[49U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[50U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[51U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[52U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[53U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[54U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[55U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[56U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[57U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[58U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[59U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[60U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[61U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[62U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[63U], Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
    vlSelfRef.dma_engine_tb__DOT__rst_n = 0U;
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    __Vtask_dma_engine_tb__DOT__reset_dut__0__dma_engine_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_dma_engine_tb__DOT__reset_dut__0__dma_engine_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             184);
        __Vtask_dma_engine_tb__DOT__reset_dut__0__dma_engine_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_dma_engine_tb__DOT__reset_dut__0__dma_engine_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         185);
    vlSelfRef.dma_engine_tb__DOT__rst_n = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         197);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         197);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))))) {
        VL_WRITEF_NX("FAIL [T1] cmd_ready not asserted after reset\n",0);
        vlSelfRef.dma_engine_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.dma_engine_tb__DOT__errors);
    }
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__int_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__cols = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__rows = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__int_addr = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_addr = 0ULL;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__subop = 1U;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout);
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[0U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[1U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[2U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[3U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[1U] 
        = ((0x000fffffU & __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[1U]) 
           | ((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_addr 
                        << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__int_addr)))) 
              << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[2U] 
        = (((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_addr 
                      << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__int_addr)))) 
            >> 0x0000000cU) | ((IData)((((__Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_addr 
                                          << 0x00000014U) 
                                         | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__int_addr))) 
                                        >> 0x00000020U)) 
                               << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[3U] 
        = (((0x000f0000U & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__subop) 
                            << 0x00000010U)) | ((IData)(
                                                        (((__Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_addr 
                                                           << 0x00000014U) 
                                                          | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__int_addr))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000000cU)) 
           | (0xfff00000U & (0x03000000U | (0xfff00000U 
                                            & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__subop) 
                                               << 0x00000010U)))));
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[0U] 
        = ((0x0000000fU & __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[0U]) 
           | ((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__rows)) 
                        << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__cols)) 
                                            << 0x00000018U) 
                                           | (QData)((IData)(
                                                             (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_stride) 
                                                               << 0x0000000cU) 
                                                              | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__int_stride))))))) 
              << 4U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[1U] 
        = ((0xfff00000U & __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[1U]) 
           | (((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__rows)) 
                         << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__cols)) 
                                             << 0x00000018U) 
                                            | (QData)((IData)(
                                                              (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_stride) 
                                                                << 0x0000000cU) 
                                                               | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__int_stride))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__rows)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__cols)) 
                                                << 0x00000018U) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__ext_stride) 
                                                                   << 0x0000000cU) 
                                                                  | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__1__int_stride)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[0U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[0U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[1U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[1U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[2U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[2U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[3U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__1__c[3U];
    dma_engine_tb__DOT__c[0U] = __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[0U];
    dma_engine_tb__DOT__c[1U] = __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[1U];
    dma_engine_tb__DOT__c[2U] = __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[2U];
    dma_engine_tb__DOT__c[3U] = __Vfunc_dma_engine_tb__DOT__make_cmd__1__Vfuncout[3U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[0U] 
        = dma_engine_tb__DOT__c[0U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[1U] 
        = dma_engine_tb__DOT__c[1U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[2U] 
        = dma_engine_tb__DOT__c[2U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[3U] 
        = dma_engine_tb__DOT__c[3U];
    while ((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             175);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         176);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         176);
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[0U];
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[1U];
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[2U];
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = __Vtask_dma_engine_tb__DOT__issue_cmd__2__c[3U];
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         178);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         178);
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__3__tag = "T2 LOAD"s;
    __Vtask_dma_engine_tb__DOT__wait_done__3____Vincrement1 = 0U;
    {
        __Vtask_dma_engine_tb__DOT__wait_done__3__cycles = 0U;
        while ((1U & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg)))) {
            Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                                 "@(posedge dma_engine_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dma_engine_tb.clk)", 
                                                                 "dma_engine_tb.sv", 
                                                                 162);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "dma_engine_tb.sv", 
                                                 162);
            __Vtask_dma_engine_tb__DOT__wait_done__3____Vincrement1 
                = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__wait_done__3__cycles);
            __Vtask_dma_engine_tb__DOT__wait_done__3__cycles 
                = __Vtask_dma_engine_tb__DOT__wait_done__3____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000001f4U, __Vtask_dma_engine_tb__DOT__wait_done__3____Vincrement1)))) {
                VL_WRITEF_NX("FAIL [%s] timeout after 500 cycles\n",1
                             , 'S',&(vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__3__tag));
                vlSelfRef.dma_engine_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__errors);
                goto __Vlabel0;
            }
        }
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             169);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             169);
        __Vlabel0: ;
    }
    if ((0U != ((((((((vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][0U] 
                       ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][0U]) 
                      | (vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][1U] 
                         ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][1U])) 
                     | (vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][2U] 
                        ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][2U])) 
                    | (vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][3U] 
                       ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][3U])) 
                   | (vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][4U] 
                      ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][4U])) 
                  | (vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][5U] 
                     ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][5U])) 
                 | (vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][6U] 
                    ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][6U])) 
                | (vlSelfRef.dma_engine_tb__DOT__sram_mem[0U][7U] 
                   ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[0U][7U])))) {
        VL_WRITEF_NX("FAIL [T2] LOAD: sram[0]=%0h expected ext[0]=%0h\n",2
                     , '#',256,vlSelfRef.dma_engine_tb__DOT__sram_mem[0U].data()
                     , '#',256,vlSelfRef.dma_engine_tb__DOT__ext_mem[0U].data());
        vlSelfRef.dma_engine_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.dma_engine_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [T2] LOAD 1-word\n",0);
    }
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__sram_mem[1U], Vdma_engine_tb__ConstPool__CONST_h3d73b83e_0);
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__int_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__cols = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__rows = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__int_addr = 0x00000020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_addr = 0x0000000000000020ULL;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__subop = 2U;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout);
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[0U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[1U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[2U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[3U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[1U] 
        = ((0x000fffffU & __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[1U]) 
           | ((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_addr 
                        << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__int_addr)))) 
              << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[2U] 
        = (((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_addr 
                      << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__int_addr)))) 
            >> 0x0000000cU) | ((IData)((((__Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_addr 
                                          << 0x00000014U) 
                                         | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__int_addr))) 
                                        >> 0x00000020U)) 
                               << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[3U] 
        = (((0x000f0000U & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__subop) 
                            << 0x00000010U)) | ((IData)(
                                                        (((__Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_addr 
                                                           << 0x00000014U) 
                                                          | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__int_addr))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000000cU)) 
           | (0xfff00000U & (0x03000000U | (0xfff00000U 
                                            & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__subop) 
                                               << 0x00000010U)))));
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[0U] 
        = ((0x0000000fU & __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[0U]) 
           | ((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__rows)) 
                        << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__cols)) 
                                            << 0x00000018U) 
                                           | (QData)((IData)(
                                                             (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_stride) 
                                                               << 0x0000000cU) 
                                                              | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__int_stride))))))) 
              << 4U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[1U] 
        = ((0xfff00000U & __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[1U]) 
           | (((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__rows)) 
                         << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__cols)) 
                                             << 0x00000018U) 
                                            | (QData)((IData)(
                                                              (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_stride) 
                                                                << 0x0000000cU) 
                                                               | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__int_stride))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__rows)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__cols)) 
                                                << 0x00000018U) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__ext_stride) 
                                                                   << 0x0000000cU) 
                                                                  | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__4__int_stride)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[0U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[0U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[1U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[1U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[2U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[2U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[3U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__4__c[3U];
    dma_engine_tb__DOT__c[0U] = __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[0U];
    dma_engine_tb__DOT__c[1U] = __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[1U];
    dma_engine_tb__DOT__c[2U] = __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[2U];
    dma_engine_tb__DOT__c[3U] = __Vfunc_dma_engine_tb__DOT__make_cmd__4__Vfuncout[3U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[0U] 
        = dma_engine_tb__DOT__c[0U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[1U] 
        = dma_engine_tb__DOT__c[1U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[2U] 
        = dma_engine_tb__DOT__c[2U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[3U] 
        = dma_engine_tb__DOT__c[3U];
    while ((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             175);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         176);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         176);
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[0U];
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[1U];
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[2U];
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = __Vtask_dma_engine_tb__DOT__issue_cmd__5__c[3U];
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         178);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         178);
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__6__tag = "T3 STORE"s;
    __Vtask_dma_engine_tb__DOT__wait_done__6____Vincrement1 = 0U;
    {
        __Vtask_dma_engine_tb__DOT__wait_done__6__cycles = 0U;
        while ((1U & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg)))) {
            Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                                 "@(posedge dma_engine_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dma_engine_tb.clk)", 
                                                                 "dma_engine_tb.sv", 
                                                                 162);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "dma_engine_tb.sv", 
                                                 162);
            __Vtask_dma_engine_tb__DOT__wait_done__6____Vincrement1 
                = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__wait_done__6__cycles);
            __Vtask_dma_engine_tb__DOT__wait_done__6__cycles 
                = __Vtask_dma_engine_tb__DOT__wait_done__6____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000001f4U, __Vtask_dma_engine_tb__DOT__wait_done__6____Vincrement1)))) {
                VL_WRITEF_NX("FAIL [%s] timeout after 500 cycles\n",1
                             , 'S',&(vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__6__tag));
                vlSelfRef.dma_engine_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__errors);
                goto __Vlabel1;
            }
        }
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             169);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             169);
        __Vlabel1: ;
    }
    if ((0U != ((((((((vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][0U] 
                       ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][0U]) 
                      | (vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][1U] 
                         ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][1U])) 
                     | (vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][2U] 
                        ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][2U])) 
                    | (vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][3U] 
                       ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][3U])) 
                   | (vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][4U] 
                      ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][4U])) 
                  | (vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][5U] 
                     ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][5U])) 
                 | (vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][6U] 
                    ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][6U])) 
                | (vlSelfRef.dma_engine_tb__DOT__ext_mem[1U][7U] 
                   ^ vlSelfRef.dma_engine_tb__DOT__sram_mem[1U][7U])))) {
        VL_WRITEF_NX("FAIL [T3] STORE: ext[1]=%0h expected sram[1]=%0h\n",2
                     , '#',256,vlSelfRef.dma_engine_tb__DOT__ext_mem[1U].data()
                     , '#',256,vlSelfRef.dma_engine_tb__DOT__sram_mem[1U].data());
        vlSelfRef.dma_engine_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.dma_engine_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [T3] STORE 1-word (STORE_CAP path)\n",0);
    }
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[2U], Vdma_engine_tb__ConstPool__CONST_h3f6e56d1_0);
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[4U], Vdma_engine_tb__ConstPool__CONST_h6db09745_0);
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__int_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_stride = 0x0040U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__cols = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__rows = 2U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__int_addr = 0x00000040U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_addr = 0x0000000000000040ULL;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__subop = 1U;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout);
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[0U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[1U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[2U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[3U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[1U] 
        = ((0x000fffffU & __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[1U]) 
           | ((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_addr 
                        << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__int_addr)))) 
              << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[2U] 
        = (((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_addr 
                      << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__int_addr)))) 
            >> 0x0000000cU) | ((IData)((((__Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_addr 
                                          << 0x00000014U) 
                                         | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__int_addr))) 
                                        >> 0x00000020U)) 
                               << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[3U] 
        = (((0x000f0000U & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__subop) 
                            << 0x00000010U)) | ((IData)(
                                                        (((__Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_addr 
                                                           << 0x00000014U) 
                                                          | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__int_addr))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000000cU)) 
           | (0xfff00000U & (0x03000000U | (0xfff00000U 
                                            & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__subop) 
                                               << 0x00000010U)))));
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[0U] 
        = ((0x0000000fU & __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[0U]) 
           | ((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__rows)) 
                        << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__cols)) 
                                            << 0x00000018U) 
                                           | (QData)((IData)(
                                                             (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_stride) 
                                                               << 0x0000000cU) 
                                                              | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__int_stride))))))) 
              << 4U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[1U] 
        = ((0xfff00000U & __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[1U]) 
           | (((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__rows)) 
                         << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__cols)) 
                                             << 0x00000018U) 
                                            | (QData)((IData)(
                                                              (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_stride) 
                                                                << 0x0000000cU) 
                                                               | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__int_stride))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__rows)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__cols)) 
                                                << 0x00000018U) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__ext_stride) 
                                                                   << 0x0000000cU) 
                                                                  | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__7__int_stride)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[0U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[0U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[1U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[1U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[2U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[2U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[3U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__7__c[3U];
    dma_engine_tb__DOT__c[0U] = __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[0U];
    dma_engine_tb__DOT__c[1U] = __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[1U];
    dma_engine_tb__DOT__c[2U] = __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[2U];
    dma_engine_tb__DOT__c[3U] = __Vfunc_dma_engine_tb__DOT__make_cmd__7__Vfuncout[3U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[0U] 
        = dma_engine_tb__DOT__c[0U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[1U] 
        = dma_engine_tb__DOT__c[1U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[2U] 
        = dma_engine_tb__DOT__c[2U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[3U] 
        = dma_engine_tb__DOT__c[3U];
    while ((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             175);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         176);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         176);
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[0U];
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[1U];
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[2U];
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = __Vtask_dma_engine_tb__DOT__issue_cmd__8__c[3U];
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         178);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         178);
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__9__tag = "T4 LOAD_2D"s;
    __Vtask_dma_engine_tb__DOT__wait_done__9____Vincrement1 = 0U;
    {
        __Vtask_dma_engine_tb__DOT__wait_done__9__cycles = 0U;
        while ((1U & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg)))) {
            Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                                 "@(posedge dma_engine_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dma_engine_tb.clk)", 
                                                                 "dma_engine_tb.sv", 
                                                                 162);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "dma_engine_tb.sv", 
                                                 162);
            __Vtask_dma_engine_tb__DOT__wait_done__9____Vincrement1 
                = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__wait_done__9__cycles);
            __Vtask_dma_engine_tb__DOT__wait_done__9__cycles 
                = __Vtask_dma_engine_tb__DOT__wait_done__9____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000001f4U, __Vtask_dma_engine_tb__DOT__wait_done__9____Vincrement1)))) {
                VL_WRITEF_NX("FAIL [%s] timeout after 500 cycles\n",1
                             , 'S',&(vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__9__tag));
                vlSelfRef.dma_engine_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__errors);
                goto __Vlabel2;
            }
        }
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             169);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             169);
        __Vlabel2: ;
    }
    if ((0U != ((((((((vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][0U] 
                       ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][0U]) 
                      | (vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][1U] 
                         ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][1U])) 
                     | (vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][2U] 
                        ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][2U])) 
                    | (vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][3U] 
                       ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][3U])) 
                   | (vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][4U] 
                      ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][4U])) 
                  | (vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][5U] 
                     ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][5U])) 
                 | (vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][6U] 
                    ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][6U])) 
                | (vlSelfRef.dma_engine_tb__DOT__sram_mem[2U][7U] 
                   ^ vlSelfRef.dma_engine_tb__DOT__ext_mem[2U][7U])))) {
        VL_WRITEF_NX("FAIL [T4] LOAD_2D row0: sram[2]=%0h exp=%0h\n",2
                     , '#',256,vlSelfRef.dma_engine_tb__DOT__sram_mem[2U].data()
                     , '#',256,vlSelfRef.dma_engine_tb__DOT__ext_mem[2U].data());
        vlSelfRef.dma_engine_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.dma_engine_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [T4] LOAD_2D\n",0);
    }
    vlSelfRef.dma_engine_tb__DOT__axi_arready = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__int_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__cols = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__rows = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__int_addr = 0x00000060U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_addr = 0x0000000000000060ULL;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__subop = 1U;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout);
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[0U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[1U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[2U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[3U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[1U] 
        = ((0x000fffffU & __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[1U]) 
           | ((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_addr 
                        << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__int_addr)))) 
              << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[2U] 
        = (((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_addr 
                      << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__int_addr)))) 
            >> 0x0000000cU) | ((IData)((((__Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_addr 
                                          << 0x00000014U) 
                                         | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__int_addr))) 
                                        >> 0x00000020U)) 
                               << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[3U] 
        = (((0x000f0000U & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__subop) 
                            << 0x00000010U)) | ((IData)(
                                                        (((__Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_addr 
                                                           << 0x00000014U) 
                                                          | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__int_addr))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000000cU)) 
           | (0xfff00000U & (0x03000000U | (0xfff00000U 
                                            & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__subop) 
                                               << 0x00000010U)))));
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[0U] 
        = ((0x0000000fU & __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[0U]) 
           | ((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__rows)) 
                        << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__cols)) 
                                            << 0x00000018U) 
                                           | (QData)((IData)(
                                                             (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_stride) 
                                                               << 0x0000000cU) 
                                                              | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__int_stride))))))) 
              << 4U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[1U] 
        = ((0xfff00000U & __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[1U]) 
           | (((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__rows)) 
                         << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__cols)) 
                                             << 0x00000018U) 
                                            | (QData)((IData)(
                                                              (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_stride) 
                                                                << 0x0000000cU) 
                                                               | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__int_stride))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__rows)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__cols)) 
                                                << 0x00000018U) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__ext_stride) 
                                                                   << 0x0000000cU) 
                                                                  | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__10__int_stride)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[0U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[0U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[1U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[1U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[2U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[2U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[3U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__10__c[3U];
    dma_engine_tb__DOT__c[0U] = __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[0U];
    dma_engine_tb__DOT__c[1U] = __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[1U];
    dma_engine_tb__DOT__c[2U] = __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[2U];
    dma_engine_tb__DOT__c[3U] = __Vfunc_dma_engine_tb__DOT__make_cmd__10__Vfuncout[3U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[0U] 
        = dma_engine_tb__DOT__c[0U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[1U] 
        = dma_engine_tb__DOT__c[1U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[2U] 
        = dma_engine_tb__DOT__c[2U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[3U] 
        = dma_engine_tb__DOT__c[3U];
    while ((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             175);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         176);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         176);
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[0U];
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[1U];
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[2U];
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = __Vtask_dma_engine_tb__DOT__issue_cmd__11__c[3U];
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         178);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         178);
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    dma_engine_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, dma_engine_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             250);
        dma_engine_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (dma_engine_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         250);
    vlSelfRef.dma_engine_tb__DOT__axi_arready = 1U;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__12__tag = "T5 AR_backpressure"s;
    __Vtask_dma_engine_tb__DOT__wait_done__12____Vincrement1 = 0U;
    {
        __Vtask_dma_engine_tb__DOT__wait_done__12__cycles = 0U;
        while ((1U & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg)))) {
            Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                                 "@(posedge dma_engine_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dma_engine_tb.clk)", 
                                                                 "dma_engine_tb.sv", 
                                                                 162);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "dma_engine_tb.sv", 
                                                 162);
            __Vtask_dma_engine_tb__DOT__wait_done__12____Vincrement1 
                = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__wait_done__12__cycles);
            __Vtask_dma_engine_tb__DOT__wait_done__12__cycles 
                = __Vtask_dma_engine_tb__DOT__wait_done__12____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000001f4U, __Vtask_dma_engine_tb__DOT__wait_done__12____Vincrement1)))) {
                VL_WRITEF_NX("FAIL [%s] timeout after 500 cycles\n",1
                             , 'S',&(vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__12__tag));
                vlSelfRef.dma_engine_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__errors);
                goto __Vlabel3;
            }
        }
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             169);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             169);
        __Vlabel3: ;
    }
    VL_WRITEF_NX("PASS [T5] AR backpressure\n",0);
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__int_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__cols = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__rows = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__int_addr = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_addr = 0ULL;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__subop = 1U;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout);
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[0U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[1U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[2U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[3U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[1U] 
        = ((0x000fffffU & __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[1U]) 
           | ((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_addr 
                        << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__int_addr)))) 
              << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[2U] 
        = (((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_addr 
                      << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__int_addr)))) 
            >> 0x0000000cU) | ((IData)((((__Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_addr 
                                          << 0x00000014U) 
                                         | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__int_addr))) 
                                        >> 0x00000020U)) 
                               << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[3U] 
        = (((0x000f0000U & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__subop) 
                            << 0x00000010U)) | ((IData)(
                                                        (((__Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_addr 
                                                           << 0x00000014U) 
                                                          | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__int_addr))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000000cU)) 
           | (0xfff00000U & (0x03000000U | (0xfff00000U 
                                            & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__subop) 
                                               << 0x00000010U)))));
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[0U] 
        = ((0x0000000fU & __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[0U]) 
           | ((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__rows)) 
                        << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__cols)) 
                                            << 0x00000018U) 
                                           | (QData)((IData)(
                                                             (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_stride) 
                                                               << 0x0000000cU) 
                                                              | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__int_stride))))))) 
              << 4U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[1U] 
        = ((0xfff00000U & __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[1U]) 
           | (((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__rows)) 
                         << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__cols)) 
                                             << 0x00000018U) 
                                            | (QData)((IData)(
                                                              (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_stride) 
                                                                << 0x0000000cU) 
                                                               | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__int_stride))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__rows)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__cols)) 
                                                << 0x00000018U) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__ext_stride) 
                                                                   << 0x0000000cU) 
                                                                  | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__13__int_stride)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[0U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[0U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[1U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[1U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[2U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[2U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[3U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__13__c[3U];
    dma_engine_tb__DOT__c[0U] = __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[0U];
    dma_engine_tb__DOT__c[1U] = __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[1U];
    dma_engine_tb__DOT__c[2U] = __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[2U];
    dma_engine_tb__DOT__c[3U] = __Vfunc_dma_engine_tb__DOT__make_cmd__13__Vfuncout[3U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[0U] 
        = dma_engine_tb__DOT__c[0U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[1U] 
        = dma_engine_tb__DOT__c[1U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[2U] 
        = dma_engine_tb__DOT__c[2U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[3U] 
        = dma_engine_tb__DOT__c[3U];
    while ((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             175);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         176);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         176);
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[0U];
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[1U];
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[2U];
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = __Vtask_dma_engine_tb__DOT__issue_cmd__14__c[3U];
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         178);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         178);
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    dma_engine_tb__DOT__local_cycles = 0U;
    while (((~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg)) 
            & VL_GTS_III(32, 0x000001f4U, dma_engine_tb__DOT__local_cycles))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             262);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             262);
        dma_engine_tb__DOT__local_cycles = ((IData)(1U) 
                                            + dma_engine_tb__DOT__local_cycles);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         263);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         263);
    if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg) {
        VL_WRITEF_NX("FAIL [T6] cmd_done held for >1 cycle\n",0);
        vlSelfRef.dma_engine_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.dma_engine_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("PASS [T6] cmd_done single-cycle pulse\n",0);
    }
    VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__ext_mem[3U], Vdma_engine_tb__ConstPool__CONST_h14b26c6b_0);
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__int_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__cols = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__rows = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__int_addr = 0x00000060U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_addr = 0x0000000000000060ULL;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__subop = 1U;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout);
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[0U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[1U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[2U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[3U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[1U] 
        = ((0x000fffffU & __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[1U]) 
           | ((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_addr 
                        << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__int_addr)))) 
              << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[2U] 
        = (((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_addr 
                      << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__int_addr)))) 
            >> 0x0000000cU) | ((IData)((((__Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_addr 
                                          << 0x00000014U) 
                                         | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__int_addr))) 
                                        >> 0x00000020U)) 
                               << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[3U] 
        = (((0x000f0000U & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__subop) 
                            << 0x00000010U)) | ((IData)(
                                                        (((__Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_addr 
                                                           << 0x00000014U) 
                                                          | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__int_addr))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000000cU)) 
           | (0xfff00000U & (0x03000000U | (0xfff00000U 
                                            & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__subop) 
                                               << 0x00000010U)))));
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[0U] 
        = ((0x0000000fU & __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[0U]) 
           | ((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__rows)) 
                        << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__cols)) 
                                            << 0x00000018U) 
                                           | (QData)((IData)(
                                                             (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_stride) 
                                                               << 0x0000000cU) 
                                                              | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__int_stride))))))) 
              << 4U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[1U] 
        = ((0xfff00000U & __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[1U]) 
           | (((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__rows)) 
                         << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__cols)) 
                                             << 0x00000018U) 
                                            | (QData)((IData)(
                                                              (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_stride) 
                                                                << 0x0000000cU) 
                                                               | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__int_stride))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__rows)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__cols)) 
                                                << 0x00000018U) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__ext_stride) 
                                                                   << 0x0000000cU) 
                                                                  | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__15__int_stride)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[0U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[0U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[1U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[1U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[2U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[2U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[3U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__15__c[3U];
    dma_engine_tb__DOT__c_ld[0U] = __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[0U];
    dma_engine_tb__DOT__c_ld[1U] = __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[1U];
    dma_engine_tb__DOT__c_ld[2U] = __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[2U];
    dma_engine_tb__DOT__c_ld[3U] = __Vfunc_dma_engine_tb__DOT__make_cmd__15__Vfuncout[3U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__int_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_stride = 0x0020U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__cols = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__rows = 1U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__int_addr = 0x00000060U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_addr = 0x0000000000000080ULL;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__subop = 2U;
    VL_ZERO_W(128, __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout);
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[0U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[1U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[2U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[3U] = 0U;
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[1U] 
        = ((0x000fffffU & __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[1U]) 
           | ((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_addr 
                        << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__int_addr)))) 
              << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[2U] 
        = (((IData)(((__Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_addr 
                      << 0x00000014U) | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__int_addr)))) 
            >> 0x0000000cU) | ((IData)((((__Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_addr 
                                          << 0x00000014U) 
                                         | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__int_addr))) 
                                        >> 0x00000020U)) 
                               << 0x00000014U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[3U] 
        = (((0x000f0000U & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__subop) 
                            << 0x00000010U)) | ((IData)(
                                                        (((__Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_addr 
                                                           << 0x00000014U) 
                                                          | (QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__int_addr))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000000cU)) 
           | (0xfff00000U & (0x03000000U | (0xfff00000U 
                                            & ((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__subop) 
                                               << 0x00000010U)))));
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[0U] 
        = ((0x0000000fU & __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[0U]) 
           | ((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__rows)) 
                        << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__cols)) 
                                            << 0x00000018U) 
                                           | (QData)((IData)(
                                                             (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_stride) 
                                                               << 0x0000000cU) 
                                                              | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__int_stride))))))) 
              << 4U));
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[1U] 
        = ((0xfff00000U & __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[1U]) 
           | (((IData)((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__rows)) 
                         << 0x00000024U) | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__cols)) 
                                             << 0x00000018U) 
                                            | (QData)((IData)(
                                                              (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_stride) 
                                                                << 0x0000000cU) 
                                                               | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__int_stride))))))) 
               >> 0x0000001cU) | ((IData)(((((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__rows)) 
                                             << 0x00000024U) 
                                            | (((QData)((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__cols)) 
                                                << 0x00000018U) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__ext_stride) 
                                                                   << 0x0000000cU) 
                                                                  | (IData)(__Vfunc_dma_engine_tb__DOT__make_cmd__16__int_stride)))))) 
                                           >> 0x00000020U)) 
                                  << 4U)));
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[0U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[0U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[1U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[1U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[2U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[2U];
    __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[3U] 
        = __Vfunc_dma_engine_tb__DOT__make_cmd__16__c[3U];
    dma_engine_tb__DOT__c_st[0U] = __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[0U];
    dma_engine_tb__DOT__c_st[1U] = __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[1U];
    dma_engine_tb__DOT__c_st[2U] = __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[2U];
    dma_engine_tb__DOT__c_st[3U] = __Vfunc_dma_engine_tb__DOT__make_cmd__16__Vfuncout[3U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[0U] 
        = dma_engine_tb__DOT__c_ld[0U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[1U] 
        = dma_engine_tb__DOT__c_ld[1U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[2U] 
        = dma_engine_tb__DOT__c_ld[2U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[3U] 
        = dma_engine_tb__DOT__c_ld[3U];
    while ((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             175);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         176);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         176);
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[0U];
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[1U];
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[2U];
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = __Vtask_dma_engine_tb__DOT__issue_cmd__17__c[3U];
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         178);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         178);
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__18__tag = "T7 back-to-back LOAD"s;
    __Vtask_dma_engine_tb__DOT__wait_done__18____Vincrement1 = 0U;
    {
        __Vtask_dma_engine_tb__DOT__wait_done__18__cycles = 0U;
        while ((1U & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg)))) {
            Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                                 "@(posedge dma_engine_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dma_engine_tb.clk)", 
                                                                 "dma_engine_tb.sv", 
                                                                 162);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "dma_engine_tb.sv", 
                                                 162);
            __Vtask_dma_engine_tb__DOT__wait_done__18____Vincrement1 
                = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__wait_done__18__cycles);
            __Vtask_dma_engine_tb__DOT__wait_done__18__cycles 
                = __Vtask_dma_engine_tb__DOT__wait_done__18____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000001f4U, __Vtask_dma_engine_tb__DOT__wait_done__18____Vincrement1)))) {
                VL_WRITEF_NX("FAIL [%s] timeout after 500 cycles\n",1
                             , 'S',&(vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__18__tag));
                vlSelfRef.dma_engine_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__errors);
                goto __Vlabel4;
            }
        }
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             169);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             169);
        __Vlabel4: ;
    }
    __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[0U] 
        = dma_engine_tb__DOT__c_st[0U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[1U] 
        = dma_engine_tb__DOT__c_st[1U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[2U] 
        = dma_engine_tb__DOT__c_st[2U];
    __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[3U] 
        = dma_engine_tb__DOT__c_st[3U];
    while ((0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             175);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             175);
    }
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         176);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         176);
    vlSelfRef.dma_engine_tb__DOT__cmd[0U] = __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[0U];
    vlSelfRef.dma_engine_tb__DOT__cmd[1U] = __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[1U];
    vlSelfRef.dma_engine_tb__DOT__cmd[2U] = __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[2U];
    vlSelfRef.dma_engine_tb__DOT__cmd[3U] = __Vtask_dma_engine_tb__DOT__issue_cmd__19__c[3U];
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 1U;
    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                         "@(posedge dma_engine_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dma_engine_tb.clk)", 
                                                         "dma_engine_tb.sv", 
                                                         178);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "dma_engine_tb.sv", 
                                         178);
    vlSelfRef.dma_engine_tb__DOT__cmd_valid = 0U;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__20__tag = "T8 back-to-back STORE"s;
    __Vtask_dma_engine_tb__DOT__wait_done__20____Vincrement1 = 0U;
    {
        __Vtask_dma_engine_tb__DOT__wait_done__20__cycles = 0U;
        while ((1U & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg)))) {
            Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                                 "@(posedge dma_engine_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dma_engine_tb.clk)", 
                                                                 "dma_engine_tb.sv", 
                                                                 162);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "dma_engine_tb.sv", 
                                                 162);
            __Vtask_dma_engine_tb__DOT__wait_done__20____Vincrement1 
                = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__wait_done__20__cycles);
            __Vtask_dma_engine_tb__DOT__wait_done__20__cycles 
                = __Vtask_dma_engine_tb__DOT__wait_done__20____Vincrement1;
            if (VL_UNLIKELY((VL_LTS_III(32, 0x000001f4U, __Vtask_dma_engine_tb__DOT__wait_done__20____Vincrement1)))) {
                VL_WRITEF_NX("FAIL [%s] timeout after 500 cycles\n",1
                             , 'S',&(vlSelfRef.__Vtask_dma_engine_tb__DOT__wait_done__20__tag));
                vlSelfRef.dma_engine_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__errors);
                goto __Vlabel5;
            }
        }
        Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(vlSelf, 
                                                             "@(posedge dma_engine_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc180e617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma_engine_tb.clk)", 
                                                             "dma_engine_tb.sv", 
                                                             169);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             169);
        __Vlabel5: ;
    }
    VL_WRITEF_NX("PASS [T7/T8] back-to-back LOAD then STORE\n",0);
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits = 0U;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__total = 0U;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[__Vi0].clear();
    }
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[0U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_load_cmd;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[0U] = "load_cmd"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[1U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_store_cmd;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[1U] = "store_cmd"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[2U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_cmd_done;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[2U] = "cmd_done"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[3U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_write;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[3U] = "sram_write"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[4U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_read;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[4U] = "sram_read"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[5U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_read_ar;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[5U] = "axi_read_ar"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[6U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_write_aw;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[6U] = "axi_write_aw"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[7U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_backpressure;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[7U] = "backpressure"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[8U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_consecutive_cmds;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[8U] = "consecutive_cmds"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[9U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A2_ant;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[9U] = "A2_antecedent"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[10U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A3_ant;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[10U] = "A3_antecedent"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[11U] 
        = vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A5_ant;
    vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[11U] = "A5_antecedent"s;
    __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__total = 0x0000000cU;
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[0U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_8 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[0U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_8));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[1U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_9 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[1U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_9));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[2U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_10 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[2U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_10));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[3U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_11 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[3U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_11));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[4U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_12 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[4U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_12));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[5U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_13 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[5U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_13));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[6U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_14 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[6U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_14));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[7U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_15 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[7U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_15));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[8U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_16 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[8U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_16));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[9U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_17 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[9U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_17));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[10U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_18 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[10U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_18));
    }
    if (VL_LIKELY((__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hit_arr[11U]))) {
        __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits 
            = ((IData)(1U) + __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits);
    } else {
        __Vtemp_19 = vlSelfRef.__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__names[11U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_19));
    }
    VL_WRITEF_NX("Coverage: %0d/%0d bins (%.1f%%)\n",3
                 , '~',32,__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits
                 , '~',32,__Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__total
                 , 'D',((100.0 * VL_ISTOR_D_I(32, __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__hits)) 
                        / VL_ISTOR_D_I(32, __Vtask_dma_engine_tb__DOT__cov__DOT__print_coverage__21__total)));
    if (((0U == vlSelfRef.dma_engine_tb__DOT__errors) 
         & (0U == vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures))) {
        VL_WRITEF_NX("RESULT: PASS \342\200\224 all checks passed\n",0);
    } else {
        VL_WRITEF_NX("RESULT: FAIL \342\200\224 %0d errors, %0d assertion failures\n",2
                     , '~',32,vlSelfRef.dma_engine_tb__DOT__errors
                     , '~',32,vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures);
    }
    VL_FINISH_MT("dma_engine_tb.sv", 286, "");
    co_return;
}

VlCoroutine Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__1(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "dma_engine_tb.sv", 
                                             14);
        vlSelfRef.dma_engine_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__clk)));
    }
    co_return;
}

void Vdma_engine_tb___024root___eval_triggers_vec__act(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_triggers_vec__act\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.dma_engine_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.dma_engine_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__clk__0 
        = vlSelfRef.dma_engine_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__rst_n__0 
        = vlSelfRef.dma_engine_tb__DOT__rst_n;
}

bool Vdma_engine_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___trigger_anySet__act\n"); );
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

void Vdma_engine_tb___024root___nba_sequent__TOP__0(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___nba_sequent__TOP__0\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__dma_engine_tb__DOT__aw_accepted;
    __Vdly__dma_engine_tb__DOT__aw_accepted = 0;
    VlWide<8>/*255:0*/ __VdlyVal__dma_engine_tb__DOT__sram_mem__v0;
    VL_ZERO_W(256, __VdlyVal__dma_engine_tb__DOT__sram_mem__v0);
    CData/*5:0*/ __VdlyDim0__dma_engine_tb__DOT__sram_mem__v0;
    __VdlyDim0__dma_engine_tb__DOT__sram_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dma_engine_tb__DOT__sram_mem__v0;
    __VdlySet__dma_engine_tb__DOT__sram_mem__v0 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (vlSelfRef.dma_engine_tb__DOT__rst_n) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_we_reg) 
                              & (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_re_reg))))) {
                VL_WRITEF_NX("A1_sram_mutex: FAIL \342\200\224 we && re simultaneously at %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg) 
                              & (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg))))) {
                VL_WRITEF_NX("A4_axi_exclusive: FAIL at %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.dma_engine_tb__DOT__chk__DOT___Vpast_4_1)) 
                                       | (~ (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__done_reg)))))))) {
                VL_WRITEF_NX("A3_done_pulse: FAIL at %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.dma_engine_tb__DOT__chk__DOT___Vpast_4_1)) 
                                       | (0U == (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__state)))))))) {
                VL_WRITEF_NX("A5_ready_after_done: FAIL at %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.dma_engine_tb__DOT__chk__DOT___Vpast_2_1)) 
                                       | (0U != (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__state)))))))) {
                VL_WRITEF_NX("A2_cmd_ready_drops: FAIL at %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
    }
    vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_rvalid 
        = vlSelfRef.dma_engine_tb__DOT__axi_rvalid;
    vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_bvalid 
        = vlSelfRef.dma_engine_tb__DOT__axi_bvalid;
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[0U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[0U];
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[1U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[1U];
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[2U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[2U];
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[3U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[3U];
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[4U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[4U];
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[5U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[5U];
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[6U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[6U];
    vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[7U] 
        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[7U];
    __VdlySet__dma_engine_tb__DOT__sram_mem__v0 = 0U;
    __Vdly__dma_engine_tb__DOT__aw_accepted = vlSelfRef.dma_engine_tb__DOT__aw_accepted;
    vlSelfRef.__VdlySet__dma_engine_tb__DOT__ext_mem__v0 = 0U;
    vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures = 0U;
    if (vlSelfRef.dma_engine_tb__DOT__rst_n) {
        if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_read_ar = 1U;
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg) 
             & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg)))) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_store_cmd = 1U;
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__cmd_valid) 
             & (0U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state)))) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_load_cmd = 1U;
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__cmd_valid) 
             & (0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state)))) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_backpressure = 1U;
        }
        if (((0U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state)) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__cmd_valid))) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A2_ant = 1U;
        }
        if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_re_reg) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_read = 1U;
        }
        if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_we_reg) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_sram_write = 1U;
        }
        if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_cmd_done = 1U;
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A3_ant = 1U;
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__cov__DOT__prev_cmd_done) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__cmd_valid))) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_consecutive_cmds = 1U;
        }
        if (vlSelfRef.dma_engine_tb__DOT__cov__DOT__prev_cmd_done) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_A5_ant = 1U;
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_we_reg) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_re_reg))) {
            vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures);
        }
        if ((((IData)(vlSelfRef.dma_engine_tb__DOT__chk__DOT__prev_cmd_ready) 
              & (IData)(vlSelfRef.dma_engine_tb__DOT__chk__DOT__prev_cmd_valid)) 
             & (0U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state)))) {
            vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures);
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__chk__DOT__prev_cmd_done) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg))) {
            vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures);
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg))) {
            vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures);
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__chk__DOT__prev_cmd_done) 
             & (0U != (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state)))) {
            vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.dma_engine_tb__DOT__chk__DOT__assertion_failures);
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wlast_reg))) {
            vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_bvalid = 1U;
        }
        if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg) {
            vlSelfRef.dma_engine_tb__DOT__cov__DOT__cov_axi_write_aw = 1U;
            __Vdly__dma_engine_tb__DOT__aw_accepted = 1U;
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wlast_reg))) {
            if (vlSelfRef.dma_engine_tb__DOT__aw_accepted) {
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[0U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[0U];
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[1U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[1U];
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[2U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[2U];
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[3U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[3U];
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[4U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[4U];
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[5U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[5U];
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[6U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[6U];
                vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[7U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[7U];
                vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0 
                    = (0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__aw_addr_lat 
                                              >> 5U)));
                vlSelfRef.__VdlySet__dma_engine_tb__DOT__ext_mem__v0 = 1U;
                __Vdly__dma_engine_tb__DOT__aw_accepted = 0U;
            }
        }
        if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg) {
            vlSelfRef.dma_engine_tb__DOT__aw_addr_lat 
                = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awaddr_reg;
        }
        if (vlSelfRef.dma_engine_tb__DOT__axi_bvalid) {
            vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_bvalid = 0U;
        }
    } else {
        vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_bvalid = 0U;
        __Vdly__dma_engine_tb__DOT__aw_accepted = 0U;
    }
    if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_re_reg) {
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[0U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][0U];
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[1U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][1U];
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[2U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][2U];
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[3U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][3U];
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[4U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][4U];
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[5U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][5U];
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[6U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][6U];
        vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[7U] 
            = vlSelfRef.dma_engine_tb__DOT__sram_mem
            [(0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                             >> 5U))][7U];
    }
    if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_we_reg) {
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[0U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[0U];
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[1U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[1U];
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[2U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[2U];
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[3U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[3U];
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[4U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[4U];
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[5U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[5U];
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[6U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[6U];
        __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[7U] 
            = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[7U];
        __VdlyDim0__dma_engine_tb__DOT__sram_mem__v0 
            = (0x0000003fU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                              >> 5U));
        __VdlySet__dma_engine_tb__DOT__sram_mem__v0 = 1U;
    }
    vlSelfRef.dma_engine_tb__DOT__chk__DOT___Vpast_4_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__done_reg));
    vlSelfRef.dma_engine_tb__DOT__chk__DOT___Vpast_2_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__rst_n) 
           & ((0U == (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__state)) 
              & (IData)(vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__cmd_valid)));
    if (__VdlySet__dma_engine_tb__DOT__sram_mem__v0) {
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][0U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[0U];
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][1U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[1U];
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][2U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[2U];
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][3U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[3U];
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][4U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[4U];
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][5U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[5U];
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][6U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[6U];
        vlSelfRef.dma_engine_tb__DOT__sram_mem[__VdlyDim0__dma_engine_tb__DOT__sram_mem__v0][7U] 
            = __VdlyVal__dma_engine_tb__DOT__sram_mem__v0[7U];
    }
    vlSelfRef.dma_engine_tb__DOT__aw_accepted = __Vdly__dma_engine_tb__DOT__aw_accepted;
    vlSelfRef.dma_engine_tb__DOT__cov__DOT__prev_cmd_done 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg;
    vlSelfRef.dma_engine_tb__DOT__chk__DOT__prev_cmd_valid 
        = vlSelfRef.dma_engine_tb__DOT__cmd_valid;
    vlSelfRef.dma_engine_tb__DOT__chk__DOT__prev_cmd_ready 
        = (0U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state));
    vlSelfRef.dma_engine_tb__DOT__chk__DOT__prev_cmd_done 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg;
}

void Vdma_engine_tb___024root___nba_sequent__TOP__1(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___nba_sequent__TOP__1\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__state;
    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0;
    VlWide<8>/*255:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf;
    VL_ZERO_W(256, __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf);
    SData/*11:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__row_count;
    __Vdly__dma_engine_tb__DOT__dut__DOT__row_count = 0;
    SData/*11:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__col_count;
    __Vdly__dma_engine_tb__DOT__dut__DOT__col_count = 0;
    QData/*39:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr;
    __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr = 0;
    IData/*19:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr;
    __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr = 0;
    CData/*0:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg;
    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg = 0;
    CData/*0:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg;
    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg = 0;
    CData/*0:0*/ __Vdly__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg;
    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg = 0;
    // Body
    __Vdly__dma_engine_tb__DOT__dut__DOT__state = vlSelfRef.dma_engine_tb__DOT__dut__DOT__state;
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[0U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[0U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[1U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[1U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[2U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[2U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[3U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[3U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[4U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[4U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[5U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[5U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[6U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[6U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[7U] 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[7U];
    __Vdly__dma_engine_tb__DOT__dut__DOT__row_count 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__row_count;
    __Vdly__dma_engine_tb__DOT__dut__DOT__col_count 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__col_count;
    __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr = vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_ptr;
    __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr = vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_ptr;
    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg;
    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg;
    vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_rready_reg;
    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg;
    vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg;
    if (vlSelfRef.dma_engine_tb__DOT__rst_n) {
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_we_reg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_re_reg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg = 0U;
        if ((8U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0U;
                } else if ((1U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[0U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[0U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[1U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[1U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[2U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[2U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[3U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[3U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[4U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[4U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[5U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[5U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[6U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[6U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[7U] 
                        = vlSelfRef.dma_engine_tb__DOT__sram_rdata[7U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 7U;
                } else {
                    vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg = 1U;
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0U;
                }
            } else if ((2U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__row_count 
                        = (0x00000fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__row_count)));
                    __Vdly__dma_engine_tb__DOT__dut__DOT__col_count = 0U;
                    if (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__row_count) 
                         >= ((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__rows_cfg) 
                             - (IData)(1U)))) {
                        __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0x0cU;
                    } else {
                        __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr 
                            = (0x000000ffffffffffULL 
                               & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_base 
                                  + ((0x000000ffffffffffULL 
                                      & (1ULL + (QData)((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__row_count)))) 
                                     * (QData)((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_stride_cfg)))));
                        __Vdly__dma_engine_tb__DOT__dut__DOT__state 
                            = ((1U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type))
                                ? 2U : ((2U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type))
                                         ? 5U : 0x0cU));
                        __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr 
                            = (0x000fffffU & (vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_base 
                                              + (((IData)(1U) 
                                                  + (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__row_count)) 
                                                 * (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_stride_cfg))));
                    }
                } else {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__col_count 
                        = (0x00000fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__col_count)));
                    __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr 
                        = (0x000000ffffffffffULL & 
                           (0x0000000000000020ULL + vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_ptr));
                    __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr 
                        = (0x000fffffU & ((IData)(0x00000020U) 
                                          + vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_ptr));
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state 
                        = (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__col_count) 
                            >= ((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__cols_cfg) 
                                - (IData)(1U))) ? 0x0bU
                            : ((1U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type))
                                ? 2U : ((2U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type))
                                         ? 5U : 0x0cU)));
                }
            } else if ((1U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                if (vlSelfRef.dma_engine_tb__DOT__axi_bvalid) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0x0aU;
                }
            } else {
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[0U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[0U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[1U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[1U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[2U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[2U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[3U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[3U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[4U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[4U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[5U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[5U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[6U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[6U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg[7U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[7U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wlast_reg = 1U;
                __Vdly__dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg = 1U;
                if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg = 0U;
                    vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wlast_reg = 0U;
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 9U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg = 1U;
                    vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awaddr_reg 
                        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_ptr;
                    if (vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg) {
                        __Vdly__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg = 0U;
                        __Vdly__dma_engine_tb__DOT__dut__DOT__state = 8U;
                    }
                } else {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0x0dU;
                }
            } else if ((1U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_ptr;
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_re_reg = 1U;
                __Vdly__dma_engine_tb__DOT__dut__DOT__state = 6U;
            } else {
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_ptr;
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[0U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[0U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[1U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[1U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[2U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[2U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[3U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[3U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[4U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[4U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[5U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[5U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[6U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[6U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg[7U] 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[7U];
                vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_we_reg = 1U;
                __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0x0aU;
            }
        } else if ((2U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
                if (((IData)(vlSelfRef.dma_engine_tb__DOT__axi_rvalid) 
                     & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_rready_reg))) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[0U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[0U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[1U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[1U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[2U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[2U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[3U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[3U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[4U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[4U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[5U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[5U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[6U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[6U];
                    __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[7U] 
                        = vlSelfRef.dma_engine_tb__DOT__axi_rdata[7U];
                    vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg = 0U;
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 4U;
                }
            } else {
                __Vdly__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg = 1U;
                vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                    = vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_ptr;
                if (((IData)(vlSelfRef.dma_engine_tb__DOT__axi_arready) 
                     & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg))) {
                    __Vdly__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg = 0U;
                    vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg = 1U;
                    __Vdly__dma_engine_tb__DOT__dut__DOT__state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__state))) {
            __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr 
                = vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_base;
            __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr 
                = vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_base;
            __Vdly__dma_engine_tb__DOT__dut__DOT__row_count = 0U;
            __Vdly__dma_engine_tb__DOT__dut__DOT__col_count = 0U;
            __Vdly__dma_engine_tb__DOT__dut__DOT__state 
                = ((1U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type))
                    ? 2U : ((2U == (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type))
                             ? 5U : 0x0cU));
        } else if (vlSelfRef.dma_engine_tb__DOT__cmd_valid) {
            vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type 
                = (0x000000ffU & (vlSelfRef.dma_engine_tb__DOT__cmd[3U] 
                                  >> 0x00000010U));
            vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_base 
                = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.dma_engine_tb__DOT__cmd[3U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.dma_engine_tb__DOT__cmd[2U])) 
                                               >> 8U)));
            vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_base 
                = (0x000fffffU & ((vlSelfRef.dma_engine_tb__DOT__cmd[2U] 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.dma_engine_tb__DOT__cmd[1U] 
                                     >> 0x00000014U)));
            vlSelfRef.dma_engine_tb__DOT__dut__DOT__rows_cfg 
                = (0x00000fffU & (vlSelfRef.dma_engine_tb__DOT__cmd[1U] 
                                  >> 8U));
            vlSelfRef.dma_engine_tb__DOT__dut__DOT__cols_cfg 
                = (0x00000fffU & ((vlSelfRef.dma_engine_tb__DOT__cmd[1U] 
                                   << 4U) | (vlSelfRef.dma_engine_tb__DOT__cmd[0U] 
                                             >> 0x0000001cU)));
            vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_stride_cfg 
                = (0x00000fffU & (vlSelfRef.dma_engine_tb__DOT__cmd[0U] 
                                  >> 0x00000010U));
            vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_stride_cfg 
                = (0x00000fffU & (vlSelfRef.dma_engine_tb__DOT__cmd[0U] 
                                  >> 4U));
            __Vdly__dma_engine_tb__DOT__dut__DOT__state = 1U;
        }
    } else {
        __Vdly__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg = 0U;
        __Vdly__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg = 0U;
        __Vdly__dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg = 0U;
        __Vdly__dma_engine_tb__DOT__dut__DOT__state = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__op_type = 0U;
        __Vdly__dma_engine_tb__DOT__dut__DOT__row_count = 0U;
        __Vdly__dma_engine_tb__DOT__dut__DOT__col_count = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__rows_cfg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__cols_cfg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_stride_cfg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_stride_cfg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_base = 0ULL;
        __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr = 0ULL;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_base = 0U;
        __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr = 0U;
        VL_ASSIGN_W(256, __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf, Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_addr_reg = 0U;
        VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_wdata_reg, Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_we_reg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_re_reg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awaddr_reg = 0ULL;
        vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_araddr_reg = 0ULL;
        VL_ASSIGN_W(256, vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wdata_reg, Vdma_engine_tb__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wlast_reg = 0U;
        vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg = 0U;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg = 0U;
    }
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[0U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[0U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[1U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[1U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[2U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[2U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[3U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[3U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[4U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[4U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[5U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[5U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[6U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[6U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__data_buf[7U] 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__data_buf[7U];
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__row_count 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__row_count;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__col_count 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__col_count;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__ext_ptr 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__ext_ptr;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__int_ptr 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__int_ptr;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__axi_wvalid_reg;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__state = __Vdly__dma_engine_tb__DOT__dut__DOT__state;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg 
        = __Vdly__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg;
}

void Vdma_engine_tb___024root___nba_sequent__TOP__2(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___nba_sequent__TOP__2\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[0U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[0U];
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[1U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[1U];
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[2U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[2U];
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[3U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[3U];
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[4U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[4U];
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[5U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[5U];
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[6U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[6U];
    vlSelfRef.dma_engine_tb__DOT__sram_rdata[7U] = vlSelfRef.__Vdly__dma_engine_tb__DOT__sram_rdata[7U];
    vlSelfRef.dma_engine_tb__DOT__axi_bvalid = vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_bvalid;
    if (vlSelfRef.dma_engine_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_rready_reg) 
             & (~ (IData)(vlSelfRef.dma_engine_tb__DOT__axi_rvalid)))) {
            vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_rvalid = 1U;
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[0U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][0U];
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[1U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][1U];
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[2U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][2U];
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[3U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][3U];
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[4U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][4U];
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[5U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][5U];
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[6U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][6U];
            vlSelfRef.dma_engine_tb__DOT__axi_rdata[7U] 
                = vlSelfRef.dma_engine_tb__DOT__ext_mem
                [(0x0000003fU & (IData)((vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
                                         >> 5U)))][7U];
        }
        if (((IData)(vlSelfRef.dma_engine_tb__DOT__axi_rvalid) 
             & (IData)(vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_rready_reg))) {
            vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_rvalid = 0U;
        }
    } else {
        vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_rvalid = 0U;
    }
    vlSelfRef.dma_engine_tb__DOT__axi_rvalid = vlSelfRef.__Vdly__dma_engine_tb__DOT__axi_rvalid;
    if (vlSelfRef.__VdlySet__dma_engine_tb__DOT__ext_mem__v0) {
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][0U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[0U];
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][1U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[1U];
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][2U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[2U];
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][3U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[3U];
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][4U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[4U];
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][5U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[5U];
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][6U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[6U];
        vlSelfRef.dma_engine_tb__DOT__ext_mem[vlSelfRef.__VdlyDim0__dma_engine_tb__DOT__ext_mem__v0][7U] 
            = vlSelfRef.__VdlyVal__dma_engine_tb__DOT__ext_mem__v0[7U];
    }
}

void Vdma_engine_tb___024root___nba_sequent__TOP__3(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___nba_sequent__TOP__3\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
        = vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_araddr_reg;
    vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_rready_reg 
        = vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg;
}

void Vdma_engine_tb___024root___eval_nba(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_nba\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdma_engine_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdma_engine_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdma_engine_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_araddr_reg 
            = vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_araddr_reg;
        vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_rready_reg 
            = vlSelfRef.__Vdly__dma_engine_tb__DOT__dut__DOT__axi_rready_reg;
    }
}

void Vdma_engine_tb___024root___timing_ready(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___timing_ready\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc180e617__0.ready("@(posedge dma_engine_tb.clk)");
    }
}

void Vdma_engine_tb___024root___timing_resume(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___timing_resume\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc180e617__0.moveToResumeQueue(
                                                          "@(posedge dma_engine_tb.clk)");
    vlSelfRef.__VtrigSched_hc180e617__0.resume("@(posedge dma_engine_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdma_engine_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma_engine_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdma_engine_tb___024root___eval_phase__act(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_phase__act\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vdma_engine_tb___024root___eval_triggers_vec__act(vlSelf);
    Vdma_engine_tb___024root___timing_ready(vlSelf);
    Vdma_engine_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdma_engine_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdma_engine_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdma_engine_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vdma_engine_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vdma_engine_tb___024root___eval_phase__inact(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_phase__inact\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("dma_engine_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdma_engine_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdma_engine_tb___024root___eval_phase__nba(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_phase__nba\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdma_engine_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdma_engine_tb___024root___eval_nba(vlSelf);
        Vdma_engine_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdma_engine_tb___024root___sample(Vdma_engine_tb___024root* vlSelf);

void Vdma_engine_tb___024root___eval(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vdma_engine_tb___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdma_engine_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("dma_engine_tb.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("dma_engine_tb.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vdma_engine_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("dma_engine_tb.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vdma_engine_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vdma_engine_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vdma_engine_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0(Vdma_engine_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root____VbeforeTrig_hc180e617__0\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.dma_engine_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__dma_engine_tb__DOT__clk__0 
        = vlSelfRef.dma_engine_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc180e617__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vdma_engine_tb___024root___sample(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___sample\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_we_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_we_reg;
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__sram_re_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__sram_re_reg;
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__state 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__state;
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__done_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__done_reg;
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_arvalid_reg;
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg 
        = vlSelfRef.dma_engine_tb__DOT__dut__DOT__axi_awvalid_reg;
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__rst_n 
        = vlSelfRef.dma_engine_tb__DOT__rst_n;
    vlSelfRef.__Vsampled_TOP__dma_engine_tb__DOT__cmd_valid 
        = vlSelfRef.dma_engine_tb__DOT__cmd_valid;
}

#ifdef VL_DEBUG
void Vdma_engine_tb___024root___eval_debug_assertions(Vdma_engine_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma_engine_tb___024root___eval_debug_assertions\n"); );
    Vdma_engine_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
