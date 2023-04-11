#include "main.h"
#include <stdlib.h>

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

	/** Memory allocation for **arr of size height*/
	arr = malloc(sizeof(int) * height);

	for (x = 0; x < height; x++)
	{
		if (arr == NULL || inner == NULL)
		{
			return (NULL);
		}

		/** memory allocation of inner of size width */
		inner = malloc(sizeof(int) * width);

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
		*(arr + x) = inner;
	}

	return (arr);
}
