// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlow_power_tb.h for the primary calling header

#ifndef VERILATED_VLOW_POWER_TB___024ROOT_H_
#define VERILATED_VLOW_POWER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vlow_power_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlow_power_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ low_power_tb__DOT__clk;
    CData/*0:0*/ low_power_tb__DOT__reset;
    CData/*0:0*/ low_power_tb__DOT__enable;
    CData/*0:0*/ low_power_tb__DOT__power_on;
    CData/*3:0*/ low_power_tb__DOT__count_base;
    CData/*3:0*/ low_power_tb__DOT__count_clk_gate;
    CData/*3:0*/ low_power_tb__DOT__count_pwr_gate;
    CData/*0:0*/ __Vdlyvval__low_power_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__low_power_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__low_power_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__low_power_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlow_power_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlow_power_tb___024root(Vlow_power_tb__Syms* symsp, const char* v__name);
    ~Vlow_power_tb___024root();
    VL_UNCOPYABLE(Vlow_power_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
