#include "main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: is character passed to be checked if uppercase or lowercase
 *
 * Return: always 1 if uppercase and 0 if lowercase
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
