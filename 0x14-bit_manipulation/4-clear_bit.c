#include "main.h"

/**
 * clear_bit - function that set the value of a bit to 1 ,
 * in specified index
 * @n: pointer to number to set bit from
 * @index: index of the bit
 * Return: the bit value else return 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/** check if index exists*/
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index); /** left shift */

	return (1);
}
