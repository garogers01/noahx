#include <stdio.h>
#include <stdlib.h>
#include "panic.h"

_Noreturn void
_panic(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(EXIT_FAILURE);
}

