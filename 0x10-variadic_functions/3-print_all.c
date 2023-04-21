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
	int x;
	char *s;

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
					s = va_arg(args, char *);
					printf("%s", s != NULL ? s : "(nil)");
					break;
			}
			if (format[x + 1] != '\0')
			{
				printf(", ");
			}
			x++;
		}
	}
	printf("\n");
	va_end(args);
}
