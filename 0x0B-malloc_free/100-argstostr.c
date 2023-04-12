#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	 * *tmp pointer to hold an command argument temporarily
	 */
	char *str, *tmp;
	int x, y, j;
	int new_len = 0; /** variable to hold length of new array str */

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/** get length on new string array */
	for (x = 0; x < ac; x++)
	{
		new_len += (strlen(av[x]));
	}
	/** allocate memory to str of size new_len + 1*/
	str = (char *) malloc(sizeof(char) * (new_len + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	str[new_len] = '\0';
	/** initialize array with null values */
	for (j = 0; j < new_len; j++)
	{
		str[j] = 0;
	}
	/** using strcat to concatenate string arrays */
	for (y = 0; y < ac; y++)
	{
		tmp = av[y];
		strcat(tmp, "\n");
		strcat(str, tmp);
	}

	return (str);
}
