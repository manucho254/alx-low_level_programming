#include "main.h"
#include <stdlib.h>

long int reverse_num(long int n, long int rev);
void print_num(long int n, long int rev);
void print_error(void);

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	int x;
	long int sum = 0; /**
						* variable to store the value of the,
						* sum of the two numbers
						*/
	long int rev = 0; /** sum value stored in reverse */
	long int tmp = 0;

	if (argc == 1)
	{
		_putchar(0 + '0');
		_putchar('\n');
		return (0);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			if (argv[x] != 0 && (long int)atoi(argv[x]) == 0)
			{
				print_error();
				return (1);
			}
			sum += atoi(argv[x]);
		}
		tmp = sum;
		/**
		 * We first need to reverse the integer so,
		 * that it can be printed correctly
		 */

		rev = reverse_num(sum, rev);

		print_num(tmp, rev);

		_putchar('\n');
		return (0);
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
	if (n < 0)
	{
		n = n * -1;
	}

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
	if (n < 0)
	{
		_putchar('-');
	}

	if (n == 0)
	{
		_putchar(0 + '0');
	}
	else
	{
		while (rev >= 1)
		{
			_putchar((rev % 10) + '0');
			rev /= 10;
		}
	}

	/**
	 * If a number had zeros at the end when we,
	 * reverse we loose the zeros, to add the zeros,
	 * back we using this while loop to look for zeros,
	 * in the integer before it was reversed
	 */

	if (n > 0)
	{
		while (n % 10 == 0)
		{
			_putchar(0 + '0');
			n /= 10;
		}
	}
}

/**
 * print_error - function to print text Error in terminal
 */

void print_error(void)
{
	char *err = "Error"; /** Error string */
	int y;

	for (y = 0; err[y] != '\0'; y++)
	{
		_putchar(err[y]);
	}
	_putchar('\n');
}
