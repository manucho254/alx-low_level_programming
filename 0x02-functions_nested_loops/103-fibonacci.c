#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 if success
 */

int main(void)
{
	int x;
	long int n_1 = 0, n_2 = 1;
	long int next = n_1 + n_2;
	long int sum = 0;

	for (x = 2; next <= 4000000; x++)
	{
		n_1 = n_2;
		n_2 = next;
	    next = n_1 + n_2;

		if (next % 2 == 0)
		{
			sum += next;
		}
	}

	printf("%ld", sum);
	printf("\n");

	return (0);
}
