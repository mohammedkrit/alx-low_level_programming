#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * that code for condition
 * and random number
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n<0)
	{
	printf("is negative \n");	
	}
	else if (n==0)
	{
	printf("is zero \n");
	}
	else if (n>0)
	{
	printf("is positiv \n");
	}
	return (0);
}
