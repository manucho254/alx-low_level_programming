#include "main.h"

/**
 * print_alphabet - Program to print all the alphabets using lowercase letters
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
