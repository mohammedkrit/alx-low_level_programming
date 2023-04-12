#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int a = 0, size = 0;
	char *b;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; a < size; a++)
			m[a] = str[a];
	}
	return (m);
}
