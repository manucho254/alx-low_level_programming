#include "main.h"

/**
 * print_binary - function to print decimal as binary number
 * @n: number to convert to binary
 */

void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;
	/** mask = [1000 0000 0000 0000]*/

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		mask = mask >> 1; /** Right shift*/
	}
}
