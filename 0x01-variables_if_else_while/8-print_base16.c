#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry poin
 * Return: always 0 if success
 * Program to print all hexidecimal values
 *
 */

int main(void)
{
	int nm = '0';
	int wd = 'a';

	for (nm = '0'; nm <= '9'; nm++)
	{
		putchar(nm);
	}
	for (wd = 'a'; wd <= 'f'; wd++)
	{
		putchar(wd);
	}
	putchar('\n');
	return (0);
}
