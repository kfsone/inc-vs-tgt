#include <stdio.h>

#if defined(LIB1)
extern void lib1fn() {
	printf("- lib1fn\n");
}
#endif
