#include "main.h"

/**
 * print_number - function to print an integer,
 * in terminal using putchar
 *
 * @n: value to be printed in terminal
 *
 */

void print_number(int n)
{
	unsigned int rev_n = 0;

	if (n == 0)
	{
		_putchar(0 + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		while (n >= 1)
		{
			rev_n = (rev_n * 10) + (n % 10);
			n = n / 10;
		}
		while (rev_n >= 1)
		{
			_putchar((rev_n % 10) + '0');
			rev_n /= 10;
		}
	}
	_putchar('\n');
}
