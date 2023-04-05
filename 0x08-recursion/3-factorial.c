#include "main.h"

/**
 * factorial - function to calculate factorial of a given number
 * @n: number to calcute factorial of
 * Return: integer representing factorial of @n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
