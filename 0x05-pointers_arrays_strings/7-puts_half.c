#include "main.h"
#include <string.h>

/**
 * puts_half - function to print out half a string in terminal
 * @str: the string array to print character from
 */

void puts_half(char *str)
{
	int x = 0;
	int len = strlen(str);

	if (len % 2 != 1)
	{
		x = (len / 2);
		while (x < len)
		{
			_putchar(str[x]);
			x++;
		}
	}
	else
	{
		x = (len / 2) + 1;
		while (x < len)
		{
			_putchar(str[x]);
			x++;
		}
	}

	_putchar('\n');
}
