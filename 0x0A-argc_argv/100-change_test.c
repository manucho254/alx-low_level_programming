#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_error(void);
int reverse_integer(int num, int rev);
void print_integer(int tmp, int rev);

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	int num_coins[] = {25, 10, 5, 2, 1};
	int val = 0;
	int min = 0;
	int rev = 0;
	int x, y, tmp;
	int size = (sizeof(num_coins) / sizeof(num_coins[0]));

	if (argc != 2)
	{
		print_error();
		return (1);
	}

	/** check if the value at argv[1] is negative */
	if (atoi(argv[1]) < 0)
	{
		putchar(0 + '0');
		putchar('\n');
		return (0);
	}

	/** we want to get the value of argv[1] and convert it into an integer */
	for (x = 0; x < argc; x++)
	{
		val = atoi(argv[x]);
	}

	for (y = 0; y < size; y++)
	{
		if (val % num_coins[y] >= 0 && val != 0)
		{
			min += val / num_coins[y]; /**
										* we get the number of times num_coins goes to val
										*/
			val = val % num_coins[y]; /**
									   * we replace the value of val ,
									   * with the remainder of val % num_coins[y]
									   */
		}
	}
	tmp = min;
	rev = reverse_integer(min, rev);
	print_integer(tmp, rev);

	return (0);
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
		putchar(err[y]);
	}

	putchar('\n');
}

/**
 * reverse_integer - function to reverse an integer
 * @num: number to be reversed
 * @rev: varible to store the reversed integer
 * Return: the reversed integer
 */


int reverse_integer(int num, int rev)
{
	while (num >= 1)
	{
		rev = (rev * 10) + (num % 10);
		num = num / 10;
	}

	return (rev);
}

/**
 * print_integer - function to unreverse an integer
 * @tmp: variable storing integer unreversed
 * @rev: variable storing reversed integer
 */

void print_integer(int tmp, int rev)
{
	while (rev >= 1)
	{
		putchar((rev % 10) + '0');
		rev = rev / 10;
	}

	if (tmp > 0)
	{
		while (tmp % 10 == 0)
		{
			putchar(0 + '0');
			tmp = tmp / 10;
		}
	}
	putchar('\n');
}
