#include <stdio.h>

int fib(int n);
/**
 * main - Entry point
 * Return: always 0 if success
 */

int main(void)
{
	int x;

	for (x = 1; x <= 50; x++)
	{
		printf("%d \n", fib(x));
	}

	return (0);
}

/**
 * fib - function to calculate the fibonacci sequence
 * @n: number to get fibonacci sequence from
 * Return: return a fibonacci number
 */

int fib(int n)
{
	if (n <= 2)
	{
		return (1);
	}
	
	return(fib(n - 1) + fib(n - 2));
}
