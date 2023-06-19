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
	int x = 0;

	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] > s2[x])
		{
			return (11);
		}
		if (s1[x] < s2[x])
		{
			return (-11);
		}
		x++;
	}

	return (0);
}
