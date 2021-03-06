# $FreeBSD: releng/12.1/lib/libc/sparc64/fpu/Makefile.inc 262722 2014-03-04 02:19:39Z marcel $

.PATH: ${LIBC_SRCTOP}/sparc64/fpu

CFLAGS+= -I${LIBC_SRCTOP}/sparc64/sys

SRCS+=	fpu.c fpu_add.c fpu_compare.c fpu_div.c fpu_explode.c fpu_implode.c \
	fpu_mul.c fpu_qp.c fpu_reg.S fpu_sqrt.c fpu_subr.c
