/* 
** Copyright 2001, Travis Geiselbrecht. All rights reserved.
** Distributed under the terms of the NewOS License.
*/
#define SYSCALL0(name, n) \
.globl name; \
.align 4; \
name:

#define SYSCALL1(name, n) \
.globl name; \
.align 4; \
name:

#define SYSCALL2(name, n) \
.globl name; \
.align 4; \
name:

#define SYSCALL3(name, n) \
.globl name; \
.align 4; \
name:

#define SYSCALL4(name, n) \
.globl name; \
.align 4; \
name:

#define SYSCALL5(name, n) \
.globl name; \
.align 4; \
name:

#define SYSCALL6(name, n) \
.globl name; \
.align 4; \
name:
