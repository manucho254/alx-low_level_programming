#include "main.h"
#include <stdio.h>
#include <stdlib.h>

long int reverse_num(long int n, long int rev);
void print_num(long int n, long int rev);

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
	long int tmp = 0;

	if (argc > 2 && argc <= 3) /** check that we have 2 arguments passed */
	{
		for (x = 1; x <= 2; x++)
		{
			mult *= atoi(argv[x]);
		}
		tmp = mult;
		/**
		 * We first need to reverse the integer so,
		 * that it can be printed correctly
		 */

		rev = reverse_num(mult, rev);

		print_num(tmp, rev);

		putchar('\n');
		return (0);
	}
	else
	{
		for (y = 0; err[y] != '\0'; y++)
		{
			putchar(err[y]);
		}

		putchar('\n');
		return (1);
	}
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
 * @n: number before its reversed
 * @rev: number to be printed in terminal
 */

void print_num(long int n, long int rev)
{
	while (rev >= 1)
	{
		putchar((rev % 10) + '0');
		rev /= 10;
	}

	/**
	 * If a number had zeros at the end when we,
	 * reverse we loose the zeros, to add the zeros,
	 * back we using this while loop to look for zeros,
	 * in the integer before it was reversed
	 */
	while (n % 10 == 0)
	{
		putchar(0 + '0');
		n /= 10;
	}
}
