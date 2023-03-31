#include "main.h"
#include <limits.h>
#include <math.h>

int convert_negative_to_positive(int n);
double reverse_number(int n, double tmp, double ret);

/**
 * print_number - function to print a number in terminal
 * @n: number to be printed
 */

void print_number(int n)
{
	double ret = 0;
	double tmp = n;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}

	/** convert negative numbers to positive */
	if (n < 0)
	{
		n = convert_negative_to_positive(n);
	}

	/** reverse the integer number */
	ret = reverse_number(n, tmp, ret);

	while (ret >= 1)
	{
		/** fmod - function to return the remainder of two doubles */
		/** _putchar(fmod(ret, 10) + '0'); this is the solution but the*/
		_putchar(((int)ret % 10) + '0');
		ret = ret / 10;
	}

	while ((int)tmp % 10 == 0)
	{
		_putchar(0 + '0');
		tmp /= 10;
	}
}

/**
 * reverse_number - function to reverse an integer
 * @n: integer to be reversed
 * @ret: double variable to hold the reversed integer value
 * @tmp: temprary variable to hold the value of n as a double
 * Return: double representing the reversed integer
 */

double reverse_number(int n, double tmp, double ret)
{
	int x = 0;

	while (n >= 1)
	{
		if (tmp == INT_MIN && x == 0)
		{
			/**
			 * we add one because we did a deduction in INT_MIN,
			 * in the convert_negative_to_positive function
			 */
			ret = (ret * 10) + (n % 10) + 1;
		}
		else
		{
			ret = (ret * 10) + (n % 10);
		}
		n = n / 10;
		x++;
	}

	return (ret);
}

/**
 * convert_negative_to_positive - function to convert,
 * a negative number to positive
 * @n: number to be converted
 * Return: @n as positive number
 */

int convert_negative_to_positive(int n)
{
	if (n == INT_MIN)
	{
		/** we minus one so that we can store n as an in INT_MAX */
		n = (n + -1);
	}
	else
	{
		n = (n * -1);
	}
	_putchar('-');

	return (n);
}


