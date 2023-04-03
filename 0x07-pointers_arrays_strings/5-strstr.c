#include "main.h"
#include <string.h>
#include <stdlib.h>

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
	int len_n = strlen(needle);
	char *first;
	char *word = malloc(len_n);

	word[len_n] = '\0';

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
				word[x] = haystack[y];
				break;
			}
		}
	}

	if (strcmp(word, first) != 0)
	{
		return (NULL);
	}

	free(word);
	return (first);
}
