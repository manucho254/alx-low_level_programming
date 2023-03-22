#include "main.h"

void print_less_than_98(int lt);
void print_greater_than_or_equal_to_98(int gt);

/**
 * print_to_98 - function to print all number between n and 98
 *
 * @n: number to start from
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		less_than_98(n);
	}
	else
	{
		greater_than_98(n);
	}
}

/**
 * print_less_than_98 - function to help in printing numbers less than 98
 *
 * @lt: number to to start from
 */

void print_less_than_98(int lt)
{
	int x;
	int new;

	for (x = lt; x <= 98; x++)
	{
		if (x != lt)
		{
			_putchar(' ');
		}
		if (x < 0)
		{
			new = x * -1;
			_putchar('-');
			if (new < 10)
			{
				_putchar(new + '0');
			}
			else if (new <= 99)
			{
				_putchar((new / 10) + '0');
				_putchar((new % 10) + '0');
			}
			else
			{
				_putchar(((new / 10) / 10) + '0');
				_putchar(((new / 10) % 10) + '0');
				_putchar((new % 10) + '0');
			}
		}
		else if (x < 10)
		{
			_putchar(x + '0');
		}
		else
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		if (x != 98)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}

/**
 * print_greater_than_or_equal_to_98 - function to print values,
 * greater or equal to 98
 *
 * @gt: number to start from
 */

void print_greater_than_or_equal_to_98(int gt)
{
	int y;

	for (y = gt; y >= 98; y--)
	{
		if (y != gt)
		{
			_putchar(' ');
		}
		if (y <= 99)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		else if (y < 10)
		{
			_putchar(y + '0');
		}
		else
		{
			_putchar(((y / 10) / 10) + '0');
			_putchar(((y / 10) % 10) + '0');
			_putchar((y % 10) + '0');
		}
		if (y <= gt && y != 98)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}

