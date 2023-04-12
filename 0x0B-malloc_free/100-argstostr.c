#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *argstostr - function to concatnate all arguments in a program
 * @ac: number of command line arguments
 * @av: array of arrays of command line arguments
 * Return: pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	/**
	 * *str pointer to the new location in memory
	 */
	char *str;
	int x, y, j, k;
	int new_len = 0; /** variable to hold length of new array str */

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/** get length on new string array */
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			new_len++;
		}
		new_len += 1;
	}
	/** allocate memory to str of size new_len + 1*/
	str = (char *) malloc(sizeof(char) * (new_len));
	if (str == NULL)
	{
		return (NULL);
	}
	str[new_len] = '\0';
	k = 0;
	/** using strcat to concatenate string arrays */
	for (y = 0; y < ac; y++)
	{
		for (j = 0; av[y][j] != '\0'; j++)
		{
			str[k] = av[y][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
