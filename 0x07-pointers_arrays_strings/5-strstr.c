#include "main.h"
#include <string.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: string to find substring @needle from
 * @needle: substring to find in string
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;
	int len_needle = strlen(needle);
	char *first;
	int count = 0; /** keep track of the character we find */

	for (x = 0; needle[x] != '\0'; x++)
	{
		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (haystack[y] == needle[0])
			{
				first = &haystack[y];
			}
			if (haystack[y] == needle[x])
			{
				count++;
				break;
			}
		}
	}

	if (count == len_needle)
	{
		return (first);
	}

	return (NULL);
}
