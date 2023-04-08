#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	int x, y;
	char *err = "Error"; /** Error string */
	long int mult = 1; /**
						* variable to store the value of the,
						* multiplication of the two numbers
						*/
	long int rev = 0; /** multiplication value stored in reverse */

	if (argc > 2) /** check that we have 2 arguments passed */
	{
		for (x = 1; x < argc; x++)
		{
			mult *= atoi(argv[x]);
		}

		while (mult >= 1)
		{
			rev = (rev * 10) + (mult % 10);
			mult /= 10;
		}

		while (rev >= 1)
		{
			_putchar((rev % 10) + '0');
			rev /= 10;
		}
	}
	else
	{
		for (y = 0; err[y] != '\0'; y++)
		{
			_putchar(err[y]);
		}

		_putchar('\n');
		return (1);
	}
	
	_putchar('\n');

	return (0);
}
