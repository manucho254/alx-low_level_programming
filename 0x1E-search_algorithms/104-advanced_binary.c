#include <stdio.h>

int _abs(float val);
int _floor(float val);
void print_array(int *array, int start, int end);
int binary_search(int *array, int left, int right, int value);

/**
 * advanced_binary - implementation of an advance binary search
 * algorithm that finds an item in an array with duplicates.
 *
 * @array: pointer to an array of integers
 * @size: size of array
 * @value: value to serach for in array
 *
 * Return: index of value if found else return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	return (binary_search(array, left, right, value));

}

/**
 * binary_search - implementation if a binary search algorithm.
 *
 * @array: pointer to an array of integers
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to serach for in array
 *
 * Return: index of value if found else return -1
 */


int binary_search(int *array, int left, int right, int value)
{
	int mid = left + (right - left) / 2;

	if (left > right)
		return (-1);

	print_array(array, left, right);
	/** If the element is present at the middle itself */
	if (array[mid] == value)
	{
		/** find left most value if we have duplicates in array */
		int leftmost_index = binary_search(array, left, mid - 1, value);

		if (leftmost_index != -1)
			return (leftmost_index);
		return (mid);
	}
	/** If element is smaller than mid, then */
	/** it can only be present in left subarray */
	else if (array[mid] > value)
		return (binary_search(array, left, mid - 1, value));
	/** Else the element can only be present */
	/** in right subarray */
	else
		return (binary_search(array, mid + 1, right, value));

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
