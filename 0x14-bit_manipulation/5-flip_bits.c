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
	unsigned long int count, xor_r = n ^ m;

	count = 0;
	while (xor_r > 0)
	{
		count += xor_r & 1;
		xor_r >>= 1;
	}

	return (count);
}
