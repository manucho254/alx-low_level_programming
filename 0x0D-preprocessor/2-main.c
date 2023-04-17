#include <stdio.h>

#define filename __FILE__

/**
 * main - function to print the name of the file it was compiled from
 * Return: always 0 if success
 */
int main(void)
{
	printf("%s\n", filename);
	return (0);
}
