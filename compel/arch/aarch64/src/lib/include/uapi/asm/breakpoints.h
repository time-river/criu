#ifndef __COMPEL_BREAKPOINTS_H__
#define __COMPEL_BREAKPOINTS_H__
#define ARCH_SI_TRAP TRAP_BRKPT

int ptrace_set_breakpoint(pid_t pid, void *addr);
int ptrace_flush_breakpoints(pid_t pid);

#endif
