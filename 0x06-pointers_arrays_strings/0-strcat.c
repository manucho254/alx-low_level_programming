#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate two string array
 * @dest: string array to add values to
 * @src: string array to get values from
 * Return: returns a pointer to the resulting string
 **/

char *_strcat(char *dest, char *src)
{
	int l_dest = strlen(dest); /** length of the dest string array*/
	int l_src = strlen(src); /** length of the src string array */
	int new_len = (l_dest + l_src); /**new length of the dest array */
	int x = l_dest;
	int y = 0;

	while (x <= new_len)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	return (dest);
}
