#include <stdio.h>
/**
 * main - function that prints all arguments it receives.
 * @argc: int
 * @argv: ls
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
