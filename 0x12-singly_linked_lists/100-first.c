#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_string_before - function to print string before main
 */
void print_string_before(void)
{
	char a[] = "You're beat! and yet, you must allow,\n";
	char b[] = "I bore my house upon my back!\n";

	printf("%s%s", a, b);
}
