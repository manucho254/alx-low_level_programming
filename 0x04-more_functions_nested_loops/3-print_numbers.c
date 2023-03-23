#include "main.h"

/**
 * print_numbers - function to print numbers 0 to 9
 */

int print_numbers(int a, int b)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
