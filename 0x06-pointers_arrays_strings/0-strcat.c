#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	int new_len = (l_dest + l_src + 1); /**new legth of the dest array */
	char *tmp = malloc(new_len);
	int x = 0;

	while (x < l_dest)
	{
		tmp[x] = dest[x];
		x++;
	}

	while (x <= l_src)
	{
		tmp[x] = dest[x];
		x++;
	}

	strcpy(dest, tmp);

	return (dest);
}
