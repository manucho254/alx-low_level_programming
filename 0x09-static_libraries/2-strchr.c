#include "main.h"
#include <string.h>

/**
 * *_strchr - function that locates the first occcurence,
 * of characher in a string
 * @s: string to find character
 * @c: character to look for
 * Return: NULL if character is not found else return the pointer,
 * to the first occurrence of the pointer.
 */

char *_strchr(char *s, char c)
{
	int x;
	int len = strlen(s); /** length of the string s */

	for (x = 0; x <= len; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}

	return (NULL);
}
