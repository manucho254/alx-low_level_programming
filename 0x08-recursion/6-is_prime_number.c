#include "main.h"

/**
 * confirm_is_prime - function to check if number is prime
 * @n: number to check if prime number
 * @guess: value that we use with @n to get the remainder
 * Return: 1 if prime number or 0 if not
 */


int confirm_is_prime(int n, int guess)
{
	if (n % guess == 0 || n < 2)
	{
		return (0);
	}
	if (guess <= _sqrt_recursion(n))
	{
		return (confirm_is_prime(n, guess + 1));
	}

	return (1);
}

/**
 * is_prime_number - function to check if number is prime
 * @n: number to check if prime number
 * Return: 1 if prime number or 0 if not
 */

int is_prime_number(int n)
{
	return (confirm_is_prime(n, 2));
}

/**
 * calculate_the_square_root - function to guess a number,
 * and multiply it by itself to check if the resulting,
 * value equal to @n else if greater return -1
 * @n: number to get square root of
 * @guess: value we multiply by itself to get the square root
 * Return: integer representing the square root of @n,
 * or -1 if guess * guess greater than @n
 */

int calculate_the_square_root(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}

	return (calculate_the_square_root(n, guess + 1));
}

/**
 * _sqrt_recursion - function to get the square root of a number
 * @n: number to get square root of
 * Return: integer representing the square root of @n,
 * or -1 if @n is less than 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /** return negative if less than 0 */
	}

	return (calculate_the_square_root(n, 0)); /** start from 0 for the guess */
}
