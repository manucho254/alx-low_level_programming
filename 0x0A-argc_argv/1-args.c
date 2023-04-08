#include "main.h"

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	_putchar(argc + 10);
	_putchar('\n');

	/** we cast argv to void  to tell the compiler that this will be unused*/
	(void) argv;

	return (0);
}
