#include <stdio.h>

/**
 * linear_search - implementation if a linear search algorithm.
 *
 * @array: pointer to an array of integers
 * @size: size of array
 * @value: value to serach for in array
 *
 * Return: index of value if found else return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		/** check if array at x == value */
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
