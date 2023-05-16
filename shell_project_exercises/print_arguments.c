#include <stdio.h>

/**
 * main - Entry function
 *
 * @ac: number of command line arguments
 * @av: array of strings containing command line arguments
 *
 * Return: always 0 if success
 */

int main(int ac, char **av)
{
	int x;
	(void)ac; /** cast ac to void since we wount be using it */

	/** loop through the av array of strings */
	for (x = 0; av[x] != NULL; x++)
	{
		/** print the command line argument */
		printf("%s\n", av[x]);
	}

	return (0);
}
