#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - function that searches a,
 * string for any of a set of bytes
 * @s: string to locate first occurence from
 * @accept: string to check for byte from @s
 *
 * Return: pointer to the byte in ,
 * *s that matches on of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0' && s[x] != ' '; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
		}
	}

	return (NULL);
}
