// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlow_power_tb__Syms.h"


VL_ATTR_COLD void Vlow_power_tb___024root__trace_init_sub__TOP__0(Vlow_power_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("low_power_tb ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBit(c+6,"enable", false,-1);
    tracep->declBit(c+7,"power_on", false,-1);
    tracep->declBus(c+1,"count_base", false,-1, 3,0);
    tracep->declBus(c+2,"count_clk_gate", false,-1, 3,0);
    tracep->declBus(c+3,"count_pwr_gate", false,-1, 3,0);
    tracep->pushNamePrefix("u1 ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+1,"count", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBit(c+6,"enable", false,-1);
    tracep->declBus(c+2,"count", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u3 ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBit(c+7,"power_on", false,-1);
    tracep->declBus(c+3,"count", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vlow_power_tb___024root__trace_init_top(Vlow_power_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_init_top\n"); );
    // Body
    Vlow_power_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vlow_power_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlow_power_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlow_power_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vlow_power_tb___024root__trace_register(Vlow_power_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vlow_power_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vlow_power_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vlow_power_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vlow_power_tb___024root__trace_full_sub_0(Vlow_power_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlow_power_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_full_top_0\n"); );
    // Init
    Vlow_power_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlow_power_tb___024root*>(voidSelf);
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlow_power_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlow_power_tb___024root__trace_full_sub_0(Vlow_power_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlow_power_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlow_power_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->low_power_tb__DOT__count_base),4);
    bufp->fullCData(oldp+2,(vlSelf->low_power_tb__DOT__count_clk_gate),4);
    bufp->fullCData(oldp+3,(vlSelf->low_power_tb__DOT__count_pwr_gate),4);
    bufp->fullBit(oldp+4,(vlSelf->low_power_tb__DOT__clk));
    bufp->fullBit(oldp+5,(vlSelf->low_power_tb__DOT__reset));
    bufp->fullBit(oldp+6,(vlSelf->low_power_tb__DOT__enable));
    bufp->fullBit(oldp+7,(vlSelf->low_power_tb__DOT__power_on));
}
