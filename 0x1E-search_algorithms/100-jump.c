#include <stdio.h>
#include <math.h>

void print_array(int *array, int start);

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
 * jump_search - implementation of jump search algorithm
 *
 * @array: pointer to array to search in
 * @size: size of array
 * @value: value to search for in array
 *
 * Return: index where value is located else return -1.
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i, x;

	if (array == NULL)
		return (-1);

	start = 0;
	end = (int)sqrt(size);

	while (array[end] <= value && end < size)
	{
		if (array[end] != value)
			print_array(array, start);
		else
			break;

		start = end;
		end += (int)sqrt(size);

		if (end > size - 1)
		{
			print_array(array, start);
			printf("Value found between indexes [%ld] and [%ld]\n", start, end);
			for (i = start; i < size; i++)
			{
				print_array(array, i);
				if (array[i] == value)
					break;
			}
			return (-1);
		}
	}

	for (i = start; i <= end; i++)
	{
		if (array[i] == value)
		{
			print_array(array, start);
			printf("Value found between indexes [%ld] and [%ld]\n", start, end);
			for (x = start; x <= end; x++)
			{
				print_array(array, x);
				if (array[x] == value)
					break;
			}
			return (i);
		}
	}

	return (-1);
}

/**
 * print_array - print check indexes and value
 *
 * @array: an array of strings
 * @start: previous value
 */

void print_array(int *array, int start)
{
	printf("Value checked array [%d] = [%d]\n", start, array[start]);
}
