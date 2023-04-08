#include "main.h"
#include <stdio.h>

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	putchar(argc + '0');
	putchar('\n');

	/** we cast argv to void  to tell the compiler that this will be unused*/
	(void) argv;

	return (0);
}
