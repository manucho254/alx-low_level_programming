#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print single character in terminal
 * @ch: character to print
 * Return: the return value of write
 */

int _putchar(char ch)
{

	return write(1, &ch, 1);
}
