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
	int tmp; /** temporary variable */
	int x;

	if (n == 2)
	{
		tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
	else
	{
		for (x = 0; x <= mid; x++)
		{
			tmp = a[x];
			a[x] = a[len];
			a[len] = tmp;
			len--;
		}
	}
}
