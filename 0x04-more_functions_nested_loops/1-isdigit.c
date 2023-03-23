#include <stdio.h>

/**
 * _isdigit - function to check if value is a digit
 *
 * @c: character passed in function for checking if digit
 *
 * Return: return 1 if digit else return 0
 */

int _isupper(int c)
{
	/**
	 * digits in ascii start from 48 to 57
	 */

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
