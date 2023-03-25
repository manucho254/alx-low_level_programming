#include "main.h"

void print_times_table_values(int val);

/**
 * print_times_table - function to print the multiple,
 * of numbers between 0 and 9
 *
 * @n: value to get the times table
 */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		print_times_table_values(n);
	}
}

/**
 * print_times_table_values - function to help with the printing of,
 * the times table values
 *
 * @val: value to use to create the times table
 */
void print_times_table_values(int val)
{
	int x;
	int y;
	int times;

	for (x = 0; x <= val; x++)
	{
		for (y = 0; y <= val; y++)
		{
			times = x * y;
			if (y != 0)
			{
				if (times < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (times < 10)
			{
				_putchar(times + '0');
			}
			else if (times <= 99)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar(((times / 10) / 10) + '0');
				_putchar(((times / 10) % 10) + '0');
				_putchar((times % 10) + '0');
			}
			if (y != val)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
