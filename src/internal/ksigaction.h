/* This is the structure used for the rt_sigaction syscall on most archs,
 * but it can be overridden by a file with the same name in the top-level
 * arch dir for a given arch, if necessary. */
struct k_sigaction {
	void (*handler)(int);
	unsigned long flags;
	void (*restorer)(void);
	unsigned mask[2];
};
#if 1 // _ZEROSTACK_
void __restore(void), __restore_rt(void);
#else
void __restore(), __restore_rt();
#endif
