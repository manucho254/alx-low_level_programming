#include <stdio.h>

/**
 * _isupper - function to check if character is uppercase
 *
 * @c: character passed in function for checking if uppercase
 *
 * Return: return 1 if upperscase else return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
