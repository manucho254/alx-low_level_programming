#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer string name to be printed
 * @f: ponter to function that takes character pointer as input
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
