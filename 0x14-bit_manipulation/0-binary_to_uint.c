#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * binary_to_uint - convert binary to a decimal number.
 * @b: pointer to chars array containing binary number
 * Return: unsigned integer representing the,
 * decimal number else return 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y, len, rem = 0, dec = 0;
	unsigned long int bin = 0;

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

	y = 0;
	while (bin != 0)
	{
		/** convert to decimal using base 10 */
		rem = bin % 10;
		dec += rem << y;
		bin /= 10;
		y++;
	}

	return (dec);
}
