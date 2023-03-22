#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 1 if success
 *
 */

int main(void)
{
	int x;
	int sum;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
