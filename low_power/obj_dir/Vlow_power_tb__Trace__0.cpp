// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlow_power_tb__Syms.h"


void Vlow_power_tb___024root__trace_chg_sub_0(Vlow_power_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlow_power_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vlow_power_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlow_power_tb___024root*>(voidSelf);
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlow_power_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vlow_power_tb___024root__trace_chg_sub_0(Vlow_power_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->low_power_tb__DOT__count_base),4);
        bufp->chgCData(oldp+1,(vlSelf->low_power_tb__DOT__count_clk_gate),4);
        bufp->chgCData(oldp+2,(vlSelf->low_power_tb__DOT__count_pwr_gate),4);
    }
    bufp->chgBit(oldp+3,(vlSelf->low_power_tb__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->low_power_tb__DOT__reset));
    bufp->chgBit(oldp+5,(vlSelf->low_power_tb__DOT__enable));
    bufp->chgBit(oldp+6,(vlSelf->low_power_tb__DOT__power_on));
}

void Vlow_power_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_cleanup\n"); );
    // Init
    Vlow_power_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlow_power_tb___024root*>(voidSelf);
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
