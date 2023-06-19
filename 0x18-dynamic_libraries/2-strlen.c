#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @s: string pointer
 * Return: integer represnting the length of string
 */

int _strlen(char *s)
{
	int len = 0;
	char ch = s[0];

	if (ch == '\0')
	{
		return (0);
	}

	while (ch != '\0')
	{
		ch = s[len];
		len++;
	}

	return (len - 1);
}
