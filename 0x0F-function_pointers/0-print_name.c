#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - functin that print a name
 * @name: name of a personne
 * @f: pointer funtion that print
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
