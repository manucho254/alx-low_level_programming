#include "dog.h"
#include <string.h>

/**
 * init_dog - function to initialize variable of type dog
 * @d: pointer to variable of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	char nil[] = "nil";

	/** method two on initializing a variable of type dog */
	if (name == NULL)
	{
		name = nil;
	}
	if (owner == NULL)
	{
		owner = nil;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
