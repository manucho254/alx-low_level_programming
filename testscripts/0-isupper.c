#include "main.h"

/**
 * _isupper - function to check if character is uppercase
 *
 * @c: character to check if uppercase
 *
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	} 

}

