#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - function to reverse a string
 * @s: the string array to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char *tmp_arr = malloc(len + 1); /** creating a string array using malloc */
	int x = 0;

	tmp_arr[len] = '\0'; /** adding a null pointer to the end of the array */

	while (len > 0)
	{
		len--;
		tmp_arr[x] = s[len];
		x++;
	}

	strcpy(s, tmp_arr);
	free(tmp_arr);
}
