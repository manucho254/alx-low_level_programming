#include "main.h"

/**
 * *_strncpy - function to copy a string
 * @dest: string array to add values to
 * @src: string array to get values from
 * @n: number of bytes to cpy from @src
 * Return: returns a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}

	for (; y < n; y++)
	{
		dest[y] = '\0';
	}

	return (dest);
}
