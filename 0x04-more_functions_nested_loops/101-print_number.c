#include "main.h"

void numbers_less_than_zero(int n);
void numbers_greater_than_zero(int n);

/**
 * print_number - function to print an integer,
 * in terminal using putchar
 *
 * @n: value to be printed in terminal
 *
 */

void print_number(int n)
{
	double new = 0;
	double rev_n = 0;

	while (n >= 1)
	{
		new *= 10 + (n % 10);
		n /= 10;
	}

	while (new >= 1)
	{
		rev_n *= 10 + (n % 10);
		new /= 10;
	}

	_putchar("%u", rev_n)
}
