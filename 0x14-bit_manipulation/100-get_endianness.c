#include "main.h"

/**
 * get_endianness - function to check for endianness
 * Return: 0 if big indian , 1 if little indian
 */
int get_endianness(void)
{
	unsigned int x  = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
