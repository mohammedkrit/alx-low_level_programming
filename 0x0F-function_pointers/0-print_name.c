#include "function_pointers.h"

/**
 * print_name - func that print a name
 * @name: string
 * @f: pnt
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
