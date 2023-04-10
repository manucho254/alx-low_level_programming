#include "main.h"
#include <string.h>

/**
 * *_strcpy - function like strcpy to cpy a string into another,
 * one and relace all its previous values with new ones
 * @dest: destination string array to copy values to
 * @src: string array with values to copy
 * Return: returns a string array
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int len = strlen(src);

	memset(dest, 0, strlen(dest)); /** clearing all the values in dest,
									* by turning all values to 0
									*/
	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}

	return (dest);

}
