#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *        two strings
 * @dest: pointer to description input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
