// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlow_power_tb.h for the primary calling header

#include "verilated.h"

#include "Vlow_power_tb__Syms.h"
#include "Vlow_power_tb__Syms.h"
#include "Vlow_power_tb___024root.h"

void Vlow_power_tb___024root___ctor_var_reset(Vlow_power_tb___024root* vlSelf);

Vlow_power_tb___024root::Vlow_power_tb___024root(Vlow_power_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlow_power_tb___024root___ctor_var_reset(this);
}

void Vlow_power_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlow_power_tb___024root::~Vlow_power_tb___024root() {
}
