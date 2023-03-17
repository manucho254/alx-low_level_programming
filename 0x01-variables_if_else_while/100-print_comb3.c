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
		for (int new_val = val; new_val <= '9'; new_val++)
		{
			if (val != new_val)
			{
				if (val != '0' || new_val != '1')
				{
					putchar(' ');
				}
				putchar(val);
				putchar(new_val);
				if (val != '8' || new_val != '9')
				{
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
