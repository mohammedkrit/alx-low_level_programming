#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structer
 * @name: name of the dog
 * @age: hes age
 * @owner: owner of the dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
}i;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
