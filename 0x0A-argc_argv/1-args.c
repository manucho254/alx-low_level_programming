#include "main.h"

/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: string array containing the command line arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	if (argc < 10)
	{
		_putchar(argc + '0');
	}
	else if (argc >= 10 && argc <= 99)
	{
		_putchar((argc / 10) + '0');
		_putchar((argc % 10) + '0');
	}
	else if (argc >= 100 && argc <= 999)
	{
		_putchar(((argc / 10) / 10) + '0');
		_putchar(((argc / 10) % 10) + '0');
		_putchar((argc % 10) + '0');
	}

	_putchar('\n');

	/** we cast argv to void  to tell the compiler that this will be unused*/
	(void) argv;

	return (0);
}
