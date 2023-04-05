#include "main.h"

/**
 * _pow_recursion - function to get the power of integer @x
 * @x: number to calculate power of
 * @y: base to use for the calculation
 * Return: the power of number @x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
