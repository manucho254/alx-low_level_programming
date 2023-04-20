#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passe in function
 */

void print_all(const char * const format, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, format);

	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] == 'c')
		{
			/** chars are converted to int */
			printf("%c", va_arg(args, int));
		}
		else if (format[x] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[x] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[x] == 's')
		{
			printf("%s", va_arg(args, char *));
		}
		if (x != '\0' && format[x + 1] != '\0')
		{
			printf(", ");
		}
		x++;
	}

	va_end(args);
	printf("\n");
}
