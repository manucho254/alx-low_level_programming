#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: first integer in array
 * @max: last integer in array
 * Return: pointer to integer array
 */

int *array_range(int min, int max)
{
	int *n_arr; /** pointer to integer array */
	int x, y = 0;

	if (min > max)
	{
		/** check if min is greater than max */
		return (NULL);
	}

	n_arr = malloc(sizeof(int *) * max);

	if (n_arr == NULL)
	{
		return (NULL);
	}

	for (x = min; x <= max; x++)
	{
		n_arr[y] = x;
		y++;
	}

	return (n_arr);
}
