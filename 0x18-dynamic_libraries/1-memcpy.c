#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @src: memory area to be copied
 * @dest: memory to copy bytes to
 * @n: number of bytes to copy
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
