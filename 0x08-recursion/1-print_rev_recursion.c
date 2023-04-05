#include "main.h"

/**
 * _puts_recursion - function that prints and a new line using recursion
 * @s: string to be printed in terminal
 */

void _puts_recursion(char *s)
{
	if ((*s) == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar((*s)); /** print value at pointer *s */
	s -= 1; /**
			 * increment the pointer to point to,
			 * the next location using pointer arithmetic
			 */
	_puts_recursion(s);
}
