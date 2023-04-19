#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: size of @array
 * @array: pointer to array
 * @cmp: pointer to function
 * Return: index to the first element found in array,
 * else returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp && array)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) > 0)
			{
				return (x);
			}
		}
	}

	return (-1);
}
