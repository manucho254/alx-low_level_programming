#include "main.h"

/**
 * reverse_array - function to reverse an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int len = (n - 1); /** number of items in array - 1 */
	int mid = (n / 2); /** middle of the array */
	int x;

	for (x = 0; x < mid; x++)
	{
		int tmp;

		tmp = a[x];
		a[x] = a[len];
		a[len] = tmp;
		len--;
	}
}
