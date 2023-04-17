#include "dog.h"
#include <stdlib.h>
#include <string.h>

char *copy_string(char *str, int len);
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
	int len_name = strlen(name);
	int len_owner = strlen(owner);
	char *new_name, *new_owner;

	nice_dog = malloc(sizeof(dog_t));

	if (nice_dog == NULL)
	{
		return (NULL);
	}

	new_name = copy_string(name, len_name);
	new_owner = copy_string(owner, len_owner);

	if (new_name == NULL || new_owner == NULL)
	{
		return (NULL);
	}
	else
	{
		nice_dog->name = new_name;
		nice_dog->age = age;
		nice_dog->owner = new_owner;
	}

	/** pointer to object of type dog_t */

	return (nice_dog);
}

/**
 * *copy_string - function to copy string
 * @str: string to be copied
 * @len: size of the string
 * Return: a pointer to string array
 */

char *copy_string(char *str, int len)
{
	char *s;
	int x;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		return (NULL);
	}

	s[len] = '\0';

	for (x = 0; x < len; x++)
	{
		s[x] = str[x];
	}

	return (s);
}

