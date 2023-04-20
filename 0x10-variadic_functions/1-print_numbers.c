#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print number we get as arguments int terminal
 * @separator: pointer to separator to use while printing numbers
 * @n: number of arguments we get in the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n); /** initialize argument list*/
	for (x = 0; x < n; x++)
	{
		/** print values */
		if (separator == NULL)
		{
			printf("%d", va_arg(args, unsigned int));
		}
		if (separator != NULL && x < (n - 1))
		{
			printf("%d%s", va_arg(args, unsigned int), separator);
		}
		if (separator != NULL && x == (n - 1))
		{
			printf("%d", va_arg(args, unsigned int));
		}
	}
	va_end(args);
	printf("\n");
}
