#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 1 (Success)
*/

int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int Last_digit = n % 10;
	printf ("Last digit of %d is ", n);
	if (Last_digit < 5)
	{
		printf("%d and is greater than 5\n", Last_digit);
	}
	else if (Last_digit == 0)
	{
		printf("%d and is 0\n", Last_digit);
	}
	else if (Last_digit < 6 && Last_digit != 0)
	{
		printf ("%d and is less than 6 and not 0\n", Last_digit);
	}
	return (0);
}
