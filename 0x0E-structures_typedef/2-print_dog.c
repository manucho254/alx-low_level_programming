#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print values of elements,
 * variable of type dog
 * @d: pointer to variable of type dog
 */

void print_dog(struct dog *d)
{
	char nil[] = "(nil)";
	float NAN = 0.0/0.0;

	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name == NULL ? nil : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? nil : d->owner);
}
