#include "main.h"

/**
 * swap_int - function to swap the values of two intgers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int *tmp = *a; /** store the value of a before changing it */
	*a = *b;
	*b = tmp;
}
