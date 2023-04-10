#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - function to print a single character in terminal
 * @c: character to be printend in terminal
 * Return: an integer of the value to be printed in ther terminal
 */

int _putchar(char c)
{
	char ch = (char) c; /* convert the integer to a character */


	return (write(STDOUT_FILENO, &ch, 1));/**
										   * Write character to,
										   * the standard output
										   */
}
