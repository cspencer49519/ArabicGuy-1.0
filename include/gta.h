#pragma once

#include "type.h"

// Same for all regions
#define PayloadAddress (void*)0x31B61A4

// Different for 1.32, same for all others
#define GTAVarsAddress (void*)0x32500FA

#define SyscallAddress (void*)0x31B616C
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
#define RegionCheckAddress (void*)0xD8F304
// #define USRegionBytes
#define RegionBytes 0xC48348F089444002

// IS_PLAYER_ONLINE
#define HookAddress (void*)0xFE5539//0xD8F499 1.27 & 1.00
#define HookBytes 0x48, 0xC7, 0xC1, 0xA4, 0x61, 0x1B, 0x03, 0xFF, 0xD1, 0x90//0x48, 0xC7, 0xC1, 0xB0, 0xD2, 0xB9, 0x02, 0xFF, 0xD1, 0x90

struct _gtaVars {
	BOOL allocationNeeded;
	int allocationSize;
	void* executableSpace;
	void* dataSpace;
};
static struct _gtaVars *gtaVars = (struct _gtaVars*)GTAVarsAddress;

BOOL nativeHook();