#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: the dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner: "(nil)");
}
