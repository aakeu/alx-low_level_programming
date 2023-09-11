#include "dog.h"

/**
 * init_dog - initialization of a dog struct
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the dog's name
 * @age: Dog's Age
 * @owner: Pointer to owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
