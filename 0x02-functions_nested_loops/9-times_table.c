#include "main.h"

/**
 * times_table - function to print the multiple of numbers between 0 and 9
 */

void times_table(void)
{
	int x;
	int y;
	int times;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			times = x * y;
			if (y != 0)
			{
				if (times < 10)
				{
					_putchar(' ');
					_putchar(' ');
				} 
				else
				{
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
			if (y != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
