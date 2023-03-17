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
	char ch_l = 'a';
	char ch_u = 'A';

	for (ch_l = 'a'; ch_l <= 'z'; ch_l++)
	{
		putchar(ch_l);
	}
	for (ch_u = 'A'; ch_u <= 'Z'; ch_u++)
	{
		putchar(ch_u);
	}
	putchar('\n');
	return (0);
}
