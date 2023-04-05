#include "main.h"

/**
 * _strlen_recursion - function to get length of a string recusively
 * @s: string to get length from
 * Return: an integer representing the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
