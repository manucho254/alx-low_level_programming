#include "main.h"
#include <string.h>

/**
 * *_strncat - function to concatenate two string arrays,
 * but only copy upto @n of src
 * @dest: string array to add values to
 * @src: string array to get values from
 * @n: number of bytes to copy from @src
 * Return: returns a pointer to the resulting string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int l_dest = strlen(dest); /** length of the dest string array*/
	int y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[l_dest + y] = src[y];
		y++;
	}

	dest[l_dest + y] = '\0';

	return (dest);
}
