#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <ctype.h>

/**
 *
 *
 */

int main (int argc, int *argv[])
{
	int total;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for(int i = 0; i < argc; i++)
		{
			for(int j ;argv[i][j] != '\0'; j++)
			{
				if(!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
				total += atoi(argv[i]);
			}
		printf("%d",total);
		return (total);
	}
}
