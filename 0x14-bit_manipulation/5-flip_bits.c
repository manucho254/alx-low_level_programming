#include "main.h"

/**
 * flip_bits - function that returns the number of bits you,
 * would need to flip to get from one number to another.
 *
 * @n: integer to flip bits from
 * @m: number of bits move
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, bt = 1;

	while (n & bt)
	{
		count++;
		bt <<= 1;
		/** check if count equal to m */
		if (count == m)
		{
			return (-1);
		}
	}

	count++;

	return (count);
}
