#include <stdio.h>
#include <stdlib.h>
#include <dog.h>

/**
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);
	printf("%s\n",((d->name) == NULL) ? d->name : "nil");
	printf("%s\n",d->age);
	printf("%s\n,((d->owner) == NULL) ? d->owner : "nil");
}
