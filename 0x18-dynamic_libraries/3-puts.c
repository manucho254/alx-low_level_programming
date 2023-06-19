#include "main.h"

/**
 * _puts - function to print out a string in terminal
 * @str: the string array to be printed
 */

void _puts(char *str)
{
	int x = 0;

	while (x < _strlen(str))
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
