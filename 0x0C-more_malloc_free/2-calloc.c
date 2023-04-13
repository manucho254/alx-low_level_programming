#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to allocated else return NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *s;
	unsigned int n_size;

	if (nmemb == 0 || size == 0)
	{
		/** check if nmemb equal to 0 or size equal to 0 and return NULL */
		return (NULL);
	}

	n_size = nmemb * size;
	s = malloc(n_size); /** allocating memory using malloc*/

	if (s == NULL)
	{
		/** check if malloc fails */
		return (NULL);
	}

	return (s);
}
