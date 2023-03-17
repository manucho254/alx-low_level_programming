#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry poin
 * Return: always 0 if success
 * Program to print all combinations of 3 digit numbers
 *
 */

int main(void)
{
	int num_1 = '0';
	int num_2 = '0';
	int num_3 = '0';

	for (num_1 = '0'; num_1 <= '9'; num_1++)
	{
		for (num_2 = num_1; num_2 <= '9'; num_2++)
		{
			for (num_3 = num_2; num_3 <= '9'; num_3++)
			{
				if (num_1 != num_2 && num_2 != num_3)
				{
					if (num_1 != '0' || num_2 != '1' || num_3 != '2')
					{
						putchar(' ');
					}
					putchar(num_1);
					putchar(num_2);
					putchar(num_3);
					if (num_1 != '7' || num_2 != '8' || num_3 != '9')
					{
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
