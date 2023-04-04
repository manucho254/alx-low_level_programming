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

	if (n <= 2)
	{
		return (1);
	}

	for (x = 1; x <= 50; x++)
	{
		n_1 = n_2;
		n_2 = next;
		next = n_1 + n_2;
		printf("%ld \n", next);
	}

	return (0);
}
