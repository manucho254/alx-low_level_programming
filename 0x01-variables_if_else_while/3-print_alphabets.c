#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry poin
 * Return: always 0 if success
 * Program to print all alphabets in uppercase
 *
 */

int main(void)
{
	char ch = 'A';

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
