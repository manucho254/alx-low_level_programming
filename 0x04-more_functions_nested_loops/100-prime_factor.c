#include <math.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * Return: always 0 if success else 1
 */

int main(void)
{
	long int n = 612852475143;
	int x;
	int k;

	for (x = 2; x <= sqrt(n); x++)
	{
		if (n % x == 0)
		{
			while (n % x == 0)
			{
				k = x;
				n = n / x;
			}
		}
	}

	printf("%lu\n", k);
	return (0);
}
