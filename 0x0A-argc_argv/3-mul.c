#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: int
 * @argv: ls
 * Return: 0 if she  failed 1 if she is success
 */
int main(int argc, char const *argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int result = n1 * n2;

	if (argc == 3)
	{
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
