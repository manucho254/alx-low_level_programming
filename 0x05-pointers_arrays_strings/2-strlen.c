#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @s: string pointer
 * Return: integer represnting the length of string
 */

int _strlen(char *s)
{
	int len = 0;
	char x = s[0];

	while (x != '\0')
	{
		x = s[len];
		len++;
	}
	if (len == 0)
	{
		return (0);
	}
	return (len - 1);
}
