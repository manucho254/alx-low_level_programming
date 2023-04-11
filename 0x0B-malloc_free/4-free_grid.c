#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free a two dimensional array
 * @grid: 2 dimensional array to be freed
 * @height: height of the two dimensional array
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(arr[k]);
	}

	free(arr);
}
