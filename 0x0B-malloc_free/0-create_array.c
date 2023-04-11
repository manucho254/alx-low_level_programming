#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: sizeof array to create
 * @c: character to initialize array with
 * Return: NULL if size == 0 or pointer to the array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);
	unsigned int x;

	s[size] = '\0'; /** we add a null pointer to the end  of the array */

	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}

	return (s);
}
