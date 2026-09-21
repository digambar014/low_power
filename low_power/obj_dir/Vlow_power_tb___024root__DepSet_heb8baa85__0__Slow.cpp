// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlow_power_tb.h for the primary calling header

#include "verilated.h"

#include "Vlow_power_tb__Syms.h"
#include "Vlow_power_tb___024root.h"

VL_ATTR_COLD void Vlow_power_tb___024root___eval_static__TOP(Vlow_power_tb___024root* vlSelf);

VL_ATTR_COLD void Vlow_power_tb___024root___eval_static(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_static\n"); );
    // Body
    Vlow_power_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vlow_power_tb___024root___eval_static__TOP(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->low_power_tb__DOT__clk = 0U;
    vlSelf->low_power_tb__DOT__reset = 1U;
    vlSelf->low_power_tb__DOT__enable = 0U;
    vlSelf->low_power_tb__DOT__power_on = 0U;
}

VL_ATTR_COLD void Vlow_power_tb___024root___eval_final(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vlow_power_tb___024root___eval_settle(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__act(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge low_power_tb.clk or posedge low_power_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__nba(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge low_power_tb.clk or posedge low_power_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlow_power_tb___024root___ctor_var_reset(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->low_power_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->low_power_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->low_power_tb__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->low_power_tb__DOT__power_on = VL_RAND_RESET_I(1);
    vlSelf->low_power_tb__DOT__count_base = VL_RAND_RESET_I(4);
    vlSelf->low_power_tb__DOT__count_clk_gate = VL_RAND_RESET_I(4);
    vlSelf->low_power_tb__DOT__count_pwr_gate = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__low_power_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__low_power_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
