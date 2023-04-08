#include "main.h"
#include <stdio.h>

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	int x, y;
	char *str;

	for (x = 0; x < argc; x++)
	{
		str = argv[x];
		for (y = 0; str[y] != '\0'; y++)
		{
			putchar(str[y]);
		}

		putchar('\n');
	}

	return (0);
}
