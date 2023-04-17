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
	if (d == NULL)
	{
		return;
	}
	/** method two on initializing a variable of type dog */
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
