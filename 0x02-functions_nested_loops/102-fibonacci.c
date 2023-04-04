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

	for (x = 1; x <= 50; x++)
	{
		if (x <= 2)
		{
			if (x == 1)
			{
				printf("%ld,", 1);
			}
			else
			{
				printf(" %ld,", 1);
			}
		}
		else
		{
			n_1 = n_2;
			n_2 = next;
			next = n_1 + n_2;
			if (x == 50)
			{
				printf(" %ld", 1);
			}
			else
			{
				printf(" %ld,", next);
			}
		}
	}

	return (0);
}
