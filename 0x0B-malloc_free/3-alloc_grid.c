#include "main.h"
#include <stdlib.h>

int check_width_and_height(int height, int width);
int **populate_grid(int **grid, int height, int width);

/**
 * **alloc_grid - function that returns a pointer to a ,
 * 2 dimensional array of integers
 * @width: width of the two dimensional array
 * @height: height of the two dimensional array
 * Return: pointer to a 2 dimensional array of integer,
 * or NULL if height or width == 0 or negative
 */

int **alloc_grid(int width, int height)
{
	/**
	 * **arr pointer to pointer for us to be able to store,
	 * the address of another pointer
	 */
	int **arr;
	/** pointer to hold the values of the inner array of size width */
	int *inner;
	int x, y;

	if (check_width_and_height(height, width) == 0)
	{
		return (NULL);
	}

	/** Memory allocation for **arr of size height*/
	arr = malloc(sizeof(int) * height * width);

	arr = populate_grid(arr, height, width);

	return (arr);
}

/**
 * **populate_grid - function that returns a pointer to a ,
 * 2 dimensional array of integers
 * @grid: pointer to two dimensional array
 * @width: width of the two dimensional array
 * @height: height of the two dimensional array
 * Return: pointer to a 2 dimensional array of integers,
 * or return NULL
 */

int **populate_grid(int **grid, int height, int width)
{
	for (x = 0; x < height; x++)
	{
		/** memory allocation of inner of size width */
		inner = malloc(sizeof(int) * width);

		if (grid == NULL || inner == NULL)
		{
			free_grid(grid, height);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			/**
			 * initializing the inner array with value 0,
			 * with value 0 for all indexes
			 */
			*(inner + y) = 0;
		}

		/**
		 * pointer arithmetic so that our pointer to pointer,
		 * store the adresses of inner at arr[x]
		 */
		*(grid + x) = inner;
	}

	return (grid);
}

/**
 * free_grid - function to free a two dimensional array
 * @arr: 2 dimensional array to be freed
 * @height: height of the two dimensional array
 */

void free_grid(int **arr, int height)
{
	int k;

	for (k = 0;  k < height; k++)
	{
		free(*(arr + k));
	}
}

/**
 * check_width_and_height - function to free a two dimensional array
 * @width: width of the two dimensional array
 * @height: height of the two dimensional array
 * Return: 0 if width or height is less or equal to 0,
 * else return 1
 */

int check_width_and_height(int height, int width)
{
	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
