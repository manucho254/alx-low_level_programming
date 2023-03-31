#include "main.h"

/**
 * print_number - function to print a number in terminal
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int ret = 0;
	unsigned int tmp = n;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}

	if (n < 0)
	{
		n = (n * -1);
		_putchar('-');
	}

	while (n > 0)
	{
		ret = (ret * 10) + (n % 10);
		n = n / 10;
	}

	while (ret > 0)
	{
		_putchar((ret % 10) + '0');
		ret = ret / 10;
	}

	while (tmp % 10 == 0)
	{
		_putchar(0 + '0');
		tmp /= 10;
	}
}
