#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - that prints the sum of the,
 * two diagonals of a square matrix of integers.
 * @a: array to print
 * @size: number of rows in multidemensional array
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int arr_size = size * size;
	long int sum_fwd = 0; /** store sum of values from top to bottom */
	long int sum_bwd = 0; /** store sum of values from bottom to top */

	/** get values from to to bottom */
	for (x = 0; x < arr_size; x++)
	{
		if (x % size == 0)
		{
			sum_fwd += a[x + (x / size)];
		}
	}

	/** get values from bottom to top */
	for (y = (arr_size - 1); y >= 0; y--)
	{
		if (y == (arr_size - size))
		{
			sum_bwd += a[arr_size - (size)];
		}
		if (y % size == 0)
		{
			sum_bwd += a[y - (y / size)];
		}
	}

	printf("%ld, %ld\n", sum_fwd, sum_bwd);
}
