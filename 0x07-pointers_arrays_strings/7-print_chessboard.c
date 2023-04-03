#include "main.h"

/**
 * print_chessboard - function to print a chessboard in terminal
 * @a: a two dimensional array
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;
	int size = sizeof(a);

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
