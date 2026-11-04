# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1
# VPI enabled?  0/1 (from --vpi)
VM_VPI = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtb \
  Vtb___024root__0 \
  Vtb_branch_predictor_interface__0 \
  Vtb_unit_issue_interface__0 \
  Vtb_unit_writeback_interface__0 \
  Vtb_ras_interface__0 \
  Vtb_tlb_interface__0 \
  Vtb_local_memory_interface__0 \
  Vtb_load_store_queue_interface__0 \
  Vtb_writeback_store_interface__0 \
  Vtb_fetch_sub_unit_interface__0 \
  Vtb_fifo_interface__D2__0 \
  Vtb_fifo_interface__D3__0 \
  Vtb_fifo_interface__D9__0 \
  Vtb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtb_vm_classes_Slow_0 \
  Vtb___024root__0__Slow \
  Vtb_vm_classes_Slow_1 \
  Vtb_vm_classes_Slow_2 \
  Vtb_vm_classes_Slow_3 \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtb__Syms__Slow \
  Vtb__Trace__0__Slow \
  Vtb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_vcd_c \
  verilated_timing \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
