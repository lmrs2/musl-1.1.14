#if _ZEROSTACK_
static inline struct pthread *__pthread_self(void)
#else
static inline struct pthread *__pthread_self()
#endif
{
	struct pthread *self;
	__asm__ __volatile__ ("mov %%fs:0,%0" : "=r" (self) );
	return self;
}

#define TP_ADJ(p) (p)

#define MC_PC gregs[REG_RIP]
