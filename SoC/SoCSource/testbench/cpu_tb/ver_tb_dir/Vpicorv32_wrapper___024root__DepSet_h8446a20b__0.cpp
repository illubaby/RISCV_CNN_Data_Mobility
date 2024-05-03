// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"
#include "Vpicorv32_wrapper___024root.h"

void Vpicorv32_wrapper___024root___eval_triggers__ico(Vpicorv32_wrapper___024root* vlSelf);
void Vpicorv32_wrapper___024root___eval_ico(Vpicorv32_wrapper___024root* vlSelf);

bool Vpicorv32_wrapper___024root___eval_phase__ico(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vpicorv32_wrapper___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vpicorv32_wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vpicorv32_wrapper___024root___eval_act(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_act\n"); );
}

void Vpicorv32_wrapper___024root___eval_triggers__act(Vpicorv32_wrapper___024root* vlSelf);

bool Vpicorv32_wrapper___024root___eval_phase__act(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpicorv32_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpicorv32_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vpicorv32_wrapper___024root___eval_nba(Vpicorv32_wrapper___024root* vlSelf);

bool Vpicorv32_wrapper___024root___eval_phase__nba(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpicorv32_wrapper___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__ico(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__nba(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpicorv32_wrapper___024root___dump_triggers__act(Vpicorv32_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vpicorv32_wrapper___024root___eval(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("testbench/cpu_tb/testbench.v", 67, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpicorv32_wrapper___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpicorv32_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/cpu_tb/testbench.v", 67, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpicorv32_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/cpu_tb/testbench.v", 67, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpicorv32_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpicorv32_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpicorv32_wrapper___024root___eval_debug_assertions(Vpicorv32_wrapper___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpicorv32_wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG