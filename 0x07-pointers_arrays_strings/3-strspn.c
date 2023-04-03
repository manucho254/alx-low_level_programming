#include "main.h"

/**
 *_strspn - function to get the length of prefix a substring
 * @s: string to find the prefix substring length
 * @accept: bytes to get from string
 * Return: number of bytes in intial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len_sub = 0;
	char first = s[0]; /** first character in string *s */
	int found = 0; /** this will be increemented if s[0] is found */
	int x;
	int y;
	int j = 0;

	/**
	 * we first check if the first character,
	 * in *s is in *accept
	 * we the update the found value if we find it
	 */
	while (accept[j] != '\0')
	{
		if (accept[j] == first)
		{
			found++;
		}
		j++;
	}

	if (found > 0)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			for (y = 0; s[y] != ' ' && s[y] != '\0'; y++)
			{
				if (accept[x] == accept[x - 1]) /** check for duplicates */
				{
					break;
				}
				if (accept[x] == s[y])
				{
					len_sub++;
				}
			}
		}
	}

	return (len_sub);
}
