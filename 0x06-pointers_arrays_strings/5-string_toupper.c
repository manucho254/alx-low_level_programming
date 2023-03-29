#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * *string_toupper - function to turn all,
 * lowercase letters in string to uppercase
 * @str: string to convert lowercase letters from
 * Return: pointer representing the string array
 */

char *string_toupper(char *str)
{
	int len = strlen(str);
	int x;

	for (x = 0; x < len; x++)
	{
		if (str[x] < 'A' || s[x] > 'Z')
		{
			str[x] = toupper(s[x]);
		}
	}

	return (str);
}
