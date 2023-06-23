#include "variadic_functions.h"

/**
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n;
	int sum = 0;

	va_list res;
        if (!n)
                return (0);

	va_start(res, n);

	while(i--)
	{
		sum += va_arg(res, int);
	}
	va_end(res);
	return (sum);
}
