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
		for (y = x; y < 100; y++)
		{  
			if (x != y)
			{
				if (x != 0 || y != 1)
					putchar(' ');
				putchar(x/10+'0');
				putchar(x%10+'0');
				putchar(' ');
				putchar(y/10+'0');
				putchar(y%10+'0');
				if (x != 98 || y != 99)
					putchar(',');
			}
		}
	}
	
	putchar('\n');
	return (0);
}
