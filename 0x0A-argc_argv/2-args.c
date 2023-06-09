#include <stdio.h>
/**
 * main - function that prints all arguments it receives.
 * @argc: int
 * @argv: ls
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
