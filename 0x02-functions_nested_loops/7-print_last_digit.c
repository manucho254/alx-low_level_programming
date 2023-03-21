#include "main.h"

/**
 * print_last_digit - function to get the last value in an integer
 *
 * @n: number to be converted to get last value from
 *
 * Return: the value in the return will be the last value @n
 *
 */

int print_last_digit(int n)
{
	int last = n % 10;

	_putchar(last);
	return (last);
}
