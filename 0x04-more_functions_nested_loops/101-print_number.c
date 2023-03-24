#include "main.h"

void numbers_less_than_zero(int n);
void numbers_greater_than_zero(int n);

/**i
 * print_number - function to print an integer,
 * in terminal using putchar
 *
 * @n: value to be printed in terminal
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		numbers_less_than_zero(n);
	}
	else
	{
		numbers_greater_than_zero(n);
	}
}

/**
 * numbers_less_than_zero - function to print numbers less than zero
 *
 * @n: value that is less than 0
 */

void numbers_less_than_zero(int n)
{
	int new;

	new = n * -1;
	if (new < 10)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else if (new >= 10 && new <= 99)
	{
		_putchar('-');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (new >= 100 && new <= 999)
	{
		_putchar('-');
		_putchar(((n / 10) / 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (new >= 1000 && new <= 9999)
	{
		_putchar('-');
		_putchar(((n / 100) / 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (new >= 10000 && n <= 99999)
	{
		_putchar(((n / 1000) / 10) + '0');
		_putchar(((n / 1000) % 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
}

/**
 * numbers_greater_than_zero - function to print values greater than 0
 *
 * @n: value than is greater than 0
 */

void numbers_greater_than_zero(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar(((n / 10) / 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar(((n / 100) / 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 10000 && n <= 99999)
	{
		_putchar(((n / 1000) / 10) + '0');
		_putchar(((n / 1000) % 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
}
