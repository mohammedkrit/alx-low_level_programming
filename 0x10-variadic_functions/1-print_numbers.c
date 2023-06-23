#include "stdarg.h"

/**
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;

	va_list args;
	va_start(args, n);

	if (!n)
		printf("\n");
		return(0);

	while (i--)
	{
		int num = va_arg(args, int);
		printf("%d%s", num),
			i ? (separatot ? separator : "") : "\n");
	}

	va_end(args);
}
