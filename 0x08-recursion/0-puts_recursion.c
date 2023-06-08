#include <stdlib.h>
#include "main.h"

/**
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		puts ("\n");
	else
	{
		puts(*s);
		_puts_recursion(s + 1);
	}
}
