#pragma once

#include "type.h"

// Same for all regions
#define PayloadAddress (void*)0x31B6190//0x2B9D2B0 1.27 & 1.00
#define GTAVarsAddress (void*)0x31C80FA//0x2DCDA30 1.27 & 1.00

#define SyscallAddress (void*)0x31B616C//0x2B9D28C 1.27 & 1.00
#define SyscallBytes 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF7, 0x48, 0x89, 0xD6, 0x48, 0x89, 0xCA, 0x4D, 0x89, 0xC2, 0x4D, 0x89, 0xC8, 0x4C, 0x8B, 0x4C, 0x24, 0x08, 0x0F, 0x05, 0xC3
/*
mov rax, rdi
mov rdi, rsi
mov rsi, rdx
mov rdx, rcx
mov r10, r8
mov r8, r9
mov r9, [rsp+0x8]
syscall
ret
*/

// Location not important, just any place in the EBOOT that the regions differ
#define RegionCheckAddress (void*)0xFBDBD4//0xD8F304 1.27 & 1.00
// #define USRegionBytes 0x8B10478B48535641//1.00
#define RegionBytes 0x4410478B48535641//0x00841F0F2E666666 1.27 & 1.00

// IS_PLAYER_ONLINE
// #define USHookAddress (void*)0xD8F489//1.00
#define HookAddress (void*)0xFBDD59//0xD8F499 1.27 & 1.00
#define HookBytes 0x48, 0xC7, 0xC1, 0x90, 0x61, 0x1B, 0x03, 0xFF, 0xD1, 0x90//0x48, 0xC7, 0xC1, 0xB0, 0xD2, 0xB9, 0x02, 0xFF, 0xD1, 0x90
/*
mov rcx, 0x2B9D2B0 // PayloadAddress
call rcx
nop
*/

struct _gtaVars {
	BOOL allocationNeeded;
	int allocationSize;
	void* executableSpace;
	void* dataSpace;
};
static struct _gtaVars *gtaVars = (struct _gtaVars*)GTAVarsAddress;

BOOL nativeHook();