#include <stdio.h>

#if defined(LIB1)
extern void lib1fn() {
	printf("- lib1fn\n");
# if defined(LIB2)
	printf("^- note: LIB2 was defined while compiling LIB1 too.\n");
# endif
}
#endif
