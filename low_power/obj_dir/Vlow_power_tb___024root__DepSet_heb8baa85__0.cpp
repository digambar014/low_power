// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlow_power_tb.h for the primary calling header

#include "verilated.h"

#include "Vlow_power_tb__Syms.h"
#include "Vlow_power_tb___024root.h"

VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__0(Vlow_power_tb___024root* vlSelf);
VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__1(Vlow_power_tb___024root* vlSelf);

void Vlow_power_tb___024root___eval_initial(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_initial\n"); );
    // Body
    Vlow_power_tb___024root___eval_initial__TOP__0(vlSelf);
    Vlow_power_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0 
        = vlSelf->low_power_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0 
        = vlSelf->low_power_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__1(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "low_power_tb.v", 
                                           8);
        vlSelf->__Vdlyvval__low_power_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->low_power_tb__DOT__clk)));
        vlSelf->__Vdlyvset__low_power_tb__DOT__clk__v0 = 1U;
    }
}

void Vlow_power_tb___024root___eval_act(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vlow_power_tb___024root___nba_sequent__TOP__0(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__low_power_tb__DOT__count_clk_gate;
    __Vdly__low_power_tb__DOT__count_clk_gate = 0;
    CData/*3:0*/ __Vdly__low_power_tb__DOT__count_pwr_gate;
    __Vdly__low_power_tb__DOT__count_pwr_gate = 0;
    // Body
    __Vdly__low_power_tb__DOT__count_pwr_gate = vlSelf->low_power_tb__DOT__count_pwr_gate;
    __Vdly__low_power_tb__DOT__count_clk_gate = vlSelf->low_power_tb__DOT__count_clk_gate;
    if (vlSelf->low_power_tb__DOT__reset) {
        vlSelf->low_power_tb__DOT__count_base = 0U;
        __Vdly__low_power_tb__DOT__count_pwr_gate = 0U;
        __Vdly__low_power_tb__DOT__count_clk_gate = 0U;
    } else {
        vlSelf->low_power_tb__DOT__count_base = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->low_power_tb__DOT__count_base)));
        if (vlSelf->low_power_tb__DOT__power_on) {
            __Vdly__low_power_tb__DOT__count_pwr_gate 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->low_power_tb__DOT__count_pwr_gate)));
        }
        if (vlSelf->low_power_tb__DOT__enable) {
            __Vdly__low_power_tb__DOT__count_clk_gate 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->low_power_tb__DOT__count_clk_gate)));
        }
    }
    vlSelf->low_power_tb__DOT__count_pwr_gate = __Vdly__low_power_tb__DOT__count_pwr_gate;
    vlSelf->low_power_tb__DOT__count_clk_gate = __Vdly__low_power_tb__DOT__count_clk_gate;
}

VL_INLINE_OPT void Vlow_power_tb___024root___nba_sequent__TOP__1(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__low_power_tb__DOT__clk__v0) {
        vlSelf->low_power_tb__DOT__clk = vlSelf->__Vdlyvval__low_power_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__low_power_tb__DOT__clk__v0 = 0U;
    }
}

void Vlow_power_tb___024root___eval_nba(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlow_power_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlow_power_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vlow_power_tb___024root___eval_triggers__act(Vlow_power_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__act(Vlow_power_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vlow_power_tb___024root___timing_resume(Vlow_power_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__nba(Vlow_power_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlow_power_tb___024root___eval(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vlow_power_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vlow_power_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("low_power_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vlow_power_tb___024root___timing_resume(vlSelf);
                Vlow_power_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vlow_power_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("low_power_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vlow_power_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vlow_power_tb___024root___timing_resume(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vlow_power_tb___024root___eval_debug_assertions(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
