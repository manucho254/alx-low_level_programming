#include <stdio.h>

int _floor(float val);
void print_array(int *array, int start, int end);

/**
 * get_min - get the minimum between two numbers
 *
 * @num_a: first number to compare.
 * @num_b: second number to compare.
 *
 * Return: the minimum between two numbers.
 */

size_t get_min(int num_a, int num_b)
{
	if (num_b > num_a)
		return (num_a);
	else
		return (num_b);
}

/**
 * binary_search - implementation if a binary search algorithm.
 *
 * @array: pointer to an array of integers
 * @left: left position
 * @right: right position
 * @value: value to search for in array
 *
 * Return: index of value if found else return -1
 */

int binary_search(int *array, int left, int right, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (_floor(right + left) / 2);

		print_array(array, left, right);
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
			return (mid);
	}

	return (-1);
}


/**
 * exponential_search - implementation if a exponential search algorithm.
 *
 * @array: pointer to an array of integers
 * @size: size of array
 * @value: value to serach for in array
 *
 * Return: index of value if found else return -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, left, right;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = get_min(bound + 1, size);

	printf("Value found between indexes [%ld] and [%ld]\n", left, right - 1);
	return (binary_search(array, left, right - 1, value));
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
	if (val < 0)
		return ((int)(val * -1));
	else
		return ((int)(val));
}

/**
 * print_array - print all values in an array
 *
 * @array: an array of integers
 * @start: starting point of array
 * @end: ending point of array
 */

void print_array(int *array, int start, int end)
{
	int x;

	printf("Searching in array:");
	for (x = start; x <= end; x++)
	{
		if (x != end)
			printf(" %d,", array[x]);
		else
			printf(" %d", array[x]);
	}

	printf("\n");
}
