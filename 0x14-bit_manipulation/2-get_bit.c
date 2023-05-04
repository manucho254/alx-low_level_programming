#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of the bit
 * Return: the bit value if found
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
