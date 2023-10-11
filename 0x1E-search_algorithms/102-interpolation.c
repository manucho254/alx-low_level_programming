#include <stdio.h>

/**
 * interpolation_search - implementation if a interpolation search algorithm.
 *
 * @array: pointer to an array of integers
 * @size: size of array
 * @value: value to serach for in array
 *
 * Return: index of value if found else return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while ((array[high] != array[low]) &&
		(value >= array[low]) && (value <= array[high]))
	{
		pos = (low + (((double)(high - low)
		       / (array[high] - array[low])) * (value - array[low])));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
			printf("Value checked array[%ld] is out of range\n", pos);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);

	return (-1);
}
