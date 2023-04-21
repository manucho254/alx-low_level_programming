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
	char *s, *sep = ", ";

	va_start(args, format);
	if (format)
	{
		x = 0;
		while (format[x] != '\0')
		{
			if (format[x + 1] == '\0')
			{
				sep = "\0";
			}
			switch (format[x])
			{
				case 'c':
					printf("%c%s", va_arg(args, int), sep);
					break;
				case 'i':
					printf("%d%s", va_arg(args, int), sep);
					break;
				case 'f':
					printf("%f%s", va_arg(args, double), sep);
					break;
				case 's':
					s = va_arg(args, char *);
					printf("%s%s", s != NULL ? s : "(nil)", sep);
					break;
				default:
					break;
			}
			x++;
		}
	}
	printf("\n");
	va_end(args);
}
