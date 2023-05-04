#include "main.h"
#include <string.h>
#include <ctype.h>

int _pow_func(int x, int y);
/**
 * binary_to_uint - convert binary to a decimal number.
 * @b: pointer to chars array containing binary number
 * Return: unsigned integer representing the,
 * decimal number else return 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y, len, rem = 0, dec = 0;
	long unsigned int bin = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = strlen(b);
	/** check for non digit character while getting the binary number */
	for (x = 0; x < len; x++)
	{
		if (isdigit(b[x]) == 0)
		{
			return (0);
		}
		bin = (bin * 10) + (b[x] - '0');
	}

	/** convert binary to decimal */
	y = 0;
	while (bin != 0)
	{
		rem = bin % 10;
		bin /= 10;
		dec += rem * _pow_func(2, y);
		++y;
	}

	return (dec);
}

/**
 * _pow_func - function to get the power of a number
 * @x: number to get power of
 * @y: base to use for the number
 * Return: the power of a number
 */

int _pow_func(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_func(x, y - 1));
}
