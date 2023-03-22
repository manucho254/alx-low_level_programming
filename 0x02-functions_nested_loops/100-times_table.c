#include "main.h"

/**
 * times_table - function to print the multiple of numbers between 0 and 9
 */

void times_table(int n)
{
	int x;
	int y;
	int times;

	if (n <= 15 || n < 0)
	{
		for (x = 0; x < n; x++)
	
		{
			for (y = 0; y < n; y++)
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
				if (times > 9)
				{
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				else
				{
					_putchar(times + '0');
				}
				if (y != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
