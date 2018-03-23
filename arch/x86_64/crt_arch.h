__asm__(
".text \n"
".global " START " \n"
START ": \n"
"	xor %rbp,%rbp \n"
"	mov %rsp,%rdi \n"
#if _ZEROSTACK_
#ifdef SHARED
".weak _DYNAMIC \n"
".hidden _DYNAMIC \n"
"	lea _DYNAMIC(%rip),%rsi \n"
#endif
#endif
"	andq $-16,%rsp \n"
"	call " START "_c \n"
);
