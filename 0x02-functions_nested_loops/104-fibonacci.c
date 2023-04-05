#include <stdio.h>
#include <float.h>

/**
 * main - Entry point
 * Return: always 0 if success
 */

int main(void)
{
	int x;
	float n_1 = 0, n_2 = 1;
	float next = n_1 + n_2;

	for (x = 2; x <= 99; x++)
	{
		if (x <= 2)
		{
			if (x == 2)
			{
				printf("%d,", 1);
			}
			else
			{
				printf(" %d,", 1);
			}
		}
		else
		{
			n_1 = n_2;
			n_2 = next;
			next = n_1 + n_2;
			if (x == 99)
			{
				printf(" %.0f", next * 1000);
			}
			else
			{
				printf(" %.0f,", next * 1000);
			}
		}
	}
	printf("\n");

	return (0);
}
