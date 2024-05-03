// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper__pch.h"
#include "Vpicorv32_wrapper_picorv32_wrapper.h"

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___eval_static__TOP__picorv32_wrapper\n"); );
    // Body
    vlSelf->__PVT__irq = 0U;
    vlSelf->__PVT__count_cycle = 0U;
}

VL_ATTR_COLD void Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset(Vpicorv32_wrapper_picorv32_wrapper* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpicorv32_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpicorv32_wrapper_picorv32_wrapper___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->trap = VL_RAND_RESET_I(1);
    vlSelf->trace_valid = VL_RAND_RESET_I(1);
    vlSelf->trace_data = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__irq = VL_RAND_RESET_I(32);
    vlSelf->__PVT__count_cycle = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mem_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_axi_rready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__firmware_file);
    vlSelf->__PVT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__eoi = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uut__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__axi_adapter__DOT__xfer_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_delay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_pending = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_xfer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_retirq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_trace = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_wait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_eq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_ltu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__alu_lts = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->uut__DOT__picorv32_core__DOT____Vlvbound_h42d012a2__0 = VL_RAND_RESET_I(32);
    vlSelf->uut__DOT__picorv32_core__DOT____VdfgRegularize_hc635ebbb_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_RAND_RESET_I(7);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__uut__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uut__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__uut__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
}