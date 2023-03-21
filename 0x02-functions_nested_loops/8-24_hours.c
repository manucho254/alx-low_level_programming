#include "main.h"

/**
 * jack_bauer - function to print every minute of the day
 */

void jack_bauer(void)
{
	int day_mins = 1440; /* the number of minutes */
	int min;
	int hour;
	int x = 0;

	for (min = 0; min < day_mins; min++)
	{
		if (min % 60 && min != 0)
		{
			hour = min / 60;
			for (x = 0; x < 60; x++)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (hour != 23 || x != 59)
				{
					_putchar('\n');
				}
			}
		}
	}

}
