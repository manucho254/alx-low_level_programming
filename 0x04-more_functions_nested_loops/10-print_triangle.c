#include "main.h"

/**
 * print_triangle - function to print a tirangle in terminal,
 * using the @size parameter
 *
 * @size: the triangle size to be printed
 */

void print_triangle(int size)
{
	int x;
	int y;
	int j;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (j = x; j <= size; j++)
			{
				if (x != j && j != 0)
				{
					_putchar(' ');
				}
			}
			for (y = x; y >= 0; y--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
