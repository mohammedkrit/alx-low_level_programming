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
		return(0);

	while (i--)
	{
		int num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
