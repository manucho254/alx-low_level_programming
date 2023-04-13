#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b:amount of memory to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *num;

	num = malloc(b);

	if (num == NULL)
	{
		exit(98);
	}

	return (num);
}
