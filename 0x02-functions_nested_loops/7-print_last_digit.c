#include "main.h"

/**
 * print_last_digit - function to get the last value in an integer
 *
 * @num: number to get the last digit from
 *
 * Return: the value in the return will be the last value @num
 *
 */

int print_last_digit(int num)
{
	int last = _abs(num % 10);

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');
	return (last);
}
