#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free type dog
 * @d: pointer to type dog
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
