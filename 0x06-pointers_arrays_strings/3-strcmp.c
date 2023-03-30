#include "main.h"
#include <string.h>

/**
 * _strcmp - function to compare two strings
 * @s1: string array one to be compared
 * @s2: string array two to be compared
 * Return: returns 0 if @s1 == @s2,
 * -1 if @s1[index] < s2[index],
 * 1 if @s1[index] > s2[index]
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = strlen(s1); /** length of string s1 */
	int len_s2 = strlen(s2); /** length of string s2 */
	int len = 0; /** this will be the length of the shortest string */
	int ret; /** the return value */
	int x;

	if (len_s1 < len_s2)
	{
		len = len_s1;
	}
	else
	{
		len = len_s2;
	}

	for (x = 0; x <= len; x++)
	{
		if (s1[x] != s2[x])
		{
			if (s1[x] < s2[x])
			{
				ret = -1;
			}
			else
			{
				ret = 1;
			}
			break;
		}
	}

	if (s1 == s2)
	{
		ret = 0;
	}

	return (ret);
}
