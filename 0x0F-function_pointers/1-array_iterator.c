#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter,
 * on each element of an array
 * @size: size of @array
 * @array: pointer to array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
