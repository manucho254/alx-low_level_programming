#include "main.h"
#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	char ch = (char) c; /* convert the integer to a character */


	return write(STDOUT_FILENO, &ch, 1); /** 
										  * Write character to,
										  * the standard output
										  */
}
