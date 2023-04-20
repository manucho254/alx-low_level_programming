#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passe in function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int x;
	char *string;

	va_start(args, format);
	if (format)
	{
		x = 0;
		while (format[x] != '\0')
		{
			switch (format[x])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					printf("%s", string != NULL ? string : "(nil)");
					break;
				default:
					break;
			}
			if (x != '\0' && format[x + 1] != '\0')
			{
				printf(", ");
			}
			x++;
		}
	}
	printf("\n");
	va_end(args);
}
