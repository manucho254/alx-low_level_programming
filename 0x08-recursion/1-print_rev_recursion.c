#include "main.h"

/**
 * _puts_recursion - function that prints and a new line using recursion
 * @s: string to be printed in terminal
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
