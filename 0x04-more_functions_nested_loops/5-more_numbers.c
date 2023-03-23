#include "main.h"

/**
 * more_numbers - function to print numbers,
 * 0 to 14 ten times
 */

void more_numbers(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if ((x / 10) != 0)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
		y++;
	}
}
