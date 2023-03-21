#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function to print the alphabet in lowercase letters 10x
 *
 */

int main(void)
{
	print_alphabet_x10();
	return 0;
}

void print_alphabet_x10(void)
{
	char x;
	int y = 0;

	while (y <= 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
