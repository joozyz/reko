// retpoline_stripped_text.c
// Generated by decompiling retpoline_stripped.elf
// using Reko decompiler version 0.9.1.0.

#include "retpoline_stripped_text.h"

// 0000000000400480: void fn0000000000400480(Register (ptr64 Eq_n) rdx, Stack Eq_n qwArg00)
void fn0000000000400480(void (* rdx)(), Eq_n qwArg00)
{
	__align((char *) fp + 0x08);
	__libc_start_main(&globals->t400660, qwArg00, (char *) fp + 0x08, &globals->t400710, &globals->t400780, rdx, fp);
	__hlt();
}

// 00000000004004B0: void fn00000000004004B0()
void fn00000000004004B0()
{
	if (0x00 == 0x00 || 0x00 == 0x00)
		return;
	null();
}

// 0000000000400560: void fn0000000000400560(Register word32 esi, Register word32 edi)
void fn0000000000400560(word32 esi, word32 edi)
{
	calloc((int64) edi, (int64) esi);
}

// 00000000004006F0: void fn00000000004006F0()
void fn00000000004006F0()
{
	fn0000000000400700();
	while (true)
		__pause();
}

// 0000000000400700: void fn0000000000400700()
void fn0000000000400700()
{
}

