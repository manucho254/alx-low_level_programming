#include "main.h"

/**
 * print_number - function to print a number in terminal
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int tmp = 0;

	if (n == 0)
	{
		_putchar(0 + '0');
	}
	else
	{
		if (n < 0)
		{
			n = (n * -1);
			_putchar('-');
		}

		while (n >= 1)
		{
			tmp = (tmp * 10) + (n % 10);
			n = n / 10;
		}
		while (tmp >= 1)
		{
			_putchar((tmp % 10) + '0');
			tmp = tmp / 10;
		}
	}

	_putchar('\n');
}
