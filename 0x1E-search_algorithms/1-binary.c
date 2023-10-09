#include <stddef.h>

int _abs(float val);
int _floor(float val);

/**
 * binary_search - implementation if a binary search algorithm.
 *
 * @array: pointer to an array of integers
 * @size: size of array
 * @value: value to serach for in array
 *
 * Return: index of value if found else return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (_floor(right + left) / 2);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * _abs - get absolute value of a number
 *
 * @val: floating value to convert.
 *
 * Return: a non negative number
 */

int _abs(float val)
{
	if (val > 0)
		return (val);
	else
		return (val - 1);
}

/**
 * _floor - floar value of a number
 *
 * @val: floating value to convert.
 *
 * Return: an integer from a float
 */

int _floor(float val)
{
	return ((int)(_abs(val)));
}
