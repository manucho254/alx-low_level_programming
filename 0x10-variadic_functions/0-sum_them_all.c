#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that return the sum of all its paramenter
 * @n: number of arguments the functions gets
 * Return: sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n); /** initialize the argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);
}
