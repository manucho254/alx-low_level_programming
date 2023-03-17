#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry poin
 * Return: always 0 if success
 * Program to print all combinations of single digit numbers
 *
 */

int main(void)
{
	int val = '0';

	for (val = '0'; val <= '9'; val++)
	{
		if (val != '0')
		{
			putchar(' ');
		}
		putchar(val);
		if (val != '9')
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
