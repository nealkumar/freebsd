# $FreeBSD: releng/12.1/sys/modules/vx/Makefile 314651 2017-03-04 10:10:17Z ngie $

SYSDIR?=${SRCTOP}/sys
.include "${SYSDIR}/conf/kern.opts.mk"

.PATH: ${SYSDIR}/dev/vx

KMOD=	if_vx
SRCS=	if_vx.c if_vx_pci.c
SRCS+=	device_if.h bus_if.h pci_if.h

.include <bsd.kmod.mk>
