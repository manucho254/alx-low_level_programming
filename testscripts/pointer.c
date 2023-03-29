#include <stdio.h>

/**
 * main: Entry point function
 * In this function  i will be chacking the,
 * sizes of pointers with different datatypes 
 */

int main(void)
{
	char *ch;
	int *n;
	int arr[5];

    printf("size of pointer char: %d\n", sizeof(ch));
	printf("size of pointer int: %d\n", sizeof(n));
	printf("size of int arr: %d\n", sizeof(arr));
	return (0);
}
