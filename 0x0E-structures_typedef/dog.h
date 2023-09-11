#ifndef DOG_H
#define DOG_H

/**
 * struct dog - refers to a structure representing a dog
 * @name: pointer to the dog's name
 * @age: pointer to the dog's age
 * @owner: pointer to the dog's owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
