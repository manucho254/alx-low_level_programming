#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - fuction to print strings we get as arguments in terminal
 * @separator: pointer to separator to use while printing numbers
 * @n: number of arguments we get in the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;

	va_start(args, n); /** initialize argument list*/
	for (x = 0; x < n; x++)
	{
		char *str = va_arg(args, char *);
		/** print values */
		if (separator == NULL)
		{
			printf("%s", str != NULL ? str : "(nil)");
		}
		if (separator != NULL && x < (n - 1))
		{
			printf("%s%s", str != NULL ? str : "(nil)", separator);
		}
		if (separator != NULL && x == (n - 1))
		{
			printf("%s", str != NULL ? str : "(nil)");
		}
	}
	va_end(args);
	printf("\n");
}
