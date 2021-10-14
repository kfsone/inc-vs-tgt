#include <stdio.h>

#if defined(LIB2)
extern void lib2fn() {
	printf("- lib2fn\n");
}
#endif
