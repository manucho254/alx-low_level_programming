#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 if success
 *
 * Program to print a string in the terminal
 */

int main(void)
{
	char word[10] = "_putchar";
	int length = strlen(word);
	int x;

	for (x = 0; x <= length; x++)
	{
		_putchar(word[x]);
	}
	_putchar('\n');
	return (0);
}
