#include "main.h"

/**
 * print_sign - function to check if value is greater,
 * than less than or equal to zero an return a specific sign for ecah condition
 *
 * @n: interger value to use for checks
 *
 * Return: always 1 if number greater than 0,
 * and 0 if number is 0 and -1 if number less than 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
