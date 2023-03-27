#include "main.h"
#include <string.h>

/**
 * rev_string - function to reverse a string
 * @s: the string array to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char tmp_arr[len];
	int x = 0;

	while (len > 0)
	{
		len--;
		tmp_arr[x] = s[len];
		x++;
	}

	strcpy(s, tmp_arr);
}
