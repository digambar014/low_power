// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlow_power_tb.h for the primary calling header

#include "verilated.h"

#include "Vlow_power_tb__Syms.h"
#include "Vlow_power_tb__Syms.h"
#include "Vlow_power_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vlow_power_tb___024root___eval_initial__TOP__0(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "low_power_tb.v", 
                                       34);
    vlSelf->low_power_tb__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "low_power_tb.v", 
                                       36);
    vlSelf->low_power_tb__DOT__enable = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "low_power_tb.v", 
                                       38);
    vlSelf->low_power_tb__DOT__power_on = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "low_power_tb.v", 
                                       40);
    vlSelf->low_power_tb__DOT__enable = 1U;
    vlSelf->low_power_tb__DOT__power_on = 1U;
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "low_power_tb.v", 
                                       42);
    VL_FINISH_MT("low_power_tb.v", 42, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlow_power_tb___024root___dump_triggers__act(Vlow_power_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vlow_power_tb___024root___eval_triggers__act(Vlow_power_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->low_power_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->low_power_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0 
        = vlSelf->low_power_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0 
        = vlSelf->low_power_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlow_power_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
