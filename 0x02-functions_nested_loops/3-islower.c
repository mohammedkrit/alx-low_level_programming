#include "main.h"

/**
 * _islower - checks for lowcase charcter
 * @c : character to check
 * return : if 1 lowecase , if 0 not lower case
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
