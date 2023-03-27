#include "main.h"
#include <string.h>

/**
 * puts2 - function to print out a string characters in an even way
 * @str: the string array to print caharacter from
 */

void puts2(char *str)
{
	int x = 0;

	while (x < strlen(str))
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}

	_putchar('\n');
}
