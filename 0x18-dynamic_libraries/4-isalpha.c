#include "main.h"

/**
 * _isalpha - function to check for uppercase or lowercase letters
 *
 * @c: interger value to check if uppercase or lowercase
 *
 * Return: always 1 if letter is uppercase or lowercase and 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
