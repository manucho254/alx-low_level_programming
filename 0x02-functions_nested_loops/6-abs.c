#include "main.h"

/**
 * _abs - function to get the absolute number of an integer
 *
 * @n: number to be converted to an absolute number
 * Return: always @n * -1 if n is a negative number else just return the number
 *
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
