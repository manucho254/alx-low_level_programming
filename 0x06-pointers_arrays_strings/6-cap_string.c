#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - function to capitalize string array
 * @s: string to be capitalized
 * Return: pointer representing string array
 */

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if ((s[x] >= 'A' && s[x] <= 'Z') || (s[x] >= 'a' && s[x] <= 'z'))
		{
			/** 32 is the ascii value of tab and 9 for space */
			if (s[x - 1] == 32 || s[x - 1] == 9 || s[x - 1] == '\n'
					|| s[x - 1] == ',' || s[x - 1] == ';' || s[x - 1] == '.'
					|| s[x - 1] == '!' || s[x - 1] == '?' || s[x - 1] == '"'
					|| s[x - 1] == '(' || s[x - 1] == ')' || s[x - 1] == '{'
					|| s[x - 1] == '}' || s[x - 1] == '\''
					)
			{
				s[x] = toupper(s[x]);
			}
		}
	}
	return (s);
}

