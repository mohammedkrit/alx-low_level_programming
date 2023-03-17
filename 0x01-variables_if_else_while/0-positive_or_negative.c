#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - that code for condition and random number
 * return : (0)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
	printf("is negative \n, n");	
	}
	else if (n == 0)
	{
	printf("is zero \n", n);
	}
	else if (n > 0)
	{
	printf("is positiv \n", n);
	}
	return (0);
}
