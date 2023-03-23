#include "main.h"

/**
 * print_line - function to print a staight line in terminal*
 *
 * @n: the amount of times for the line to be printed
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
