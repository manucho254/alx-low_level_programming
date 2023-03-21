#include "main.h"

/**
 * print_sign - function to check for uppercase or lowercase letters
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
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
