#include "variadic_functions.h"

/**
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;

	va_list args;

	if (!n)
	{
		printf("\n");
		return(0);
	}

	va_start(args, n);


	while (i--)
	{
		printf("%d%s", va_arg(args, int),
			i ? (separatot ? separator : "") : "\n");
	}

	va_end(args);
}
