#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - function that creates a new dog
 * @name: pointer to dogs name
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 * Return: pointer refrencing varible of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/** creating a new variable of type dog_t*/
	dog_t *nice_dog;

	nice_dog = malloc(sizeof(dog_t));

	if (nice_dog == NULL)
	{
		return (NULL);
	}

	nice_dog->name = name;
	nice_dog->age = age;
	nice_dog->owner = owner;

	/** pointer to object of type dog_t */

	return (nice_dog);
}
