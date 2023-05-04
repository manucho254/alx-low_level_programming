#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x, mask = 32768;
	/** mask = [1000 0000 0000 0000]*/

	x = 0;
	while (mask > 0 && x <= index)
	{
		if (x == index)
		{
			return ((n >> index) & 1);
		}
		mask = mask >> 1; /** Right shift*/
		x++;
	}

	return (-1);
}
