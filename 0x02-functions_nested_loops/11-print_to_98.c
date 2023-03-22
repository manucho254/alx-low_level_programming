#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: file
 * Description:  print all
 *
 * less_than_98 - for values less than 98
 * @lt: less than value
 *
 * greater_than_98 - for values greater than 98
 * @gt: greater than value
 */


void less_than_98(int lt);
void greater_than_98(int gt);

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

void less_than_98(int lt)
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
			if (new < 100)
			{
				_putchar(new + '0');
			}
			else
			{
				_putchar((new / 10) + '0');
				_putchar((new % 10) + '0');
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
		}
		if (x != 98)
		{
			_putchar(',');
		}

		_putchar('\n');
	}
}

void greater_than_98(int gt)
{
	int y;

	for (y = gt; y >= 98; y--)
	{
		if (y != gt)
		{
			_putchar(' ');
		}
		if (y < 99)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10)) + '0');
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

