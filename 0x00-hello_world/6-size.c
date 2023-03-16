#include <stdio.h>
#include <float.h>


/**
 * main - Entry point
 *
 * printf - Print data encoded in quotes in the terminal
 *
 * Get the size of various data types on  it is compiled an run on
 *
 * Return: Always return 0 (success)
 */


int main(void)
{
	printf("Size of a char: %d\n", sizeof(char));
	printf("Size of a int: %d\n", sizeof(int));
	printf("Size of a long: %d\n", sizeof(long));
	printf("Size of a long long int: %d\n", sizeof(long long int));
	printf("Size of a float: %d\n", sizeof(float));
	return (0);
}
