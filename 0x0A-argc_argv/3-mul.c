#include "main.h"
#include <stdlib.h>

long int reverse_num(long int n, long int rev);
void print_num(long int rev);

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
		for (x = 1; x <= 2; x++)
		{
			mult *= atoi(argv[x]);
		}
		/**
		 * We first need to reverse the integer so,
		 * that it can be printed correctly
		 */

		rev = reverse_num(mult, rev);

		print_num(rev);
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

/**
 * reverse_num - function to reverse an integer
 * @n: integer to be reversed
 * @rev: variable to store the reversed integer
 * Return: @n reversed
 */

long int reverse_num(long int n, long int rev)
{
	while (n >= 1)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}

	return (rev);
}

/**
 * print_num - function to print a number in terminal
 * @rev: number to be printed in terminal
 */

void print_num(long int rev)
{
	while (rev >= 1)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
}
