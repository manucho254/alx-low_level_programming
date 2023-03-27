#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print @n elements array
 * @a: array to get values from
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != 0)
		{
			printf(" ");
		}

		printf("%d", a[x]);

		if (x != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
