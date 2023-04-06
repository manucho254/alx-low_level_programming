#include "main.h"

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
