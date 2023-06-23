#include <stdio.h>
#include <sdtlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	va_list res;
	va_start(res, n);

	for(i = 0; i < n; i++)
	{
		int value = va_arg(res, int);
		sum += value;
	}
	va_end(res);
	return (sum);
}
