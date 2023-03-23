#include <math.h>
#include <stdio.h>

long long int largest_prime_factor(long long int n);

/**
 * main - entry point
 *
 * Return: always 0 if success else 1
 */

int main(void)
{
	long long int n = 612852475143;

	printf("%llu\n", largest_prime_factor(n));

	return (0);
}

/**
 * largest_prime_factor - function to get the largest prime factor
 *
 * @n: value to find largest prime factor
 *
 * Return: return an integer
 */

long long int largest_prime_factor(long long int n)
{
	int x;

	for (x = 2; x <= sqrt(n); x++)
	{
		if (n % x == 0)
		{
			while (n % x == 0)
			{
				n = n / x;
			}
		}
	}
	return (n);
}
