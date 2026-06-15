// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmac_pe_tb.h for the primary calling header

#include "Vmac_pe_tb__pch.h"

VlCoroutine Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_pe_tb___024root* vlSelf);
VlCoroutine Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_pe_tb___024root* vlSelf);

void Vmac_pe_tb___024root___eval_initial(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_initial\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("mac_pe_tb.vcd"s);
    VL_PRINTF_MT("-Info: mac_pe_tb.sv:62: $dumpvar ignored, as Verilated without --trace\n");
    Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(Vmac_pe_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__0(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ mac_pe_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    mac_pe_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__0__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__0__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__1__en;
    __Vtask_mac_pe_tb__DOT__tick__1__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__1__lw;
    __Vtask_mac_pe_tb__DOT__tick__1__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__1__ca;
    __Vtask_mac_pe_tb__DOT__tick__1__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__1__wi;
    __Vtask_mac_pe_tb__DOT__tick__1__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__1__ai;
    __Vtask_mac_pe_tb__DOT__tick__1__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__1__pi;
    __Vtask_mac_pe_tb__DOT__tick__1__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__en;
    __Vtask_mac_pe_tb__DOT__ref_step__2__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__2__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__2__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__2__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__2__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__2__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__2__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__2__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__2__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__2__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__2__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__4__en;
    __Vtask_mac_pe_tb__DOT__tick__4__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__4__lw;
    __Vtask_mac_pe_tb__DOT__tick__4__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__4__ca;
    __Vtask_mac_pe_tb__DOT__tick__4__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__4__wi;
    __Vtask_mac_pe_tb__DOT__tick__4__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__4__ai;
    __Vtask_mac_pe_tb__DOT__tick__4__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__4__pi;
    __Vtask_mac_pe_tb__DOT__tick__4__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__en;
    __Vtask_mac_pe_tb__DOT__ref_step__5__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__5__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__5__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__5__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__5__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__5__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__5__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__5__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__5__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__5__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__5__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__7__en;
    __Vtask_mac_pe_tb__DOT__tick__7__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__7__lw;
    __Vtask_mac_pe_tb__DOT__tick__7__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__7__ca;
    __Vtask_mac_pe_tb__DOT__tick__7__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__7__wi;
    __Vtask_mac_pe_tb__DOT__tick__7__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__7__ai;
    __Vtask_mac_pe_tb__DOT__tick__7__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__7__pi;
    __Vtask_mac_pe_tb__DOT__tick__7__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__en;
    __Vtask_mac_pe_tb__DOT__ref_step__8__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__8__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__8__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__8__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__8__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__8__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__8__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__8__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__8__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__8__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__8__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__10__en;
    __Vtask_mac_pe_tb__DOT__tick__10__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__10__lw;
    __Vtask_mac_pe_tb__DOT__tick__10__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__10__ca;
    __Vtask_mac_pe_tb__DOT__tick__10__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__10__wi;
    __Vtask_mac_pe_tb__DOT__tick__10__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__10__ai;
    __Vtask_mac_pe_tb__DOT__tick__10__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__10__pi;
    __Vtask_mac_pe_tb__DOT__tick__10__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__en;
    __Vtask_mac_pe_tb__DOT__ref_step__11__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__11__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__11__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__11__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__11__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__11__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__11__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__11__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__11__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__11__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__11__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__12__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__12__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__13__en;
    __Vtask_mac_pe_tb__DOT__tick__13__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__13__lw;
    __Vtask_mac_pe_tb__DOT__tick__13__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__13__ca;
    __Vtask_mac_pe_tb__DOT__tick__13__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__13__wi;
    __Vtask_mac_pe_tb__DOT__tick__13__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__13__ai;
    __Vtask_mac_pe_tb__DOT__tick__13__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__13__pi;
    __Vtask_mac_pe_tb__DOT__tick__13__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__en;
    __Vtask_mac_pe_tb__DOT__ref_step__14__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__14__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__14__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__14__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__14__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__14__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__14__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__14__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__14__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__14__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__14__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__15__en;
    __Vtask_mac_pe_tb__DOT__tick__15__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__15__lw;
    __Vtask_mac_pe_tb__DOT__tick__15__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__15__ca;
    __Vtask_mac_pe_tb__DOT__tick__15__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__15__wi;
    __Vtask_mac_pe_tb__DOT__tick__15__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__15__ai;
    __Vtask_mac_pe_tb__DOT__tick__15__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__15__pi;
    __Vtask_mac_pe_tb__DOT__tick__15__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__en;
    __Vtask_mac_pe_tb__DOT__ref_step__16__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__16__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__16__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__16__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__16__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__16__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__16__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__16__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__16__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__16__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__16__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__18__en;
    __Vtask_mac_pe_tb__DOT__tick__18__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__18__lw;
    __Vtask_mac_pe_tb__DOT__tick__18__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__18__ca;
    __Vtask_mac_pe_tb__DOT__tick__18__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__18__wi;
    __Vtask_mac_pe_tb__DOT__tick__18__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__18__ai;
    __Vtask_mac_pe_tb__DOT__tick__18__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__18__pi;
    __Vtask_mac_pe_tb__DOT__tick__18__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__en;
    __Vtask_mac_pe_tb__DOT__ref_step__19__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__19__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__19__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__19__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__19__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__19__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__19__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__19__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__19__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__19__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__19__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__21__en;
    __Vtask_mac_pe_tb__DOT__tick__21__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__21__lw;
    __Vtask_mac_pe_tb__DOT__tick__21__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__21__ca;
    __Vtask_mac_pe_tb__DOT__tick__21__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__21__wi;
    __Vtask_mac_pe_tb__DOT__tick__21__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__21__ai;
    __Vtask_mac_pe_tb__DOT__tick__21__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__21__pi;
    __Vtask_mac_pe_tb__DOT__tick__21__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__en;
    __Vtask_mac_pe_tb__DOT__ref_step__22__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__22__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__22__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__22__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__22__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__22__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__22__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__22__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__22__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__22__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__22__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__24__en;
    __Vtask_mac_pe_tb__DOT__tick__24__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__24__lw;
    __Vtask_mac_pe_tb__DOT__tick__24__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__24__ca;
    __Vtask_mac_pe_tb__DOT__tick__24__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__24__wi;
    __Vtask_mac_pe_tb__DOT__tick__24__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__24__ai;
    __Vtask_mac_pe_tb__DOT__tick__24__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__24__pi;
    __Vtask_mac_pe_tb__DOT__tick__24__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__en;
    __Vtask_mac_pe_tb__DOT__ref_step__25__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__25__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__25__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__25__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__25__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__25__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__25__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__25__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__25__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__25__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__25__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__27__en;
    __Vtask_mac_pe_tb__DOT__tick__27__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__27__lw;
    __Vtask_mac_pe_tb__DOT__tick__27__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__27__ca;
    __Vtask_mac_pe_tb__DOT__tick__27__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__27__wi;
    __Vtask_mac_pe_tb__DOT__tick__27__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__27__ai;
    __Vtask_mac_pe_tb__DOT__tick__27__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__27__pi;
    __Vtask_mac_pe_tb__DOT__tick__27__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__en;
    __Vtask_mac_pe_tb__DOT__ref_step__28__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__28__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__28__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__28__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__28__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__28__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__28__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__28__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__28__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__28__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__28__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__30__en;
    __Vtask_mac_pe_tb__DOT__tick__30__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__30__lw;
    __Vtask_mac_pe_tb__DOT__tick__30__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__30__ca;
    __Vtask_mac_pe_tb__DOT__tick__30__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__30__wi;
    __Vtask_mac_pe_tb__DOT__tick__30__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__30__ai;
    __Vtask_mac_pe_tb__DOT__tick__30__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__30__pi;
    __Vtask_mac_pe_tb__DOT__tick__30__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__en;
    __Vtask_mac_pe_tb__DOT__ref_step__31__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__31__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__31__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__31__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__31__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__31__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__31__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__31__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__31__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__31__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__31__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__32__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__32__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__33__en;
    __Vtask_mac_pe_tb__DOT__tick__33__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__33__lw;
    __Vtask_mac_pe_tb__DOT__tick__33__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__33__ca;
    __Vtask_mac_pe_tb__DOT__tick__33__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__33__wi;
    __Vtask_mac_pe_tb__DOT__tick__33__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__33__ai;
    __Vtask_mac_pe_tb__DOT__tick__33__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__33__pi;
    __Vtask_mac_pe_tb__DOT__tick__33__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__en;
    __Vtask_mac_pe_tb__DOT__ref_step__34__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__34__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__34__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__34__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__34__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__34__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__34__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__34__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__34__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__34__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__34__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__35__en;
    __Vtask_mac_pe_tb__DOT__tick__35__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__35__lw;
    __Vtask_mac_pe_tb__DOT__tick__35__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__35__ca;
    __Vtask_mac_pe_tb__DOT__tick__35__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__35__wi;
    __Vtask_mac_pe_tb__DOT__tick__35__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__35__ai;
    __Vtask_mac_pe_tb__DOT__tick__35__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__35__pi;
    __Vtask_mac_pe_tb__DOT__tick__35__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__en;
    __Vtask_mac_pe_tb__DOT__ref_step__36__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__36__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__36__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__36__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__36__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__36__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__36__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__36__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__36__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__36__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__36__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__37__en;
    __Vtask_mac_pe_tb__DOT__tick__37__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__37__lw;
    __Vtask_mac_pe_tb__DOT__tick__37__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__37__ca;
    __Vtask_mac_pe_tb__DOT__tick__37__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__37__wi;
    __Vtask_mac_pe_tb__DOT__tick__37__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__37__ai;
    __Vtask_mac_pe_tb__DOT__tick__37__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__37__pi;
    __Vtask_mac_pe_tb__DOT__tick__37__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__en;
    __Vtask_mac_pe_tb__DOT__ref_step__38__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__38__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__38__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__38__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__38__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__38__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__38__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__38__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__38__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__38__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__38__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__40__en;
    __Vtask_mac_pe_tb__DOT__tick__40__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__40__lw;
    __Vtask_mac_pe_tb__DOT__tick__40__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__40__ca;
    __Vtask_mac_pe_tb__DOT__tick__40__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__40__wi;
    __Vtask_mac_pe_tb__DOT__tick__40__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__40__ai;
    __Vtask_mac_pe_tb__DOT__tick__40__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__40__pi;
    __Vtask_mac_pe_tb__DOT__tick__40__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__en;
    __Vtask_mac_pe_tb__DOT__ref_step__41__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__41__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__41__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__41__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__41__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__41__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__41__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__41__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__41__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__41__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__41__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__42__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__42__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__43__en;
    __Vtask_mac_pe_tb__DOT__tick__43__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__43__lw;
    __Vtask_mac_pe_tb__DOT__tick__43__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__43__ca;
    __Vtask_mac_pe_tb__DOT__tick__43__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__43__wi;
    __Vtask_mac_pe_tb__DOT__tick__43__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__43__ai;
    __Vtask_mac_pe_tb__DOT__tick__43__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__43__pi;
    __Vtask_mac_pe_tb__DOT__tick__43__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__en;
    __Vtask_mac_pe_tb__DOT__ref_step__44__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__44__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__44__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__44__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__44__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__44__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__44__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__44__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__44__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__44__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__44__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__45__en;
    __Vtask_mac_pe_tb__DOT__tick__45__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__45__lw;
    __Vtask_mac_pe_tb__DOT__tick__45__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__45__ca;
    __Vtask_mac_pe_tb__DOT__tick__45__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__45__wi;
    __Vtask_mac_pe_tb__DOT__tick__45__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__45__ai;
    __Vtask_mac_pe_tb__DOT__tick__45__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__45__pi;
    __Vtask_mac_pe_tb__DOT__tick__45__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__en;
    __Vtask_mac_pe_tb__DOT__ref_step__46__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__46__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__46__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__46__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__46__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__46__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__46__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__46__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__46__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__46__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__46__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__47__en;
    __Vtask_mac_pe_tb__DOT__tick__47__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__47__lw;
    __Vtask_mac_pe_tb__DOT__tick__47__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__47__ca;
    __Vtask_mac_pe_tb__DOT__tick__47__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__47__wi;
    __Vtask_mac_pe_tb__DOT__tick__47__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__47__ai;
    __Vtask_mac_pe_tb__DOT__tick__47__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__47__pi;
    __Vtask_mac_pe_tb__DOT__tick__47__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__en;
    __Vtask_mac_pe_tb__DOT__ref_step__48__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__48__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__48__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__48__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__48__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__48__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__48__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__48__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__48__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__48__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__48__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__49__en;
    __Vtask_mac_pe_tb__DOT__tick__49__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__49__lw;
    __Vtask_mac_pe_tb__DOT__tick__49__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__49__ca;
    __Vtask_mac_pe_tb__DOT__tick__49__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__49__wi;
    __Vtask_mac_pe_tb__DOT__tick__49__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__49__ai;
    __Vtask_mac_pe_tb__DOT__tick__49__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__49__pi;
    __Vtask_mac_pe_tb__DOT__tick__49__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__en;
    __Vtask_mac_pe_tb__DOT__ref_step__50__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__50__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__50__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__50__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__50__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__50__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__50__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__50__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__50__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__50__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__50__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__51__en;
    __Vtask_mac_pe_tb__DOT__tick__51__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__51__lw;
    __Vtask_mac_pe_tb__DOT__tick__51__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__51__ca;
    __Vtask_mac_pe_tb__DOT__tick__51__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__51__wi;
    __Vtask_mac_pe_tb__DOT__tick__51__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__51__ai;
    __Vtask_mac_pe_tb__DOT__tick__51__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__51__pi;
    __Vtask_mac_pe_tb__DOT__tick__51__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__en;
    __Vtask_mac_pe_tb__DOT__ref_step__52__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__52__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__52__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__52__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__52__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__52__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__52__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__52__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__52__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__52__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__52__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__53__en;
    __Vtask_mac_pe_tb__DOT__tick__53__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__53__lw;
    __Vtask_mac_pe_tb__DOT__tick__53__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__53__ca;
    __Vtask_mac_pe_tb__DOT__tick__53__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__53__wi;
    __Vtask_mac_pe_tb__DOT__tick__53__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__53__ai;
    __Vtask_mac_pe_tb__DOT__tick__53__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__53__pi;
    __Vtask_mac_pe_tb__DOT__tick__53__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__en;
    __Vtask_mac_pe_tb__DOT__ref_step__54__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__54__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__54__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__54__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__54__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__54__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__54__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__54__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__54__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__54__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__54__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__56__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__56__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__57__en;
    __Vtask_mac_pe_tb__DOT__tick__57__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__57__lw;
    __Vtask_mac_pe_tb__DOT__tick__57__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__57__ca;
    __Vtask_mac_pe_tb__DOT__tick__57__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__57__wi;
    __Vtask_mac_pe_tb__DOT__tick__57__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__57__ai;
    __Vtask_mac_pe_tb__DOT__tick__57__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__57__pi;
    __Vtask_mac_pe_tb__DOT__tick__57__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__en;
    __Vtask_mac_pe_tb__DOT__ref_step__58__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__58__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__58__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__58__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__58__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__58__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__58__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__58__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__58__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__58__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__58__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__59__en;
    __Vtask_mac_pe_tb__DOT__tick__59__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__59__lw;
    __Vtask_mac_pe_tb__DOT__tick__59__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__59__ca;
    __Vtask_mac_pe_tb__DOT__tick__59__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__59__wi;
    __Vtask_mac_pe_tb__DOT__tick__59__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__59__ai;
    __Vtask_mac_pe_tb__DOT__tick__59__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__59__pi;
    __Vtask_mac_pe_tb__DOT__tick__59__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__en;
    __Vtask_mac_pe_tb__DOT__ref_step__60__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__60__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__60__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__60__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__60__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__60__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__60__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__60__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__60__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__60__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__60__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__61__en;
    __Vtask_mac_pe_tb__DOT__tick__61__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__61__lw;
    __Vtask_mac_pe_tb__DOT__tick__61__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__61__ca;
    __Vtask_mac_pe_tb__DOT__tick__61__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__61__wi;
    __Vtask_mac_pe_tb__DOT__tick__61__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__61__ai;
    __Vtask_mac_pe_tb__DOT__tick__61__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__61__pi;
    __Vtask_mac_pe_tb__DOT__tick__61__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__en;
    __Vtask_mac_pe_tb__DOT__ref_step__62__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__62__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__62__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__62__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__62__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__62__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__62__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__62__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__62__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__62__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__62__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__64__en;
    __Vtask_mac_pe_tb__DOT__tick__64__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__64__lw;
    __Vtask_mac_pe_tb__DOT__tick__64__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__64__ca;
    __Vtask_mac_pe_tb__DOT__tick__64__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__64__wi;
    __Vtask_mac_pe_tb__DOT__tick__64__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__64__ai;
    __Vtask_mac_pe_tb__DOT__tick__64__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__64__pi;
    __Vtask_mac_pe_tb__DOT__tick__64__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__en;
    __Vtask_mac_pe_tb__DOT__ref_step__65__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__65__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__65__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__65__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__65__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__65__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__65__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__65__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__65__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__65__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__65__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__67__en;
    __Vtask_mac_pe_tb__DOT__tick__67__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__67__lw;
    __Vtask_mac_pe_tb__DOT__tick__67__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__67__ca;
    __Vtask_mac_pe_tb__DOT__tick__67__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__67__wi;
    __Vtask_mac_pe_tb__DOT__tick__67__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__67__ai;
    __Vtask_mac_pe_tb__DOT__tick__67__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__67__pi;
    __Vtask_mac_pe_tb__DOT__tick__67__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__en;
    __Vtask_mac_pe_tb__DOT__ref_step__68__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__68__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__68__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__68__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__68__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__68__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__68__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__68__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__68__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__68__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__68__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__69__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__69__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__70__en;
    __Vtask_mac_pe_tb__DOT__tick__70__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__70__lw;
    __Vtask_mac_pe_tb__DOT__tick__70__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__70__ca;
    __Vtask_mac_pe_tb__DOT__tick__70__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__70__wi;
    __Vtask_mac_pe_tb__DOT__tick__70__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__70__ai;
    __Vtask_mac_pe_tb__DOT__tick__70__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__70__pi;
    __Vtask_mac_pe_tb__DOT__tick__70__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__en;
    __Vtask_mac_pe_tb__DOT__ref_step__71__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__71__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__71__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__71__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__71__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__71__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__71__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__71__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__71__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__71__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__71__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__72__en;
    __Vtask_mac_pe_tb__DOT__tick__72__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__72__lw;
    __Vtask_mac_pe_tb__DOT__tick__72__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__72__ca;
    __Vtask_mac_pe_tb__DOT__tick__72__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__72__wi;
    __Vtask_mac_pe_tb__DOT__tick__72__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__72__ai;
    __Vtask_mac_pe_tb__DOT__tick__72__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__72__pi;
    __Vtask_mac_pe_tb__DOT__tick__72__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__en;
    __Vtask_mac_pe_tb__DOT__ref_step__73__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__73__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__73__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__73__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__73__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__73__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__73__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__73__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__73__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__73__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__73__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__74__en;
    __Vtask_mac_pe_tb__DOT__tick__74__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__74__lw;
    __Vtask_mac_pe_tb__DOT__tick__74__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__74__ca;
    __Vtask_mac_pe_tb__DOT__tick__74__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__74__wi;
    __Vtask_mac_pe_tb__DOT__tick__74__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__74__ai;
    __Vtask_mac_pe_tb__DOT__tick__74__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__74__pi;
    __Vtask_mac_pe_tb__DOT__tick__74__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__en;
    __Vtask_mac_pe_tb__DOT__ref_step__75__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__75__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__75__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__75__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__75__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__75__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__75__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__75__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__75__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__75__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__75__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__77__en;
    __Vtask_mac_pe_tb__DOT__tick__77__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__77__lw;
    __Vtask_mac_pe_tb__DOT__tick__77__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__77__ca;
    __Vtask_mac_pe_tb__DOT__tick__77__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__77__wi;
    __Vtask_mac_pe_tb__DOT__tick__77__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__77__ai;
    __Vtask_mac_pe_tb__DOT__tick__77__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__77__pi;
    __Vtask_mac_pe_tb__DOT__tick__77__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__en;
    __Vtask_mac_pe_tb__DOT__ref_step__78__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__78__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__78__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__78__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__78__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__78__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__78__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__78__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__78__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__78__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__78__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__79__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__79__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__80__en;
    __Vtask_mac_pe_tb__DOT__tick__80__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__80__lw;
    __Vtask_mac_pe_tb__DOT__tick__80__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__80__ca;
    __Vtask_mac_pe_tb__DOT__tick__80__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__80__wi;
    __Vtask_mac_pe_tb__DOT__tick__80__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__80__ai;
    __Vtask_mac_pe_tb__DOT__tick__80__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__80__pi;
    __Vtask_mac_pe_tb__DOT__tick__80__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__en;
    __Vtask_mac_pe_tb__DOT__ref_step__81__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__81__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__81__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__81__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__81__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__81__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__81__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__81__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__81__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__81__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__81__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__82__en;
    __Vtask_mac_pe_tb__DOT__tick__82__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__82__lw;
    __Vtask_mac_pe_tb__DOT__tick__82__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__82__ca;
    __Vtask_mac_pe_tb__DOT__tick__82__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__82__wi;
    __Vtask_mac_pe_tb__DOT__tick__82__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__82__ai;
    __Vtask_mac_pe_tb__DOT__tick__82__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__82__pi;
    __Vtask_mac_pe_tb__DOT__tick__82__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__en;
    __Vtask_mac_pe_tb__DOT__ref_step__83__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__83__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__83__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__83__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__83__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__83__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__83__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__83__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__83__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__83__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__83__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__84__en;
    __Vtask_mac_pe_tb__DOT__tick__84__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__84__lw;
    __Vtask_mac_pe_tb__DOT__tick__84__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__84__ca;
    __Vtask_mac_pe_tb__DOT__tick__84__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__84__wi;
    __Vtask_mac_pe_tb__DOT__tick__84__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__84__ai;
    __Vtask_mac_pe_tb__DOT__tick__84__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__84__pi;
    __Vtask_mac_pe_tb__DOT__tick__84__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__en;
    __Vtask_mac_pe_tb__DOT__ref_step__85__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__85__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__85__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__85__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__85__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__85__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__85__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__85__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__85__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__85__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__85__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__87__en;
    __Vtask_mac_pe_tb__DOT__tick__87__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__87__lw;
    __Vtask_mac_pe_tb__DOT__tick__87__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__87__ca;
    __Vtask_mac_pe_tb__DOT__tick__87__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__87__wi;
    __Vtask_mac_pe_tb__DOT__tick__87__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__87__ai;
    __Vtask_mac_pe_tb__DOT__tick__87__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__87__pi;
    __Vtask_mac_pe_tb__DOT__tick__87__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__en;
    __Vtask_mac_pe_tb__DOT__ref_step__88__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__88__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__88__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__88__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__88__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__88__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__88__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__88__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__88__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__88__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__88__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__89__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__89__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__90__en;
    __Vtask_mac_pe_tb__DOT__tick__90__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__90__lw;
    __Vtask_mac_pe_tb__DOT__tick__90__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__90__ca;
    __Vtask_mac_pe_tb__DOT__tick__90__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__90__wi;
    __Vtask_mac_pe_tb__DOT__tick__90__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__90__ai;
    __Vtask_mac_pe_tb__DOT__tick__90__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__90__pi;
    __Vtask_mac_pe_tb__DOT__tick__90__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__en;
    __Vtask_mac_pe_tb__DOT__ref_step__91__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__91__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__91__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__91__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__91__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__91__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__91__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__91__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__91__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__91__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__91__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__92__en;
    __Vtask_mac_pe_tb__DOT__tick__92__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__92__lw;
    __Vtask_mac_pe_tb__DOT__tick__92__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__92__ca;
    __Vtask_mac_pe_tb__DOT__tick__92__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__92__wi;
    __Vtask_mac_pe_tb__DOT__tick__92__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__92__ai;
    __Vtask_mac_pe_tb__DOT__tick__92__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__92__pi;
    __Vtask_mac_pe_tb__DOT__tick__92__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__en;
    __Vtask_mac_pe_tb__DOT__ref_step__93__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__93__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__93__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__93__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__93__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__93__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__93__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__93__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__93__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__93__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__93__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__94__en;
    __Vtask_mac_pe_tb__DOT__tick__94__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__94__lw;
    __Vtask_mac_pe_tb__DOT__tick__94__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__94__ca;
    __Vtask_mac_pe_tb__DOT__tick__94__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__94__wi;
    __Vtask_mac_pe_tb__DOT__tick__94__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__94__ai;
    __Vtask_mac_pe_tb__DOT__tick__94__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__94__pi;
    __Vtask_mac_pe_tb__DOT__tick__94__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__en;
    __Vtask_mac_pe_tb__DOT__ref_step__95__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__95__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__95__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__95__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__95__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__95__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__95__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__95__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__95__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__95__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__95__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__97__en;
    __Vtask_mac_pe_tb__DOT__tick__97__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__97__lw;
    __Vtask_mac_pe_tb__DOT__tick__97__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__97__ca;
    __Vtask_mac_pe_tb__DOT__tick__97__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__97__wi;
    __Vtask_mac_pe_tb__DOT__tick__97__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__97__ai;
    __Vtask_mac_pe_tb__DOT__tick__97__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__97__pi;
    __Vtask_mac_pe_tb__DOT__tick__97__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__en;
    __Vtask_mac_pe_tb__DOT__ref_step__98__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__98__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__98__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__98__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__98__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__98__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__98__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__98__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__98__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__98__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__98__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__99__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__99__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__100__en;
    __Vtask_mac_pe_tb__DOT__tick__100__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__100__lw;
    __Vtask_mac_pe_tb__DOT__tick__100__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__100__ca;
    __Vtask_mac_pe_tb__DOT__tick__100__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__100__wi;
    __Vtask_mac_pe_tb__DOT__tick__100__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__100__ai;
    __Vtask_mac_pe_tb__DOT__tick__100__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__100__pi;
    __Vtask_mac_pe_tb__DOT__tick__100__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__en;
    __Vtask_mac_pe_tb__DOT__ref_step__101__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__101__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__101__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__101__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__101__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__101__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__101__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__101__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__101__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__101__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__101__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__102__en;
    __Vtask_mac_pe_tb__DOT__tick__102__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__102__lw;
    __Vtask_mac_pe_tb__DOT__tick__102__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__102__ca;
    __Vtask_mac_pe_tb__DOT__tick__102__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__102__wi;
    __Vtask_mac_pe_tb__DOT__tick__102__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__102__ai;
    __Vtask_mac_pe_tb__DOT__tick__102__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__102__pi;
    __Vtask_mac_pe_tb__DOT__tick__102__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__en;
    __Vtask_mac_pe_tb__DOT__ref_step__103__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__103__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__103__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__103__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__103__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__103__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__103__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__103__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__103__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__103__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__103__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__104__en;
    __Vtask_mac_pe_tb__DOT__tick__104__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__104__lw;
    __Vtask_mac_pe_tb__DOT__tick__104__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__104__ca;
    __Vtask_mac_pe_tb__DOT__tick__104__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__104__wi;
    __Vtask_mac_pe_tb__DOT__tick__104__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__104__ai;
    __Vtask_mac_pe_tb__DOT__tick__104__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__104__pi;
    __Vtask_mac_pe_tb__DOT__tick__104__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__en;
    __Vtask_mac_pe_tb__DOT__ref_step__105__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__105__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__105__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__105__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__105__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__105__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__105__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__105__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__105__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__105__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__105__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__107__en;
    __Vtask_mac_pe_tb__DOT__tick__107__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__107__lw;
    __Vtask_mac_pe_tb__DOT__tick__107__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__107__ca;
    __Vtask_mac_pe_tb__DOT__tick__107__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__107__wi;
    __Vtask_mac_pe_tb__DOT__tick__107__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__107__ai;
    __Vtask_mac_pe_tb__DOT__tick__107__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__107__pi;
    __Vtask_mac_pe_tb__DOT__tick__107__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__en;
    __Vtask_mac_pe_tb__DOT__ref_step__108__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__108__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__108__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__108__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__108__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__108__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__108__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__108__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__108__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__108__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__108__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__109__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__109__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__110__en;
    __Vtask_mac_pe_tb__DOT__tick__110__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__110__lw;
    __Vtask_mac_pe_tb__DOT__tick__110__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__110__ca;
    __Vtask_mac_pe_tb__DOT__tick__110__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__110__wi;
    __Vtask_mac_pe_tb__DOT__tick__110__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__110__ai;
    __Vtask_mac_pe_tb__DOT__tick__110__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__110__pi;
    __Vtask_mac_pe_tb__DOT__tick__110__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__en;
    __Vtask_mac_pe_tb__DOT__ref_step__111__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__111__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__111__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__111__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__111__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__111__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__111__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__111__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__111__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__111__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__111__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__113__en;
    __Vtask_mac_pe_tb__DOT__tick__113__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__113__lw;
    __Vtask_mac_pe_tb__DOT__tick__113__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__113__ca;
    __Vtask_mac_pe_tb__DOT__tick__113__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__113__wi;
    __Vtask_mac_pe_tb__DOT__tick__113__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__113__ai;
    __Vtask_mac_pe_tb__DOT__tick__113__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__113__pi;
    __Vtask_mac_pe_tb__DOT__tick__113__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__en;
    __Vtask_mac_pe_tb__DOT__ref_step__114__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__114__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__114__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__114__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__114__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__114__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__114__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__114__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__114__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__114__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__114__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__116__en;
    __Vtask_mac_pe_tb__DOT__tick__116__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__116__lw;
    __Vtask_mac_pe_tb__DOT__tick__116__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__116__ca;
    __Vtask_mac_pe_tb__DOT__tick__116__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__116__wi;
    __Vtask_mac_pe_tb__DOT__tick__116__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__116__ai;
    __Vtask_mac_pe_tb__DOT__tick__116__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__116__pi;
    __Vtask_mac_pe_tb__DOT__tick__116__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__en;
    __Vtask_mac_pe_tb__DOT__ref_step__117__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__117__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__117__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__117__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__117__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__117__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__117__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__117__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__117__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__117__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__117__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__118__en;
    __Vtask_mac_pe_tb__DOT__tick__118__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__118__lw;
    __Vtask_mac_pe_tb__DOT__tick__118__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__118__ca;
    __Vtask_mac_pe_tb__DOT__tick__118__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__118__wi;
    __Vtask_mac_pe_tb__DOT__tick__118__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__118__ai;
    __Vtask_mac_pe_tb__DOT__tick__118__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__118__pi;
    __Vtask_mac_pe_tb__DOT__tick__118__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__en;
    __Vtask_mac_pe_tb__DOT__ref_step__119__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__119__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__119__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__119__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__119__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__119__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__119__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__119__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__119__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__119__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__119__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__121__en;
    __Vtask_mac_pe_tb__DOT__tick__121__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__121__lw;
    __Vtask_mac_pe_tb__DOT__tick__121__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__121__ca;
    __Vtask_mac_pe_tb__DOT__tick__121__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__121__wi;
    __Vtask_mac_pe_tb__DOT__tick__121__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__121__ai;
    __Vtask_mac_pe_tb__DOT__tick__121__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__121__pi;
    __Vtask_mac_pe_tb__DOT__tick__121__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__en;
    __Vtask_mac_pe_tb__DOT__ref_step__122__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__122__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__122__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__122__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__122__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__122__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__122__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__122__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__122__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__122__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__122__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__reset_dut__123__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_mac_pe_tb__DOT__reset_dut__123__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__124__en;
    __Vtask_mac_pe_tb__DOT__tick__124__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__124__lw;
    __Vtask_mac_pe_tb__DOT__tick__124__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__124__ca;
    __Vtask_mac_pe_tb__DOT__tick__124__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__124__wi;
    __Vtask_mac_pe_tb__DOT__tick__124__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__124__ai;
    __Vtask_mac_pe_tb__DOT__tick__124__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__124__pi;
    __Vtask_mac_pe_tb__DOT__tick__124__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__en;
    __Vtask_mac_pe_tb__DOT__ref_step__125__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__125__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__125__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__125__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__125__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__125__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__125__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__125__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__125__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__125__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__125__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__126__en;
    __Vtask_mac_pe_tb__DOT__tick__126__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__126__lw;
    __Vtask_mac_pe_tb__DOT__tick__126__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__126__ca;
    __Vtask_mac_pe_tb__DOT__tick__126__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__126__wi;
    __Vtask_mac_pe_tb__DOT__tick__126__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__126__ai;
    __Vtask_mac_pe_tb__DOT__tick__126__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__126__pi;
    __Vtask_mac_pe_tb__DOT__tick__126__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__en;
    __Vtask_mac_pe_tb__DOT__ref_step__127__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__127__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__127__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__127__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__127__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__127__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__127__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__127__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__127__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__127__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__127__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__128__en;
    __Vtask_mac_pe_tb__DOT__tick__128__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__128__lw;
    __Vtask_mac_pe_tb__DOT__tick__128__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__128__ca;
    __Vtask_mac_pe_tb__DOT__tick__128__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__128__wi;
    __Vtask_mac_pe_tb__DOT__tick__128__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__128__ai;
    __Vtask_mac_pe_tb__DOT__tick__128__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__128__pi;
    __Vtask_mac_pe_tb__DOT__tick__128__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__en;
    __Vtask_mac_pe_tb__DOT__ref_step__129__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__129__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__129__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__129__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__129__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__129__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__129__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__129__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__129__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__129__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__129__prod_ext = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__131__en;
    __Vtask_mac_pe_tb__DOT__tick__131__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__131__lw;
    __Vtask_mac_pe_tb__DOT__tick__131__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__tick__131__ca;
    __Vtask_mac_pe_tb__DOT__tick__131__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__131__wi;
    __Vtask_mac_pe_tb__DOT__tick__131__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__tick__131__ai;
    __Vtask_mac_pe_tb__DOT__tick__131__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__tick__131__pi;
    __Vtask_mac_pe_tb__DOT__tick__131__pi = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__en;
    __Vtask_mac_pe_tb__DOT__ref_step__132__en = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__132__lw = 0;
    CData/*0:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__132__ca = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__132__wi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__132__ai = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__132__pi = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__a_s;
    __Vtask_mac_pe_tb__DOT__ref_step__132__a_s = 0;
    CData/*7:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__w_s;
    __Vtask_mac_pe_tb__DOT__ref_step__132__w_s = 0;
    SData/*15:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__prod;
    __Vtask_mac_pe_tb__DOT__ref_step__132__prod = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__ref_step__132__prod_ext;
    __Vtask_mac_pe_tb__DOT__ref_step__132__prod_ext = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits = 0;
    IData/*31:0*/ __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__total;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__total = 0;
    VlUnpacked<CData/*0:0*/, 18> __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr;
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[__Vi0] = 0;
    }
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
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
    // Body
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
    __Vtask_mac_pe_tb__DOT__reset_dut__0__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__0__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__0__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__0__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    if (VL_UNLIKELY((((0U != (IData)(vlSelfRef.mac_pe_tb__DOT__act_out)) 
                      | (0U != vlSelfRef.mac_pe_tb__DOT__psum_out))))) {
        VL_WRITEF_NX("FAIL [T1] post-reset: act_out=%0d psum_out=%0d\n",2
                     , '#',8,vlSelfRef.mac_pe_tb__DOT__act_out
                     , '#',32,vlSelfRef.mac_pe_tb__DOT__psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    __Vtask_mac_pe_tb__DOT__tick__1__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__1__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__1__wi = 5U;
    __Vtask_mac_pe_tb__DOT__tick__1__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__1__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__1__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__1__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__1__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__1__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__1__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__1__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__1__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__2__pi = __Vtask_mac_pe_tb__DOT__tick__1__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__2__ai = __Vtask_mac_pe_tb__DOT__tick__1__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__2__wi = __Vtask_mac_pe_tb__DOT__tick__1__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__2__ca = __Vtask_mac_pe_tb__DOT__tick__1__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__2__lw = __Vtask_mac_pe_tb__DOT__tick__1__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__2__en = __Vtask_mac_pe_tb__DOT__tick__1__en;
    __Vtask_mac_pe_tb__DOT__ref_step__2__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__2__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__2__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__2__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__2__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__2__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__2__prod = (0x0000ffffU 
                                                 & VL_MULS_III(16, 
                                                               (0x0000ffffU 
                                                                & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__2__a_s))), 
                                                               (0x0000ffffU 
                                                                & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__2__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__2__prod_ext = 
        VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__2__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__2__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__2__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__2__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__2__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__2__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__2__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__2__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__2__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__3__tag = "T2 weight_loaded"s;
    __Vtask_mac_pe_tb__DOT__tick__4__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__4__ai = 3U;
    __Vtask_mac_pe_tb__DOT__tick__4__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__4__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__4__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__4__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__4__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__4__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__4__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__4__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__4__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__4__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__3__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__3__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__5__pi = __Vtask_mac_pe_tb__DOT__tick__4__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__5__ai = __Vtask_mac_pe_tb__DOT__tick__4__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__5__wi = __Vtask_mac_pe_tb__DOT__tick__4__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__5__ca = __Vtask_mac_pe_tb__DOT__tick__4__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__5__lw = __Vtask_mac_pe_tb__DOT__tick__4__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__5__en = __Vtask_mac_pe_tb__DOT__tick__4__en;
    __Vtask_mac_pe_tb__DOT__ref_step__5__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__5__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__5__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__5__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__5__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__5__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__5__prod = (0x0000ffffU 
                                                 & VL_MULS_III(16, 
                                                               (0x0000ffffU 
                                                                & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__5__a_s))), 
                                                               (0x0000ffffU 
                                                                & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__5__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__5__prod_ext = 
        VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__5__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__5__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__5__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__5__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__5__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__5__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__5__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__5__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__5__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__6__tag = "T2 cycle1"s;
    __Vtask_mac_pe_tb__DOT__tick__7__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__7__ai = 3U;
    __Vtask_mac_pe_tb__DOT__tick__7__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__7__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__7__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__7__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__7__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__7__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__7__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__7__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__7__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__7__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__6__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__6__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__8__pi = __Vtask_mac_pe_tb__DOT__tick__7__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__8__ai = __Vtask_mac_pe_tb__DOT__tick__7__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__8__wi = __Vtask_mac_pe_tb__DOT__tick__7__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__8__ca = __Vtask_mac_pe_tb__DOT__tick__7__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__8__lw = __Vtask_mac_pe_tb__DOT__tick__7__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__8__en = __Vtask_mac_pe_tb__DOT__tick__7__en;
    __Vtask_mac_pe_tb__DOT__ref_step__8__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__8__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__8__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__8__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__8__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__8__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__8__prod = (0x0000ffffU 
                                                 & VL_MULS_III(16, 
                                                               (0x0000ffffU 
                                                                & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__8__a_s))), 
                                                               (0x0000ffffU 
                                                                & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__8__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__8__prod_ext = 
        VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__8__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__8__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__8__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__8__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__8__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__8__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__8__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__8__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__8__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__9__tag = "T2 cycle2"s;
    __Vtask_mac_pe_tb__DOT__tick__10__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__10__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__10__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__10__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__10__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__10__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__10__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__10__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__10__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__10__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__10__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__10__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__9__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__9__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__11__pi = __Vtask_mac_pe_tb__DOT__tick__10__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__11__ai = __Vtask_mac_pe_tb__DOT__tick__10__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__11__wi = __Vtask_mac_pe_tb__DOT__tick__10__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__11__ca = __Vtask_mac_pe_tb__DOT__tick__10__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__11__lw = __Vtask_mac_pe_tb__DOT__tick__10__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__11__en = __Vtask_mac_pe_tb__DOT__tick__10__en;
    __Vtask_mac_pe_tb__DOT__ref_step__11__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__11__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__11__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__11__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__11__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__11__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__11__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__11__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__11__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__11__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__11__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__11__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__11__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__11__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__11__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__11__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__11__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__11__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__11__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__12__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__12__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__12__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__12__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__12__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__13__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__13__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__13__wi = 3U;
    __Vtask_mac_pe_tb__DOT__tick__13__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__13__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__13__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__13__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__13__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__13__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__13__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__13__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__13__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__14__pi = __Vtask_mac_pe_tb__DOT__tick__13__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__14__ai = __Vtask_mac_pe_tb__DOT__tick__13__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__14__wi = __Vtask_mac_pe_tb__DOT__tick__13__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__14__ca = __Vtask_mac_pe_tb__DOT__tick__13__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__14__lw = __Vtask_mac_pe_tb__DOT__tick__13__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__14__en = __Vtask_mac_pe_tb__DOT__tick__13__en;
    __Vtask_mac_pe_tb__DOT__ref_step__14__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__14__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__14__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__14__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__14__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__14__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__14__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__14__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__14__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__14__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__14__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__14__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__14__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__14__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__14__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__14__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__14__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__14__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__14__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__15__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__15__ai = 1U;
    __Vtask_mac_pe_tb__DOT__tick__15__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__15__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__15__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__15__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__15__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__15__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__15__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__15__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__15__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__15__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__16__pi = __Vtask_mac_pe_tb__DOT__tick__15__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__16__ai = __Vtask_mac_pe_tb__DOT__tick__15__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__16__wi = __Vtask_mac_pe_tb__DOT__tick__15__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__16__ca = __Vtask_mac_pe_tb__DOT__tick__15__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__16__lw = __Vtask_mac_pe_tb__DOT__tick__15__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__16__en = __Vtask_mac_pe_tb__DOT__tick__15__en;
    __Vtask_mac_pe_tb__DOT__ref_step__16__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__16__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__16__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__16__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__16__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__16__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__16__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__16__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__16__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__16__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__16__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__16__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__16__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__16__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__16__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__16__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__16__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__16__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__16__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__17__tag = "T3 c1"s;
    __Vtask_mac_pe_tb__DOT__tick__18__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__18__ai = 2U;
    __Vtask_mac_pe_tb__DOT__tick__18__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__18__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__18__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__18__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__18__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__18__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__18__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__18__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__18__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__18__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__17__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__17__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__19__pi = __Vtask_mac_pe_tb__DOT__tick__18__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__19__ai = __Vtask_mac_pe_tb__DOT__tick__18__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__19__wi = __Vtask_mac_pe_tb__DOT__tick__18__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__19__ca = __Vtask_mac_pe_tb__DOT__tick__18__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__19__lw = __Vtask_mac_pe_tb__DOT__tick__18__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__19__en = __Vtask_mac_pe_tb__DOT__tick__18__en;
    __Vtask_mac_pe_tb__DOT__ref_step__19__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__19__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__19__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__19__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__19__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__19__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__19__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__19__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__19__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__19__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__19__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__19__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__19__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__19__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__19__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__19__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__19__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__19__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__19__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__20__tag = "T3 c2"s;
    __Vtask_mac_pe_tb__DOT__tick__21__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__21__ai = 3U;
    __Vtask_mac_pe_tb__DOT__tick__21__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__21__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__21__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__21__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__21__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__21__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__21__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__21__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__21__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__21__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__20__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__20__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__22__pi = __Vtask_mac_pe_tb__DOT__tick__21__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__22__ai = __Vtask_mac_pe_tb__DOT__tick__21__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__22__wi = __Vtask_mac_pe_tb__DOT__tick__21__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__22__ca = __Vtask_mac_pe_tb__DOT__tick__21__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__22__lw = __Vtask_mac_pe_tb__DOT__tick__21__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__22__en = __Vtask_mac_pe_tb__DOT__tick__21__en;
    __Vtask_mac_pe_tb__DOT__ref_step__22__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__22__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__22__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__22__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__22__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__22__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__22__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__22__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__22__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__22__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__22__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__22__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__22__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__22__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__22__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__22__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__22__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__22__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__22__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__23__tag = "T3 c3"s;
    __Vtask_mac_pe_tb__DOT__tick__24__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__24__ai = 4U;
    __Vtask_mac_pe_tb__DOT__tick__24__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__24__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__24__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__24__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__24__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__24__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__24__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__24__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__24__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__24__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__23__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__23__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__25__pi = __Vtask_mac_pe_tb__DOT__tick__24__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__25__ai = __Vtask_mac_pe_tb__DOT__tick__24__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__25__wi = __Vtask_mac_pe_tb__DOT__tick__24__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__25__ca = __Vtask_mac_pe_tb__DOT__tick__24__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__25__lw = __Vtask_mac_pe_tb__DOT__tick__24__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__25__en = __Vtask_mac_pe_tb__DOT__tick__24__en;
    __Vtask_mac_pe_tb__DOT__ref_step__25__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__25__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__25__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__25__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__25__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__25__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__25__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__25__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__25__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__25__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__25__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__25__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__25__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__25__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__25__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__25__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__25__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__25__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__25__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__26__tag = "T3 c4"s;
    __Vtask_mac_pe_tb__DOT__tick__27__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__27__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__27__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__27__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__27__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__27__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__27__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__27__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__27__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__27__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__27__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__27__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__26__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__26__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__28__pi = __Vtask_mac_pe_tb__DOT__tick__27__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__28__ai = __Vtask_mac_pe_tb__DOT__tick__27__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__28__wi = __Vtask_mac_pe_tb__DOT__tick__27__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__28__ca = __Vtask_mac_pe_tb__DOT__tick__27__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__28__lw = __Vtask_mac_pe_tb__DOT__tick__27__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__28__en = __Vtask_mac_pe_tb__DOT__tick__27__en;
    __Vtask_mac_pe_tb__DOT__ref_step__28__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__28__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__28__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__28__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__28__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__28__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__28__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__28__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__28__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__28__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__28__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__28__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__28__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__28__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__28__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__28__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__28__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__28__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__28__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__29__tag = "T3 c5"s;
    __Vtask_mac_pe_tb__DOT__tick__30__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__30__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__30__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__30__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__30__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__30__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__30__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__30__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__30__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__30__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__30__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__30__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__29__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__29__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__31__pi = __Vtask_mac_pe_tb__DOT__tick__30__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__31__ai = __Vtask_mac_pe_tb__DOT__tick__30__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__31__wi = __Vtask_mac_pe_tb__DOT__tick__30__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__31__ca = __Vtask_mac_pe_tb__DOT__tick__30__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__31__lw = __Vtask_mac_pe_tb__DOT__tick__30__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__31__en = __Vtask_mac_pe_tb__DOT__tick__30__en;
    __Vtask_mac_pe_tb__DOT__ref_step__31__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__31__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__31__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__31__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__31__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__31__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__31__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__31__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__31__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__31__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__31__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__31__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__31__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__31__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__31__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__31__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__31__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__31__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__31__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__32__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__32__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__32__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__32__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__32__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__33__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__33__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__33__wi = 4U;
    __Vtask_mac_pe_tb__DOT__tick__33__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__33__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__33__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__33__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__33__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__33__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__33__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__33__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__33__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__34__pi = __Vtask_mac_pe_tb__DOT__tick__33__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__34__ai = __Vtask_mac_pe_tb__DOT__tick__33__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__34__wi = __Vtask_mac_pe_tb__DOT__tick__33__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__34__ca = __Vtask_mac_pe_tb__DOT__tick__33__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__34__lw = __Vtask_mac_pe_tb__DOT__tick__33__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__34__en = __Vtask_mac_pe_tb__DOT__tick__33__en;
    __Vtask_mac_pe_tb__DOT__ref_step__34__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__34__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__34__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__34__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__34__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__34__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__34__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__34__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__34__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__34__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__34__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__34__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__34__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__34__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__34__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__34__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__34__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__34__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__34__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__35__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__35__ai = 2U;
    __Vtask_mac_pe_tb__DOT__tick__35__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__35__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__35__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__35__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__35__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__35__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__35__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__35__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__35__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__35__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__36__pi = __Vtask_mac_pe_tb__DOT__tick__35__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__36__ai = __Vtask_mac_pe_tb__DOT__tick__35__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__36__wi = __Vtask_mac_pe_tb__DOT__tick__35__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__36__ca = __Vtask_mac_pe_tb__DOT__tick__35__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__36__lw = __Vtask_mac_pe_tb__DOT__tick__35__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__36__en = __Vtask_mac_pe_tb__DOT__tick__35__en;
    __Vtask_mac_pe_tb__DOT__ref_step__36__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__36__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__36__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__36__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__36__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__36__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__36__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__36__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__36__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__36__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__36__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__36__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__36__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__36__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__36__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__36__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__36__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__36__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__36__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__37__pi = 0x00000064U;
    __Vtask_mac_pe_tb__DOT__tick__37__ai = 5U;
    __Vtask_mac_pe_tb__DOT__tick__37__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__37__ca = 1U;
    __Vtask_mac_pe_tb__DOT__tick__37__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__37__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__37__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__37__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__37__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__37__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__37__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__37__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__38__pi = __Vtask_mac_pe_tb__DOT__tick__37__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__38__ai = __Vtask_mac_pe_tb__DOT__tick__37__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__38__wi = __Vtask_mac_pe_tb__DOT__tick__37__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__38__ca = __Vtask_mac_pe_tb__DOT__tick__37__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__38__lw = __Vtask_mac_pe_tb__DOT__tick__37__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__38__en = __Vtask_mac_pe_tb__DOT__tick__37__en;
    __Vtask_mac_pe_tb__DOT__ref_step__38__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__38__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__38__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__38__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__38__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__38__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__38__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__38__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__38__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__38__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__38__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__38__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__38__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__38__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__38__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__38__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__38__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__38__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__38__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__39__tag = "T4 clear_acc"s;
    __Vtask_mac_pe_tb__DOT__tick__40__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__40__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__40__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__40__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__40__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__40__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__40__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__40__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__40__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__40__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__40__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__40__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__39__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__39__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__41__pi = __Vtask_mac_pe_tb__DOT__tick__40__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__41__ai = __Vtask_mac_pe_tb__DOT__tick__40__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__41__wi = __Vtask_mac_pe_tb__DOT__tick__40__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__41__ca = __Vtask_mac_pe_tb__DOT__tick__40__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__41__lw = __Vtask_mac_pe_tb__DOT__tick__40__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__41__en = __Vtask_mac_pe_tb__DOT__tick__40__en;
    __Vtask_mac_pe_tb__DOT__ref_step__41__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__41__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__41__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__41__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__41__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__41__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__41__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__41__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__41__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__41__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__41__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__41__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__41__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__41__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__41__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__41__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__41__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__41__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__41__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__42__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__42__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__42__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__42__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__42__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__43__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__43__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__43__wi = 7U;
    __Vtask_mac_pe_tb__DOT__tick__43__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__43__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__43__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__43__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__43__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__43__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__43__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__43__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__43__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__44__pi = __Vtask_mac_pe_tb__DOT__tick__43__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__44__ai = __Vtask_mac_pe_tb__DOT__tick__43__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__44__wi = __Vtask_mac_pe_tb__DOT__tick__43__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__44__ca = __Vtask_mac_pe_tb__DOT__tick__43__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__44__lw = __Vtask_mac_pe_tb__DOT__tick__43__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__44__en = __Vtask_mac_pe_tb__DOT__tick__43__en;
    __Vtask_mac_pe_tb__DOT__ref_step__44__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__44__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__44__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__44__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__44__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__44__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__44__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__44__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__44__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__44__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__44__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__44__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__44__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__44__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__44__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__44__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__44__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__44__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__44__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__45__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__45__ai = 2U;
    __Vtask_mac_pe_tb__DOT__tick__45__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__45__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__45__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__45__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__45__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__45__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__45__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__45__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__45__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__45__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__46__pi = __Vtask_mac_pe_tb__DOT__tick__45__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__46__ai = __Vtask_mac_pe_tb__DOT__tick__45__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__46__wi = __Vtask_mac_pe_tb__DOT__tick__45__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__46__ca = __Vtask_mac_pe_tb__DOT__tick__45__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__46__lw = __Vtask_mac_pe_tb__DOT__tick__45__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__46__en = __Vtask_mac_pe_tb__DOT__tick__45__en;
    __Vtask_mac_pe_tb__DOT__ref_step__46__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__46__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__46__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__46__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__46__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__46__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__46__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__46__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__46__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__46__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__46__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__46__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__46__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__46__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__46__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__46__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__46__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__46__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__46__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__47__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__47__ai = 3U;
    __Vtask_mac_pe_tb__DOT__tick__47__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__47__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__47__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__47__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__47__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__47__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__47__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__47__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__47__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__47__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__48__pi = __Vtask_mac_pe_tb__DOT__tick__47__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__48__ai = __Vtask_mac_pe_tb__DOT__tick__47__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__48__wi = __Vtask_mac_pe_tb__DOT__tick__47__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__48__ca = __Vtask_mac_pe_tb__DOT__tick__47__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__48__lw = __Vtask_mac_pe_tb__DOT__tick__47__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__48__en = __Vtask_mac_pe_tb__DOT__tick__47__en;
    __Vtask_mac_pe_tb__DOT__ref_step__48__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__48__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__48__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__48__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__48__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__48__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__48__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__48__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__48__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__48__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__48__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__48__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__48__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__48__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__48__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__48__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__48__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__48__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__48__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__49__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__49__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__49__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__49__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__49__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__49__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__49__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__49__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__49__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__49__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__49__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__49__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__50__pi = __Vtask_mac_pe_tb__DOT__tick__49__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__50__ai = __Vtask_mac_pe_tb__DOT__tick__49__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__50__wi = __Vtask_mac_pe_tb__DOT__tick__49__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__50__ca = __Vtask_mac_pe_tb__DOT__tick__49__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__50__lw = __Vtask_mac_pe_tb__DOT__tick__49__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__50__en = __Vtask_mac_pe_tb__DOT__tick__49__en;
    __Vtask_mac_pe_tb__DOT__ref_step__50__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__50__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__50__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__50__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__50__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__50__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__50__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__50__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__50__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__50__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__50__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__50__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__50__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__50__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__50__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__50__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__50__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__50__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__50__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__51__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__51__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__51__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__51__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__51__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__51__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__51__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__51__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__51__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__51__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__51__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__51__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__52__pi = __Vtask_mac_pe_tb__DOT__tick__51__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__52__ai = __Vtask_mac_pe_tb__DOT__tick__51__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__52__wi = __Vtask_mac_pe_tb__DOT__tick__51__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__52__ca = __Vtask_mac_pe_tb__DOT__tick__51__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__52__lw = __Vtask_mac_pe_tb__DOT__tick__51__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__52__en = __Vtask_mac_pe_tb__DOT__tick__51__en;
    __Vtask_mac_pe_tb__DOT__ref_step__52__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__52__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__52__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__52__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__52__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__52__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__52__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__52__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__52__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__52__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__52__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__52__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__52__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__52__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__52__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__52__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__52__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__52__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__52__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__53__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__53__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__53__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__53__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__53__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__53__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__53__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__53__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__53__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__53__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__53__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__53__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__54__pi = __Vtask_mac_pe_tb__DOT__tick__53__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__54__ai = __Vtask_mac_pe_tb__DOT__tick__53__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__54__wi = __Vtask_mac_pe_tb__DOT__tick__53__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__54__ca = __Vtask_mac_pe_tb__DOT__tick__53__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__54__lw = __Vtask_mac_pe_tb__DOT__tick__53__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__54__en = __Vtask_mac_pe_tb__DOT__tick__53__en;
    __Vtask_mac_pe_tb__DOT__ref_step__54__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__54__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__54__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__54__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__54__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__54__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__54__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__54__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__54__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__54__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__54__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__54__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__54__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__54__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__54__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__54__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__54__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__54__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__54__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__55__tag = "T5 frozen_after_idle"s;
    __Vtask_mac_pe_tb__DOT__reset_dut__56__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    vlSelfRef.mac_pe_tb__DOT__rst_n = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = 0U;
    vlSelfRef.mac_pe_tb__DOT__load_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = 0U;
    vlSelfRef.mac_pe_tb__DOT__weight_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__act_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__psum_in = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_weight = 0U;
    vlSelfRef.mac_pe_tb__DOT__ref_act_reg = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__55__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    vlSelfRef.mac_pe_tb__DOT__ref_act_out = 0U;
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__55__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    vlSelfRef.mac_pe_tb__DOT__ref_psum_out = 0U;
    __Vtask_mac_pe_tb__DOT__reset_dut__56__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__56__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__56__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__56__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__57__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__57__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__57__wi = 2U;
    __Vtask_mac_pe_tb__DOT__tick__57__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__57__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__57__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__57__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__57__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__57__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__57__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__57__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__57__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__58__pi = __Vtask_mac_pe_tb__DOT__tick__57__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__58__ai = __Vtask_mac_pe_tb__DOT__tick__57__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__58__wi = __Vtask_mac_pe_tb__DOT__tick__57__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__58__ca = __Vtask_mac_pe_tb__DOT__tick__57__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__58__lw = __Vtask_mac_pe_tb__DOT__tick__57__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__58__en = __Vtask_mac_pe_tb__DOT__tick__57__en;
    __Vtask_mac_pe_tb__DOT__ref_step__58__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__58__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__58__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__58__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__58__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__58__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__58__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__58__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__58__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__58__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__58__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__58__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__58__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__58__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__58__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__58__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__58__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__58__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__58__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__59__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__59__ai = 5U;
    __Vtask_mac_pe_tb__DOT__tick__59__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__59__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__59__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__59__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__59__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__59__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__59__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__59__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__59__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__59__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__60__pi = __Vtask_mac_pe_tb__DOT__tick__59__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__60__ai = __Vtask_mac_pe_tb__DOT__tick__59__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__60__wi = __Vtask_mac_pe_tb__DOT__tick__59__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__60__ca = __Vtask_mac_pe_tb__DOT__tick__59__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__60__lw = __Vtask_mac_pe_tb__DOT__tick__59__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__60__en = __Vtask_mac_pe_tb__DOT__tick__59__en;
    __Vtask_mac_pe_tb__DOT__ref_step__60__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__60__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__60__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__60__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__60__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__60__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__60__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__60__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__60__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__60__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__60__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__60__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__60__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__60__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__60__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__60__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__60__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__60__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__60__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__61__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__61__ai = 1U;
    __Vtask_mac_pe_tb__DOT__tick__61__wi = 0x0aU;
    __Vtask_mac_pe_tb__DOT__tick__61__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__61__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__61__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__61__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__61__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__61__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__61__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__61__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__61__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__62__pi = __Vtask_mac_pe_tb__DOT__tick__61__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__62__ai = __Vtask_mac_pe_tb__DOT__tick__61__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__62__wi = __Vtask_mac_pe_tb__DOT__tick__61__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__62__ca = __Vtask_mac_pe_tb__DOT__tick__61__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__62__lw = __Vtask_mac_pe_tb__DOT__tick__61__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__62__en = __Vtask_mac_pe_tb__DOT__tick__61__en;
    __Vtask_mac_pe_tb__DOT__ref_step__62__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__62__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__62__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__62__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__62__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__62__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__62__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__62__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__62__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__62__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__62__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__62__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__62__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__62__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__62__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__62__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__62__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__62__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__62__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__63__tag = "T6 new_weight_loads"s;
    __Vtask_mac_pe_tb__DOT__tick__64__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__64__ai = 1U;
    __Vtask_mac_pe_tb__DOT__tick__64__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__64__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__64__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__64__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__64__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__64__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__64__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__64__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__64__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__64__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__63__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__63__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__65__pi = __Vtask_mac_pe_tb__DOT__tick__64__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__65__ai = __Vtask_mac_pe_tb__DOT__tick__64__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__65__wi = __Vtask_mac_pe_tb__DOT__tick__64__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__65__ca = __Vtask_mac_pe_tb__DOT__tick__64__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__65__lw = __Vtask_mac_pe_tb__DOT__tick__64__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__65__en = __Vtask_mac_pe_tb__DOT__tick__64__en;
    __Vtask_mac_pe_tb__DOT__ref_step__65__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__65__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__65__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__65__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__65__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__65__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__65__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__65__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__65__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__65__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__65__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__65__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__65__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__65__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__65__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__65__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__65__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__65__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__65__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__66__tag = "T6 new_weight_active"s;
    __Vtask_mac_pe_tb__DOT__tick__67__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__67__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__67__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__67__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__67__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__67__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__67__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__67__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__67__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__67__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__67__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__67__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__66__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__66__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__68__pi = __Vtask_mac_pe_tb__DOT__tick__67__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__68__ai = __Vtask_mac_pe_tb__DOT__tick__67__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__68__wi = __Vtask_mac_pe_tb__DOT__tick__67__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__68__ca = __Vtask_mac_pe_tb__DOT__tick__67__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__68__lw = __Vtask_mac_pe_tb__DOT__tick__67__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__68__en = __Vtask_mac_pe_tb__DOT__tick__67__en;
    __Vtask_mac_pe_tb__DOT__ref_step__68__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__68__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__68__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__68__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__68__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__68__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__68__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__68__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__68__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__68__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__68__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__68__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__68__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__68__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__68__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__68__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__68__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__68__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__68__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__69__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__69__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__69__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__69__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__69__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__70__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__70__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__70__wi = 0x0cU;
    __Vtask_mac_pe_tb__DOT__tick__70__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__70__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__70__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__70__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__70__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__70__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__70__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__70__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__70__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__71__pi = __Vtask_mac_pe_tb__DOT__tick__70__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__71__ai = __Vtask_mac_pe_tb__DOT__tick__70__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__71__wi = __Vtask_mac_pe_tb__DOT__tick__70__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__71__ca = __Vtask_mac_pe_tb__DOT__tick__70__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__71__lw = __Vtask_mac_pe_tb__DOT__tick__70__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__71__en = __Vtask_mac_pe_tb__DOT__tick__70__en;
    __Vtask_mac_pe_tb__DOT__ref_step__71__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__71__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__71__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__71__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__71__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__71__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__71__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__71__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__71__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__71__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__71__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__71__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__71__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__71__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__71__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__71__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__71__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__71__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__71__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__72__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__72__ai = 0x0bU;
    __Vtask_mac_pe_tb__DOT__tick__72__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__72__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__72__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__72__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__72__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__72__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__72__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__72__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__72__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__72__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__73__pi = __Vtask_mac_pe_tb__DOT__tick__72__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__73__ai = __Vtask_mac_pe_tb__DOT__tick__72__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__73__wi = __Vtask_mac_pe_tb__DOT__tick__72__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__73__ca = __Vtask_mac_pe_tb__DOT__tick__72__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__73__lw = __Vtask_mac_pe_tb__DOT__tick__72__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__73__en = __Vtask_mac_pe_tb__DOT__tick__72__en;
    __Vtask_mac_pe_tb__DOT__ref_step__73__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__73__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__73__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__73__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__73__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__73__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__73__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__73__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__73__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__73__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__73__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__73__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__73__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__73__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__73__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__73__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__73__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__73__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__73__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__74__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__74__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__74__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__74__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__74__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__74__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__74__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__74__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__74__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__74__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__74__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__74__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__75__pi = __Vtask_mac_pe_tb__DOT__tick__74__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__75__ai = __Vtask_mac_pe_tb__DOT__tick__74__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__75__wi = __Vtask_mac_pe_tb__DOT__tick__74__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__75__ca = __Vtask_mac_pe_tb__DOT__tick__74__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__75__lw = __Vtask_mac_pe_tb__DOT__tick__74__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__75__en = __Vtask_mac_pe_tb__DOT__tick__74__en;
    __Vtask_mac_pe_tb__DOT__ref_step__75__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__75__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__75__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__75__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__75__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__75__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__75__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__75__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__75__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__75__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__75__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__75__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__75__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__75__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__75__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__75__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__75__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__75__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__75__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__76__tag = "T7 pos_pos"s;
    __Vtask_mac_pe_tb__DOT__tick__77__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__77__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__77__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__77__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__77__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__77__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__77__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__77__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__77__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__77__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__77__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__77__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__76__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__76__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__78__pi = __Vtask_mac_pe_tb__DOT__tick__77__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__78__ai = __Vtask_mac_pe_tb__DOT__tick__77__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__78__wi = __Vtask_mac_pe_tb__DOT__tick__77__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__78__ca = __Vtask_mac_pe_tb__DOT__tick__77__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__78__lw = __Vtask_mac_pe_tb__DOT__tick__77__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__78__en = __Vtask_mac_pe_tb__DOT__tick__77__en;
    __Vtask_mac_pe_tb__DOT__ref_step__78__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__78__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__78__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__78__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__78__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__78__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__78__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__78__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__78__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__78__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__78__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__78__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__78__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__78__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__78__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__78__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__78__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__78__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__78__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__79__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__79__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__79__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__79__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__79__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__80__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__80__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__80__wi = 0xfeU;
    __Vtask_mac_pe_tb__DOT__tick__80__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__80__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__80__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__80__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__80__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__80__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__80__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__80__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__80__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__81__pi = __Vtask_mac_pe_tb__DOT__tick__80__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__81__ai = __Vtask_mac_pe_tb__DOT__tick__80__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__81__wi = __Vtask_mac_pe_tb__DOT__tick__80__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__81__ca = __Vtask_mac_pe_tb__DOT__tick__80__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__81__lw = __Vtask_mac_pe_tb__DOT__tick__80__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__81__en = __Vtask_mac_pe_tb__DOT__tick__80__en;
    __Vtask_mac_pe_tb__DOT__ref_step__81__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__81__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__81__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__81__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__81__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__81__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__81__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__81__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__81__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__81__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__81__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__81__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__81__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__81__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__81__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__81__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__81__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__81__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__81__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__82__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__82__ai = 3U;
    __Vtask_mac_pe_tb__DOT__tick__82__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__82__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__82__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__82__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__82__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__82__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__82__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__82__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__82__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__82__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__83__pi = __Vtask_mac_pe_tb__DOT__tick__82__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__83__ai = __Vtask_mac_pe_tb__DOT__tick__82__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__83__wi = __Vtask_mac_pe_tb__DOT__tick__82__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__83__ca = __Vtask_mac_pe_tb__DOT__tick__82__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__83__lw = __Vtask_mac_pe_tb__DOT__tick__82__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__83__en = __Vtask_mac_pe_tb__DOT__tick__82__en;
    __Vtask_mac_pe_tb__DOT__ref_step__83__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__83__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__83__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__83__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__83__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__83__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__83__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__83__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__83__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__83__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__83__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__83__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__83__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__83__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__83__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__83__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__83__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__83__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__83__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__84__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__84__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__84__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__84__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__84__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__84__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__84__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__84__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__84__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__84__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__84__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__84__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__85__pi = __Vtask_mac_pe_tb__DOT__tick__84__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__85__ai = __Vtask_mac_pe_tb__DOT__tick__84__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__85__wi = __Vtask_mac_pe_tb__DOT__tick__84__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__85__ca = __Vtask_mac_pe_tb__DOT__tick__84__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__85__lw = __Vtask_mac_pe_tb__DOT__tick__84__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__85__en = __Vtask_mac_pe_tb__DOT__tick__84__en;
    __Vtask_mac_pe_tb__DOT__ref_step__85__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__85__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__85__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__85__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__85__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__85__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__85__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__85__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__85__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__85__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__85__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__85__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__85__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__85__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__85__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__85__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__85__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__85__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__85__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__86__tag = "T8 neg_pos"s;
    __Vtask_mac_pe_tb__DOT__tick__87__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__87__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__87__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__87__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__87__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__87__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__87__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__87__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__87__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__87__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__87__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__87__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__86__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__86__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__88__pi = __Vtask_mac_pe_tb__DOT__tick__87__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__88__ai = __Vtask_mac_pe_tb__DOT__tick__87__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__88__wi = __Vtask_mac_pe_tb__DOT__tick__87__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__88__ca = __Vtask_mac_pe_tb__DOT__tick__87__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__88__lw = __Vtask_mac_pe_tb__DOT__tick__87__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__88__en = __Vtask_mac_pe_tb__DOT__tick__87__en;
    __Vtask_mac_pe_tb__DOT__ref_step__88__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__88__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__88__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__88__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__88__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__88__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__88__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__88__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__88__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__88__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__88__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__88__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__88__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__88__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__88__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__88__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__88__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__88__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__88__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__89__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__89__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__89__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__89__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__89__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__90__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__90__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__90__wi = 0xfdU;
    __Vtask_mac_pe_tb__DOT__tick__90__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__90__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__90__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__90__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__90__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__90__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__90__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__90__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__90__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__91__pi = __Vtask_mac_pe_tb__DOT__tick__90__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__91__ai = __Vtask_mac_pe_tb__DOT__tick__90__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__91__wi = __Vtask_mac_pe_tb__DOT__tick__90__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__91__ca = __Vtask_mac_pe_tb__DOT__tick__90__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__91__lw = __Vtask_mac_pe_tb__DOT__tick__90__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__91__en = __Vtask_mac_pe_tb__DOT__tick__90__en;
    __Vtask_mac_pe_tb__DOT__ref_step__91__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__91__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__91__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__91__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__91__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__91__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__91__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__91__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__91__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__91__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__91__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__91__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__91__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__91__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__91__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__91__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__91__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__91__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__91__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__92__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__92__ai = 0xfeU;
    __Vtask_mac_pe_tb__DOT__tick__92__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__92__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__92__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__92__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__92__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__92__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__92__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__92__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__92__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__92__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__93__pi = __Vtask_mac_pe_tb__DOT__tick__92__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__93__ai = __Vtask_mac_pe_tb__DOT__tick__92__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__93__wi = __Vtask_mac_pe_tb__DOT__tick__92__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__93__ca = __Vtask_mac_pe_tb__DOT__tick__92__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__93__lw = __Vtask_mac_pe_tb__DOT__tick__92__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__93__en = __Vtask_mac_pe_tb__DOT__tick__92__en;
    __Vtask_mac_pe_tb__DOT__ref_step__93__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__93__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__93__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__93__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__93__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__93__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__93__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__93__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__93__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__93__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__93__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__93__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__93__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__93__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__93__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__93__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__93__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__93__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__93__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__94__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__94__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__94__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__94__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__94__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__94__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__94__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__94__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__94__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__94__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__94__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__94__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__95__pi = __Vtask_mac_pe_tb__DOT__tick__94__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__95__ai = __Vtask_mac_pe_tb__DOT__tick__94__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__95__wi = __Vtask_mac_pe_tb__DOT__tick__94__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__95__ca = __Vtask_mac_pe_tb__DOT__tick__94__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__95__lw = __Vtask_mac_pe_tb__DOT__tick__94__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__95__en = __Vtask_mac_pe_tb__DOT__tick__94__en;
    __Vtask_mac_pe_tb__DOT__ref_step__95__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__95__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__95__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__95__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__95__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__95__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__95__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__95__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__95__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__95__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__95__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__95__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__95__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__95__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__95__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__95__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__95__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__95__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__95__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__96__tag = "T9 neg_neg"s;
    __Vtask_mac_pe_tb__DOT__tick__97__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__97__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__97__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__97__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__97__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__97__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__97__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__97__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__97__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__97__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__97__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__97__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__96__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__96__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__98__pi = __Vtask_mac_pe_tb__DOT__tick__97__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__98__ai = __Vtask_mac_pe_tb__DOT__tick__97__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__98__wi = __Vtask_mac_pe_tb__DOT__tick__97__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__98__ca = __Vtask_mac_pe_tb__DOT__tick__97__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__98__lw = __Vtask_mac_pe_tb__DOT__tick__97__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__98__en = __Vtask_mac_pe_tb__DOT__tick__97__en;
    __Vtask_mac_pe_tb__DOT__ref_step__98__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__98__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__98__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__98__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__98__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__98__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__98__prod = (0x0000ffffU 
                                                  & VL_MULS_III(16, 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__98__a_s))), 
                                                                (0x0000ffffU 
                                                                 & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__98__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__98__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__98__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__98__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__98__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__98__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__98__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__98__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__98__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__98__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__98__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__99__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__99__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__99__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__99__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__99__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__100__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__100__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__100__wi = 0x7fU;
    __Vtask_mac_pe_tb__DOT__tick__100__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__100__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__100__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__100__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__100__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__100__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__100__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__100__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__100__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__101__pi = __Vtask_mac_pe_tb__DOT__tick__100__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__101__ai = __Vtask_mac_pe_tb__DOT__tick__100__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__101__wi = __Vtask_mac_pe_tb__DOT__tick__100__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__101__ca = __Vtask_mac_pe_tb__DOT__tick__100__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__101__lw = __Vtask_mac_pe_tb__DOT__tick__100__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__101__en = __Vtask_mac_pe_tb__DOT__tick__100__en;
    __Vtask_mac_pe_tb__DOT__ref_step__101__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__101__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__101__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__101__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__101__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__101__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__101__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__101__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__101__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__101__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__101__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__101__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__101__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__101__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__101__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__101__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__101__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__101__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__101__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__102__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__102__ai = 0x7fU;
    __Vtask_mac_pe_tb__DOT__tick__102__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__102__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__102__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__102__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__102__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__102__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__102__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__102__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__102__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__102__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__103__pi = __Vtask_mac_pe_tb__DOT__tick__102__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__103__ai = __Vtask_mac_pe_tb__DOT__tick__102__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__103__wi = __Vtask_mac_pe_tb__DOT__tick__102__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__103__ca = __Vtask_mac_pe_tb__DOT__tick__102__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__103__lw = __Vtask_mac_pe_tb__DOT__tick__102__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__103__en = __Vtask_mac_pe_tb__DOT__tick__102__en;
    __Vtask_mac_pe_tb__DOT__ref_step__103__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__103__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__103__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__103__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__103__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__103__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__103__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__103__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__103__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__103__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__103__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__103__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__103__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__103__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__103__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__103__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__103__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__103__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__103__prod_ext));
    }
    mac_pe_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 8U;
    while (VL_LTS_III(32, 0U, mac_pe_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        __Vtask_mac_pe_tb__DOT__tick__104__pi = 0U;
        __Vtask_mac_pe_tb__DOT__tick__104__ai = 0x7fU;
        __Vtask_mac_pe_tb__DOT__tick__104__wi = 0U;
        __Vtask_mac_pe_tb__DOT__tick__104__ca = 0U;
        __Vtask_mac_pe_tb__DOT__tick__104__lw = 0U;
        __Vtask_mac_pe_tb__DOT__tick__104__en = 1U;
        vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__104__en;
        vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__104__lw;
        vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__104__ca;
        vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__104__wi;
        vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__104__ai;
        vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__104__pi;
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             105);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "mac_pe_tb.sv", 
                                             105);
        __Vtask_mac_pe_tb__DOT__ref_step__105__pi = __Vtask_mac_pe_tb__DOT__tick__104__pi;
        __Vtask_mac_pe_tb__DOT__ref_step__105__ai = __Vtask_mac_pe_tb__DOT__tick__104__ai;
        __Vtask_mac_pe_tb__DOT__ref_step__105__wi = __Vtask_mac_pe_tb__DOT__tick__104__wi;
        __Vtask_mac_pe_tb__DOT__ref_step__105__ca = __Vtask_mac_pe_tb__DOT__tick__104__ca;
        __Vtask_mac_pe_tb__DOT__ref_step__105__lw = __Vtask_mac_pe_tb__DOT__tick__104__lw;
        __Vtask_mac_pe_tb__DOT__ref_step__105__en = __Vtask_mac_pe_tb__DOT__tick__104__en;
        __Vtask_mac_pe_tb__DOT__ref_step__105__a_s = 0;
        __Vtask_mac_pe_tb__DOT__ref_step__105__w_s = 0;
        __Vtask_mac_pe_tb__DOT__ref_step__105__prod = 0;
        __Vtask_mac_pe_tb__DOT__ref_step__105__prod_ext = 0;
        __Vtask_mac_pe_tb__DOT__ref_step__105__a_s 
            = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        __Vtask_mac_pe_tb__DOT__ref_step__105__w_s 
            = vlSelfRef.mac_pe_tb__DOT__ref_weight;
        __Vtask_mac_pe_tb__DOT__ref_step__105__prod 
            = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__105__a_s))), 
                                         (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__105__w_s)))));
        __Vtask_mac_pe_tb__DOT__ref_step__105__prod_ext 
            = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__105__prod));
        if (__Vtask_mac_pe_tb__DOT__ref_step__105__lw) {
            vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__105__wi;
        }
        if (__Vtask_mac_pe_tb__DOT__ref_step__105__en) {
            vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
            vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__105__ai;
            vlSelfRef.mac_pe_tb__DOT__ref_psum_out 
                = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__105__ca)
                    ? __Vtask_mac_pe_tb__DOT__ref_step__105__prod_ext
                    : (__Vtask_mac_pe_tb__DOT__ref_step__105__pi 
                       + __Vtask_mac_pe_tb__DOT__ref_step__105__prod_ext));
        }
        vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__106__tag = "T10 no_overflow"s;
        if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                          != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
            VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__106__tag)
                         , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                         , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
            vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.mac_pe_tb__DOT__errors);
        }
        if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                          != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
            VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                         , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__106__tag)
                         , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                         , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
            vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.mac_pe_tb__DOT__errors);
        }
        mac_pe_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (mac_pe_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_mac_pe_tb__DOT__tick__107__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__107__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__107__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__107__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__107__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__107__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__107__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__107__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__107__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__107__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__107__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__107__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__108__pi = __Vtask_mac_pe_tb__DOT__tick__107__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__108__ai = __Vtask_mac_pe_tb__DOT__tick__107__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__108__wi = __Vtask_mac_pe_tb__DOT__tick__107__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__108__ca = __Vtask_mac_pe_tb__DOT__tick__107__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__108__lw = __Vtask_mac_pe_tb__DOT__tick__107__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__108__en = __Vtask_mac_pe_tb__DOT__tick__107__en;
    __Vtask_mac_pe_tb__DOT__ref_step__108__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__108__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__108__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__108__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__108__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__108__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__108__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__108__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__108__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__108__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__108__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__108__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__108__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__108__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__108__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__108__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__108__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__108__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__108__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__109__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__109__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__109__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__109__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__109__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__110__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__110__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__110__wi = 0x63U;
    __Vtask_mac_pe_tb__DOT__tick__110__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__110__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__110__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__110__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__110__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__110__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__110__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__110__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__110__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__111__pi = __Vtask_mac_pe_tb__DOT__tick__110__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__111__ai = __Vtask_mac_pe_tb__DOT__tick__110__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__111__wi = __Vtask_mac_pe_tb__DOT__tick__110__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__111__ca = __Vtask_mac_pe_tb__DOT__tick__110__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__111__lw = __Vtask_mac_pe_tb__DOT__tick__110__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__111__en = __Vtask_mac_pe_tb__DOT__tick__110__en;
    __Vtask_mac_pe_tb__DOT__ref_step__111__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__111__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__111__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__111__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__111__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__111__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__111__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__111__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__111__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__111__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__111__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__111__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__111__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__111__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__111__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__111__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__111__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__111__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__111__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__112__tag = "T11 lw_no_en_1"s;
    __Vtask_mac_pe_tb__DOT__tick__113__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__113__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__113__wi = 0x37U;
    __Vtask_mac_pe_tb__DOT__tick__113__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__113__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__113__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__113__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__113__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__113__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__113__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__113__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__113__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__112__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__112__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__114__pi = __Vtask_mac_pe_tb__DOT__tick__113__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__114__ai = __Vtask_mac_pe_tb__DOT__tick__113__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__114__wi = __Vtask_mac_pe_tb__DOT__tick__113__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__114__ca = __Vtask_mac_pe_tb__DOT__tick__113__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__114__lw = __Vtask_mac_pe_tb__DOT__tick__113__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__114__en = __Vtask_mac_pe_tb__DOT__tick__113__en;
    __Vtask_mac_pe_tb__DOT__ref_step__114__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__114__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__114__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__114__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__114__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__114__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__114__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__114__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__114__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__114__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__114__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__114__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__114__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__114__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__114__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__114__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__114__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__114__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__114__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__115__tag = "T11 lw_no_en_2"s;
    __Vtask_mac_pe_tb__DOT__tick__116__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__116__ai = 1U;
    __Vtask_mac_pe_tb__DOT__tick__116__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__116__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__116__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__116__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__116__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__116__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__116__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__116__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__116__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__116__pi;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__115__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__115__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__117__pi = __Vtask_mac_pe_tb__DOT__tick__116__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__117__ai = __Vtask_mac_pe_tb__DOT__tick__116__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__117__wi = __Vtask_mac_pe_tb__DOT__tick__116__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__117__ca = __Vtask_mac_pe_tb__DOT__tick__116__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__117__lw = __Vtask_mac_pe_tb__DOT__tick__116__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__117__en = __Vtask_mac_pe_tb__DOT__tick__116__en;
    __Vtask_mac_pe_tb__DOT__ref_step__117__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__117__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__117__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__117__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__117__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__117__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__117__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__117__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__117__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__117__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__117__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__117__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__117__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__117__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__117__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__117__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__117__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__117__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__117__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__118__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__118__ai = 1U;
    __Vtask_mac_pe_tb__DOT__tick__118__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__118__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__118__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__118__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__118__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__118__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__118__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__118__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__118__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__118__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__119__pi = __Vtask_mac_pe_tb__DOT__tick__118__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__119__ai = __Vtask_mac_pe_tb__DOT__tick__118__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__119__wi = __Vtask_mac_pe_tb__DOT__tick__118__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__119__ca = __Vtask_mac_pe_tb__DOT__tick__118__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__119__lw = __Vtask_mac_pe_tb__DOT__tick__118__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__119__en = __Vtask_mac_pe_tb__DOT__tick__118__en;
    __Vtask_mac_pe_tb__DOT__ref_step__119__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__119__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__119__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__119__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__119__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__119__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__119__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__119__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__119__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__119__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__119__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__119__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__119__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__119__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__119__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__119__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__119__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__119__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__119__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__120__tag = "T11 last_weight"s;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__120__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    __Vtask_mac_pe_tb__DOT__tick__121__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__121__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__121__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__121__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__121__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__121__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__121__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__121__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__121__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__121__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__121__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__121__pi;
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__120__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__122__pi = __Vtask_mac_pe_tb__DOT__tick__121__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__122__ai = __Vtask_mac_pe_tb__DOT__tick__121__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__122__wi = __Vtask_mac_pe_tb__DOT__tick__121__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__122__ca = __Vtask_mac_pe_tb__DOT__tick__121__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__122__lw = __Vtask_mac_pe_tb__DOT__tick__121__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__122__en = __Vtask_mac_pe_tb__DOT__tick__121__en;
    __Vtask_mac_pe_tb__DOT__ref_step__122__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__122__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__122__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__122__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__122__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__122__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__122__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__122__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__122__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__122__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__122__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__122__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__122__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__122__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__122__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__122__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__122__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__122__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__122__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__reset_dut__123__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
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
    __Vtask_mac_pe_tb__DOT__reset_dut__123__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_mac_pe_tb__DOT__reset_dut__123__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                         "@(posedge mac_pe_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge mac_pe_tb.clk)", 
                                                             "mac_pe_tb.sv", 
                                                             129);
        __Vtask_mac_pe_tb__DOT__reset_dut__123__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_mac_pe_tb__DOT__reset_dut__123__mac_pe_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         130);
    vlSelfRef.mac_pe_tb__DOT__rst_n = 1U;
    __Vtask_mac_pe_tb__DOT__tick__124__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__124__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__124__wi = 6U;
    __Vtask_mac_pe_tb__DOT__tick__124__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__124__lw = 1U;
    __Vtask_mac_pe_tb__DOT__tick__124__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__124__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__124__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__124__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__124__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__124__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__124__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__125__pi = __Vtask_mac_pe_tb__DOT__tick__124__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__125__ai = __Vtask_mac_pe_tb__DOT__tick__124__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__125__wi = __Vtask_mac_pe_tb__DOT__tick__124__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__125__ca = __Vtask_mac_pe_tb__DOT__tick__124__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__125__lw = __Vtask_mac_pe_tb__DOT__tick__124__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__125__en = __Vtask_mac_pe_tb__DOT__tick__124__en;
    __Vtask_mac_pe_tb__DOT__ref_step__125__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__125__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__125__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__125__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__125__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__125__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__125__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__125__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__125__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__125__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__125__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__125__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__125__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__125__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__125__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__125__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__125__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__125__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__125__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__126__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__126__ai = 4U;
    __Vtask_mac_pe_tb__DOT__tick__126__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__126__ca = 1U;
    __Vtask_mac_pe_tb__DOT__tick__126__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__126__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__126__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__126__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__126__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__126__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__126__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__126__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__127__pi = __Vtask_mac_pe_tb__DOT__tick__126__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__127__ai = __Vtask_mac_pe_tb__DOT__tick__126__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__127__wi = __Vtask_mac_pe_tb__DOT__tick__126__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__127__ca = __Vtask_mac_pe_tb__DOT__tick__126__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__127__lw = __Vtask_mac_pe_tb__DOT__tick__126__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__127__en = __Vtask_mac_pe_tb__DOT__tick__126__en;
    __Vtask_mac_pe_tb__DOT__ref_step__127__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__127__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__127__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__127__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__127__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__127__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__127__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__127__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__127__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__127__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__127__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__127__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__127__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__127__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__127__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__127__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__127__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__127__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__127__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__tick__128__pi = 0xffffffffU;
    __Vtask_mac_pe_tb__DOT__tick__128__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__128__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__128__ca = 1U;
    __Vtask_mac_pe_tb__DOT__tick__128__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__128__en = 1U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__128__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__128__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__128__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__128__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__128__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__128__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__129__pi = __Vtask_mac_pe_tb__DOT__tick__128__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__129__ai = __Vtask_mac_pe_tb__DOT__tick__128__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__129__wi = __Vtask_mac_pe_tb__DOT__tick__128__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__129__ca = __Vtask_mac_pe_tb__DOT__tick__128__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__129__lw = __Vtask_mac_pe_tb__DOT__tick__128__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__129__en = __Vtask_mac_pe_tb__DOT__tick__128__en;
    __Vtask_mac_pe_tb__DOT__ref_step__129__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__129__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__129__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__129__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__129__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__129__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__129__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__129__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__129__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__129__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__129__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__129__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__129__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__129__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__129__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__129__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__129__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__129__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__129__prod_ext));
    }
    vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__130__tag = "T12 clear_after_reset"s;
    if (VL_UNLIKELY((((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                      != (IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out))))) {
        VL_WRITEF_NX("FAIL [%s] act_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__130__tag)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__act_out)
                     , '~',8,(IData)(vlSelfRef.mac_pe_tb__DOT__ref_act_out));
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.mac_pe_tb__DOT__psum_out 
                      != vlSelfRef.mac_pe_tb__DOT__ref_psum_out)))) {
        VL_WRITEF_NX("FAIL [%s] psum_out: got %0d  exp %0d\n",3
                     , 'S',&(vlSelfRef.__Vtask_mac_pe_tb__DOT__chk_outputs__130__tag)
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__psum_out
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__ref_psum_out);
        vlSelfRef.mac_pe_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.mac_pe_tb__DOT__errors);
    }
    __Vtask_mac_pe_tb__DOT__tick__131__pi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__131__ai = 0U;
    __Vtask_mac_pe_tb__DOT__tick__131__wi = 0U;
    __Vtask_mac_pe_tb__DOT__tick__131__ca = 0U;
    __Vtask_mac_pe_tb__DOT__tick__131__lw = 0U;
    __Vtask_mac_pe_tb__DOT__tick__131__en = 0U;
    vlSelfRef.mac_pe_tb__DOT__enable = __Vtask_mac_pe_tb__DOT__tick__131__en;
    vlSelfRef.mac_pe_tb__DOT__load_weight = __Vtask_mac_pe_tb__DOT__tick__131__lw;
    vlSelfRef.mac_pe_tb__DOT__clear_acc = __Vtask_mac_pe_tb__DOT__tick__131__ca;
    vlSelfRef.mac_pe_tb__DOT__weight_in = __Vtask_mac_pe_tb__DOT__tick__131__wi;
    vlSelfRef.mac_pe_tb__DOT__act_in = __Vtask_mac_pe_tb__DOT__tick__131__ai;
    vlSelfRef.mac_pe_tb__DOT__psum_in = __Vtask_mac_pe_tb__DOT__tick__131__pi;
    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(vlSelf, 
                                                     "@(posedge mac_pe_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h527aa988__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mac_pe_tb.clk)", 
                                                         "mac_pe_tb.sv", 
                                                         105);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "mac_pe_tb.sv", 
                                         105);
    __Vtask_mac_pe_tb__DOT__ref_step__132__pi = __Vtask_mac_pe_tb__DOT__tick__131__pi;
    __Vtask_mac_pe_tb__DOT__ref_step__132__ai = __Vtask_mac_pe_tb__DOT__tick__131__ai;
    __Vtask_mac_pe_tb__DOT__ref_step__132__wi = __Vtask_mac_pe_tb__DOT__tick__131__wi;
    __Vtask_mac_pe_tb__DOT__ref_step__132__ca = __Vtask_mac_pe_tb__DOT__tick__131__ca;
    __Vtask_mac_pe_tb__DOT__ref_step__132__lw = __Vtask_mac_pe_tb__DOT__tick__131__lw;
    __Vtask_mac_pe_tb__DOT__ref_step__132__en = __Vtask_mac_pe_tb__DOT__tick__131__en;
    __Vtask_mac_pe_tb__DOT__ref_step__132__a_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__132__w_s = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__132__prod = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__132__prod_ext = 0;
    __Vtask_mac_pe_tb__DOT__ref_step__132__a_s = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
    __Vtask_mac_pe_tb__DOT__ref_step__132__w_s = vlSelfRef.mac_pe_tb__DOT__ref_weight;
    __Vtask_mac_pe_tb__DOT__ref_step__132__prod = (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__132__a_s))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__132__w_s)))));
    __Vtask_mac_pe_tb__DOT__ref_step__132__prod_ext 
        = VL_EXTENDS_II(32,16, (IData)(__Vtask_mac_pe_tb__DOT__ref_step__132__prod));
    if (__Vtask_mac_pe_tb__DOT__ref_step__132__lw) {
        vlSelfRef.mac_pe_tb__DOT__ref_weight = __Vtask_mac_pe_tb__DOT__ref_step__132__wi;
    }
    if (__Vtask_mac_pe_tb__DOT__ref_step__132__en) {
        vlSelfRef.mac_pe_tb__DOT__ref_act_out = vlSelfRef.mac_pe_tb__DOT__ref_act_reg;
        vlSelfRef.mac_pe_tb__DOT__ref_act_reg = __Vtask_mac_pe_tb__DOT__ref_step__132__ai;
        vlSelfRef.mac_pe_tb__DOT__ref_psum_out = ((IData)(__Vtask_mac_pe_tb__DOT__ref_step__132__ca)
                                                   ? __Vtask_mac_pe_tb__DOT__ref_step__132__prod_ext
                                                   : 
                                                  (__Vtask_mac_pe_tb__DOT__ref_step__132__pi 
                                                   + __Vtask_mac_pe_tb__DOT__ref_step__132__prod_ext));
    }
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits = 0U;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__total = 0U;
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[__Vi0].clear();
    }
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[0U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_idle;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[1U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_only;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[2U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_only;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[3U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_and_lw;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[4U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_with_clear;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[5U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_zero;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[6U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_pos;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[7U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_neg;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[8U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_zero;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[9U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_pos;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[10U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_neg;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[11U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_psum_nonzero;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[12U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A1_ant;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[13U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A3_ant;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[14U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A4_ant;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[15U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A5_ant;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[16U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_then_en;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[17U] 
        = vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_consecutive_en;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[0U] = "idle"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[1U] = "lw_only"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[2U] = "en_only"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[3U] = "en_and_lw"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[4U] = "en_with_clear"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[5U] = "weight_zero"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[6U] = "weight_max_pos"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[7U] = "weight_max_neg"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[8U] = "act_zero"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[9U] = "act_max_pos"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[10U] = "act_max_neg"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[11U] = "psum_nonzero"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[12U] = "A1_antecedent"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[13U] = "A3_antecedent"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[14U] = "A4_antecedent"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[15U] = "A5_antecedent"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[16U] = "lw_then_en"s;
    vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[17U] = "consecutive_en"s;
    __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__total = 0x00000012U;
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[0U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_1 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[0U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_1));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[1U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_2 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[1U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_2));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[2U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_3 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[2U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_3));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[3U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_4 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[3U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_4));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[4U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_5 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[4U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_5));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[5U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_6 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[5U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_6));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[6U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_7 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[6U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_7));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[7U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_8 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[7U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_8));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[8U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_9 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[8U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_9));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[9U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_10 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[9U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_10));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[10U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_11 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[10U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_11));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[11U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_12 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[11U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_12));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[12U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_13 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[12U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_13));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[13U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_14 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[13U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_14));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[14U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_15 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[14U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_15));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[15U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_16 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[15U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_16));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[16U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_17 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[16U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_17));
    }
    if (VL_LIKELY((__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hit_arr[17U]))) {
        __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits 
            = ((IData)(1U) + __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits);
    } else {
        __Vtemp_18 = vlSelfRef.__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__names[17U];
        VL_WRITEF_NX("  MISS: %s\n",1, 'S',&(__Vtemp_18));
    }
    VL_WRITEF_NX("Coverage: %0d/%0d bins (%.1f%%)\n",3
                 , '~',32,__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits
                 , '~',32,__Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__total
                 , 'D',((100.0 * VL_ISTOR_D_I(32, __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__hits)) 
                        / VL_ISTOR_D_I(32, __Vtask_mac_pe_tb__DOT__cov__DOT__print_coverage__133__total)));
    if (((0U == vlSelfRef.mac_pe_tb__DOT__errors) & 
         (0U == vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures))) {
        VL_WRITEF_NX("RESULT: PASS \342\200\224 all checks passed\n",0);
    } else {
        VL_WRITEF_NX("RESULT: FAIL \342\200\224 %0d errors, %0d assertion failures\n",2
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__errors
                     , '~',32,vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures);
    }
    VL_FINISH_MT("mac_pe_tb.sv", 253, "");
    co_return;
}

VlCoroutine Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__1(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "mac_pe_tb.sv", 
                                             13);
        vlSelfRef.mac_pe_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__clk)));
    }
    co_return;
}

void Vmac_pe_tb___024root___eval_triggers_vec__act(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_triggers_vec__act\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.mac_pe_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.mac_pe_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__clk__0 
        = vlSelfRef.mac_pe_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__rst_n__0 
        = vlSelfRef.mac_pe_tb__DOT__rst_n;
}

bool Vmac_pe_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___trigger_anySet__act\n"); );
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

void Vmac_pe_tb___024root___nba_sequent__TOP__0(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___nba_sequent__TOP__0\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (vlSelfRef.mac_pe_tb__DOT__rst_n) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_8_1)) 
                                       | ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__act_out) 
                                          == (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_9_1)))))))) {
                VL_WRITEF_NX("A3_act_pipeline: FAIL at time %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_15_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_out 
                                          == vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_13_1))))))) {
                VL_WRITEF_NX("A5_clear: FAIL at time %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_2_1)) 
                                       | ((0U == (IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__act_out)) 
                                          & (0U == vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_out)))))))) {
                VL_WRITEF_NX("A1_post_reset: FAIL at time %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_11_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_out 
                                          == (vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_12_1 
                                              + vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_13_1)))))))) {
                VL_WRITEF_NX("A4_accumulate: FAIL at time %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_4_1)) 
                                       | (((IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_5_1) 
                                           == (IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__act_out)) 
                                          & (vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_6_1 
                                             == vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_out)))))))) {
                VL_WRITEF_NX("A2_frozen: FAIL at time %0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
    }
    if (vlSelfRef.mac_pe_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__load_weight) 
             & (0x80U == (IData)(vlSelfRef.mac_pe_tb__DOT__weight_in)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_neg = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__load_weight) 
             & (0x7fU == (IData)(vlSelfRef.mac_pe_tb__DOT__weight_in)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_max_pos = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__load_weight) 
             & (0U == (IData)(vlSelfRef.mac_pe_tb__DOT__weight_in)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_weight_zero = 1U;
        }
        if (vlSelfRef.mac_pe_tb__DOT__enable) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A3_ant = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
             & (0x80U == (IData)(vlSelfRef.mac_pe_tb__DOT__act_in)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_neg = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
             & (0x7fU == (IData)(vlSelfRef.mac_pe_tb__DOT__act_in)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_max_pos = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
             & (0U == (IData)(vlSelfRef.mac_pe_tb__DOT__act_in)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_act_zero = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
             & (IData)(vlSelfRef.mac_pe_tb__DOT__clear_acc))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_with_clear = 1U;
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A5_ant = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
             & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__clear_acc)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A4_ant = 1U;
        }
        if ((((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
              & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__clear_acc))) 
             & (0U != vlSelfRef.mac_pe_tb__DOT__psum_in))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_psum_nonzero = 1U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.mac_pe_tb__DOT__enable)) 
                   & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__load_weight))))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_idle = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__load_weight) 
             & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__enable)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_only = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
             & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__load_weight)))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_only = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__enable) 
             & (IData)(vlSelfRef.mac_pe_tb__DOT__load_weight))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_en_and_lw = 1U;
        }
        if (((~ (IData)(vlSelfRef.mac_pe_tb__DOT__cov__DOT___Vpast_0_1)) 
             & (IData)(vlSelfRef.mac_pe_tb__DOT__rst_n))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A1_ant = 1U;
        }
    }
    if (((~ (IData)(vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_rst_n)) 
         & (IData)(vlSelfRef.mac_pe_tb__DOT__rst_n))) {
        vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_A1_ant = 1U;
    }
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures = 0U;
    if (vlSelfRef.mac_pe_tb__DOT__rst_n) {
        if ((((IData)(vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_lw) 
              & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_enable))) 
             & (IData)(vlSelfRef.mac_pe_tb__DOT__enable))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_lw_then_en = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_enable) 
             & (IData)(vlSelfRef.mac_pe_tb__DOT__enable))) {
            vlSelfRef.mac_pe_tb__DOT__cov__DOT__cov_consecutive_en = 1U;
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_rst_rose) 
             & (~ ((0U == (IData)(vlSelfRef.mac_pe_tb__DOT__act_out)) 
                   & (0U == vlSelfRef.mac_pe_tb__DOT__psum_out))))) {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures);
        }
        if (((~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_enable)) 
             & (((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                 != (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_act_out)) 
                | (vlSelfRef.mac_pe_tb__DOT__psum_out 
                   != vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_psum_out)))) {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures);
        }
        if (((IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_enable) 
             & ((IData)(vlSelfRef.mac_pe_tb__DOT__act_out) 
                != (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_f_act_reg)))) {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures);
        }
        if ((((IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_enable) 
              & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_clear_acc))) 
             & (vlSelfRef.mac_pe_tb__DOT__psum_out 
                != (vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_psum_in 
                    + vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_f_prod_ext)))) {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures);
        }
        if ((((IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_enable) 
              & (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_clear_acc)) 
             & (vlSelfRef.mac_pe_tb__DOT__psum_out 
                != vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_f_prod_ext))) {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures 
                = ((IData)(1U) + vlSelfRef.mac_pe_tb__DOT__chk__DOT__assertion_failures);
        }
    }
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_9_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_act_reg;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_8_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n) 
           & (IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__enable));
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_15_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__enable) 
              & (IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__clear_acc)));
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_2_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n) 
           & (~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_1_1)));
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_12_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_in;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_13_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_prod_ext;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_11_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__enable) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__clear_acc))));
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_5_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__act_out;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_6_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_out;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_4_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n) 
           & (~ (IData)(vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__enable)));
    vlSelfRef.mac_pe_tb__DOT__cov__DOT___Vpast_0_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_rst_n 
        = vlSelfRef.mac_pe_tb__DOT__rst_n;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_lw = vlSelfRef.mac_pe_tb__DOT__load_weight;
    vlSelfRef.mac_pe_tb__DOT__cov__DOT__prev_enable 
        = vlSelfRef.mac_pe_tb__DOT__enable;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_psum_in 
        = vlSelfRef.mac_pe_tb__DOT__psum_in;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_f_prod_ext 
        = vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_prod_ext;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_clear_acc 
        = vlSelfRef.mac_pe_tb__DOT__clear_acc;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_enable 
        = vlSelfRef.mac_pe_tb__DOT__enable;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_rst_rose 
        = ((~ (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_16_1)) 
           & (IData)(vlSelfRef.mac_pe_tb__DOT__rst_n));
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_f_act_reg 
        = vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_psum_out 
        = vlSelfRef.mac_pe_tb__DOT__psum_out;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT__prev_act_out 
        = vlSelfRef.mac_pe_tb__DOT__act_out;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_1_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n;
    vlSelfRef.mac_pe_tb__DOT__chk__DOT___Vpast_16_1 
        = vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n;
}

void Vmac_pe_tb___024root___nba_sequent__TOP__1(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___nba_sequent__TOP__1\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ mac_pe_tb__DOT__dut__DOT__product;
    mac_pe_tb__DOT__dut__DOT__product = 0;
    // Body
    if (vlSelfRef.mac_pe_tb__DOT__rst_n) {
        if (vlSelfRef.mac_pe_tb__DOT__load_weight) {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight 
                = vlSelfRef.mac_pe_tb__DOT__weight_in;
            vlSelfRef.mac_pe_tb__DOT__dut__DOT__weight_reg 
                = vlSelfRef.mac_pe_tb__DOT__weight_in;
        }
        if (vlSelfRef.mac_pe_tb__DOT__enable) {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg 
                = vlSelfRef.mac_pe_tb__DOT__act_in;
            vlSelfRef.mac_pe_tb__DOT__psum_out = ((IData)(vlSelfRef.mac_pe_tb__DOT__clear_acc)
                                                   ? vlSelfRef.mac_pe_tb__DOT__dut__DOT__product_ext
                                                   : 
                                                  (vlSelfRef.mac_pe_tb__DOT__psum_in 
                                                   + vlSelfRef.mac_pe_tb__DOT__dut__DOT__product_ext));
            vlSelfRef.mac_pe_tb__DOT__act_out = vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg;
            vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg 
                = vlSelfRef.mac_pe_tb__DOT__act_in;
        }
    } else {
        vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight = 0U;
        vlSelfRef.mac_pe_tb__DOT__dut__DOT__weight_reg = 0U;
        vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg = 0U;
        vlSelfRef.mac_pe_tb__DOT__psum_out = 0U;
        vlSelfRef.mac_pe_tb__DOT__act_out = 0U;
        vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg = 0U;
    }
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

void Vmac_pe_tb___024root___eval_nba(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_nba\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vinline__nba_sequent__TOP__1_mac_pe_tb__DOT__dut__DOT__product;
    __Vinline__nba_sequent__TOP__1_mac_pe_tb__DOT__dut__DOT__product = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmac_pe_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.mac_pe_tb__DOT__rst_n) {
            if (vlSelfRef.mac_pe_tb__DOT__load_weight) {
                vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight 
                    = vlSelfRef.mac_pe_tb__DOT__weight_in;
                vlSelfRef.mac_pe_tb__DOT__dut__DOT__weight_reg 
                    = vlSelfRef.mac_pe_tb__DOT__weight_in;
            }
            if (vlSelfRef.mac_pe_tb__DOT__enable) {
                vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg 
                    = vlSelfRef.mac_pe_tb__DOT__act_in;
                vlSelfRef.mac_pe_tb__DOT__psum_out 
                    = ((IData)(vlSelfRef.mac_pe_tb__DOT__clear_acc)
                        ? vlSelfRef.mac_pe_tb__DOT__dut__DOT__product_ext
                        : (vlSelfRef.mac_pe_tb__DOT__psum_in 
                           + vlSelfRef.mac_pe_tb__DOT__dut__DOT__product_ext));
                vlSelfRef.mac_pe_tb__DOT__act_out = vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg;
                vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg 
                    = vlSelfRef.mac_pe_tb__DOT__act_in;
            }
        } else {
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight = 0U;
            vlSelfRef.mac_pe_tb__DOT__dut__DOT__weight_reg = 0U;
            vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg = 0U;
            vlSelfRef.mac_pe_tb__DOT__psum_out = 0U;
            vlSelfRef.mac_pe_tb__DOT__act_out = 0U;
            vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg = 0U;
        }
        vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_prod_ext 
            = VL_EXTENDS_II(32,16, (0x0000ffffU & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_weight))))));
        __Vinline__nba_sequent__TOP__1_mac_pe_tb__DOT__dut__DOT__product 
            = (0x0000ffffU & VL_MULS_III(16, (0x0000ffffU 
                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__dut__DOT__act_reg))), 
                                         (0x0000ffffU 
                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.mac_pe_tb__DOT__dut__DOT__weight_reg)))));
        vlSelfRef.mac_pe_tb__DOT__dut__DOT__product_ext 
            = (((- (IData)((1U & (__Vinline__nba_sequent__TOP__1_mac_pe_tb__DOT__dut__DOT__product 
                                  >> 0x0000000fU)))) 
                << 0x00000010U) | __Vinline__nba_sequent__TOP__1_mac_pe_tb__DOT__dut__DOT__product);
    }
}

void Vmac_pe_tb___024root___timing_ready(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___timing_ready\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h527aa988__0.ready("@(posedge mac_pe_tb.clk)");
    }
}

void Vmac_pe_tb___024root___timing_resume(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___timing_resume\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h527aa988__0.moveToResumeQueue(
                                                          "@(posedge mac_pe_tb.clk)");
    vlSelfRef.__VtrigSched_h527aa988__0.resume("@(posedge mac_pe_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmac_pe_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vmac_pe_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmac_pe_tb___024root___eval_phase__act(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_phase__act\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vmac_pe_tb___024root___eval_triggers_vec__act(vlSelf);
    Vmac_pe_tb___024root___timing_ready(vlSelf);
    Vmac_pe_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmac_pe_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmac_pe_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vmac_pe_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vmac_pe_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vmac_pe_tb___024root___eval_phase__inact(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_phase__inact\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("mac_pe_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vmac_pe_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmac_pe_tb___024root___eval_phase__nba(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_phase__nba\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmac_pe_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmac_pe_tb___024root___eval_nba(vlSelf);
        Vmac_pe_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vmac_pe_tb___024root___sample(Vmac_pe_tb___024root* vlSelf);

void Vmac_pe_tb___024root___eval(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vmac_pe_tb___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmac_pe_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("mac_pe_tb.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("mac_pe_tb.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vmac_pe_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("mac_pe_tb.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vmac_pe_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vmac_pe_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmac_pe_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0(Vmac_pe_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root____VbeforeTrig_h527aa988__0\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.mac_pe_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__mac_pe_tb__DOT__clk__0 
        = vlSelfRef.mac_pe_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h527aa988__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vmac_pe_tb___024root___sample(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___sample\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__act_out 
        = vlSelfRef.mac_pe_tb__DOT__act_out;
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_out 
        = vlSelfRef.mac_pe_tb__DOT__psum_out;
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__rst_n 
        = vlSelfRef.mac_pe_tb__DOT__rst_n;
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__enable 
        = vlSelfRef.mac_pe_tb__DOT__enable;
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_act_reg 
        = vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_act_reg;
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__clear_acc 
        = vlSelfRef.mac_pe_tb__DOT__clear_acc;
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__psum_in 
        = vlSelfRef.mac_pe_tb__DOT__psum_in;
    vlSelfRef.__Vsampled_TOP__mac_pe_tb__DOT__chk__DOT__f_prod_ext 
        = vlSelfRef.mac_pe_tb__DOT__chk__DOT__f_prod_ext;
}

#ifdef VL_DEBUG
void Vmac_pe_tb___024root___eval_debug_assertions(Vmac_pe_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmac_pe_tb___024root___eval_debug_assertions\n"); );
    Vmac_pe_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
