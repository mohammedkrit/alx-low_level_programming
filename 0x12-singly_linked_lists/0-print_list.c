#include "lists.h"

/**
 * _strlen - fun that return length of str
 * @s: string
 * Return: length of str
 */


int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (µ0);
	while (*s++)
		i++;
	return (i);
}



/**
 * print_lists - function that prints all the elements of a list_t list
 *  @h: the first node
 *  Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str : "(nill)");
		h = h->next;
		i++;
	}
	return (i);
}

