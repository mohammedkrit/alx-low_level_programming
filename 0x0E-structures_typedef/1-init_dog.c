#include <stio.h>
#include "doh.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: make sure null dosn exist
 * @name: name of dog
 * @age: hes age
 * @owner: owner of the dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
}
