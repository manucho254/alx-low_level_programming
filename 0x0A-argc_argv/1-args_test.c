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
	argc -= 1;
	if (argc < 10)
	{
		putchar(argc + '0');
	}
	else if (argc >= 10 && argc <= 99)
	{
		putchar((argc / 10) + '0');
		putchar((argc % 10) + '0');
	}
	else if (argc >= 100 && argc <= 999)
	{
		putchar(((argc / 10) / 10) + '0');
		putchar(((argc / 10) % 10) + '0');
		putchar((argc % 10) + '0');
	}

	putchar('\n');

	/** we cast argv to void  to tell the compiler that this will be unused*/
	(void) argv;

	return (0);
}
