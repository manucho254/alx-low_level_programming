#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated,
 * space in memory, which contains a copy of the string given a parameter,
 * @str: pointer of a string array
 * Return: NULL if size == 0 or pointer to the newly allocated space,
 * in memory
 */

char *_strdup(char *str)
{
	int size = 0;
	int x;

	if (str != NULL)
	{
		for (x = 0; str[x] != '\0'; x++)
		{
			size += 1;
		}
	}

	char *s = malloc(sizeof(char) * size);


	if (str == NULL || s == NULL)
	{
		return (NULL);
	}

	s[size] = '\0'; /** we add a null pointer to the end  of the array */
	for (x = 0; x < size; x++)
	{
		s[x] = str[x];
	}

	return (s);
}
