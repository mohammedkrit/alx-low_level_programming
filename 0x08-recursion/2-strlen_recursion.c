#include "main.h"

/**
 * _strlen_recursion - function that calucul and return length of string
 * @s: ptr
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
