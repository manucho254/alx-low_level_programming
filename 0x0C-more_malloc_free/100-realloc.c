#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: new size in bytes of new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_arr;
	int x, y;

	new_arr = malloc(new_size);

	if (new_arr == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_arr = malloc(new_size);
	}

	if (new_size < old_size)
	{
		for (x = 0; x < new_size)
		{
			new_arr[x] = 0;
		}
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}
