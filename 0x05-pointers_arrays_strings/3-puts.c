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

/**
 * _strlen - function to find the length of a string
 * @s: string array
 * Return: int to represent the length of string
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
