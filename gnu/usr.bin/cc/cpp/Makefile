# $FreeBSD: releng/12.1/gnu/usr.bin/cc/cpp/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

.include "../Makefile.inc"
.include "../Makefile.fe"

PROG=	gcpp
SRCS+=	cppspec.c

.if ${MK_CLANG_IS_CC} == "no"
LINKS=	${BINDIR}/gcpp ${BINDIR}/cpp
MLINKS=	gcpp.1 cpp.1
.endif

.include <bsd.prog.mk>
