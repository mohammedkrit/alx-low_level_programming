#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/

int main(void)
{
	char c ='a';

	while( c <= 'z')
	{
	putchar (c);
	c++;
	}
	putchar ('\n');
	return (0);
}
