#include "main.h"

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	int x;
	char *p_name = argv[0]; /** program name is always at index 0 in argv */

	for (x = 0; p_name[x] != '\0'; x++)
	{
		_putchar(p_name[x]);
	}

	_putchar('\n');

	/** we cast argc to void  to tell the compiler that this will be unused*/
	(void) argc;

	return (0);
}
