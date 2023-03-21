#include <stdio.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: always 0 if success
 **/
/* betty style doc for function main goes there */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 100; x++)
	{
		putchar(x/10+'0');
	}
	
	putchar('\n');
	return (0);
}
