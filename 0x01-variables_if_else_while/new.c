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
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = x; y < 10; y++)
		{
			for (z = y; z < 10; z++)
			{
				if (x != y && y != z)
				{
					if(x != 0 || y != 1 || z != 2)
					{
						putchar(' ');
					}
					putchar(x+'0');
					putchar(y+'0');
					putchar(z+'0');
					if (x != 7 || y != 8 || z != 9)
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
