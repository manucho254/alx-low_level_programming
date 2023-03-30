#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *leet - function that encodes a string array to 1337
 * @s: string array to be encoded
 * Return: pointer represnting the string array
 */

char *leet(char *s)
{
	int len = strlen(s); /** length of the string array @s */
	char input[] = "aeotlAEOTL";
	char output[] = "4307143071";
	int len_input = strlen(input);
	int x;
	int y;

	for (x = 0; x < len; x++)
	{
		for (y = 0; y < len_input; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}

	return (s);
}
