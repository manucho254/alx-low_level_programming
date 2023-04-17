#include "dog.h"

/**
 * init_dog - function to initialize variable of type dog
 * @d: pointer to variable of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/** we could have also use (*d).variable = to initialize*/
	d->name = name;
	d->age = age;
	d->owner = owner;
}
