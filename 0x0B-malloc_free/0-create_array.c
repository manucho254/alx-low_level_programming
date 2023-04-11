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
	if (size == 0)
	{
		return (NULL);
	}

	char *s = malloc(sizeof(char) * size);
	unsigned int x;

	s[size] = '\0'; /** we add a null pointer to the end  of the array */

	for (x = 0; x < size; x++)
	{
		s[0] = c;
	}

	return (s);
}