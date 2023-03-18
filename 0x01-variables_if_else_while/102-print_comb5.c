#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 if success
 * Program to print all combinations of 2 digit numbers
 *
 */

int main(void)
{
	int range = 99;
	int x = 0; /* variable for first for loop*/
	int y = 0; /* variable for second for loo*/

	for (x = 0; x <= range; x++)
	{
		for (y = x; y <= range; y++)
		{
			if (x != y)
			{
				if (x != 0 || y != 1)
				{
					putchar(' ');
				}
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (x != 98 || y != 99)
				{
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
