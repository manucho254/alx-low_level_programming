#include "main.h"

/**
 * _puts - function to print out a string in terminal
 * @str: the string array to be printed
 */

void _puts(char *str)
{
	int x = 0;
	char ch = str[0];

	while (ch != '\0')
	{
		ch = str[x];
		_putchar(ch);
		x++;
	}
}
