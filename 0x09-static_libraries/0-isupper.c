#include "main.h"

/**
 * _isupper - function to check if character is uppercase
 *
 * @c: character passed in function for checking if uppercase
 *
 * Return: return 1 if upperscase else return 0
 */

int _isupper(int c)
{
	/**
	 * uppercase letters in ascii start from 65 to 90
	 * * we could have also used 'A' and 'Z' in the if statetement
	 */

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
