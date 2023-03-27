#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @s: the string array
 */

void print_rev(char *s)
{
	int x = _strlen(s);

	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}

	_putchar('\n');
}

/**
 * _strlen - function to get the length of a string
 * @s: the string array
 * Return: an int representing the length of a string
 */

int _strlen(char *s)
{
	int len = 0;
	char ch = s[0];

	while (ch != '\0')
	{
		ch = s[len];
		len++;
	}

	if (len == 0)
	{
		return (0);
	}

	return (len - 1);
}
