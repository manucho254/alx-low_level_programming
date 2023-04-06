#include "main.h"
#include <string.h>

/**
 * palindrome_check - function to compare values in ,
 * the end and values in the beginning
 * @s: string to check if palindrome
 * @start: index value from 0 to strlen(s)
 * @end: index value from strlen(s) to 0
 * Return: 1 if palindrome else return 0
 */


int palindrome_check(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	/** do comparison of the two character a different indexes **/
	if (*(s + start) == *(s + end))
	{
		return (palindrome_check(s, start + 1, end - 1));
	}

	return (0); /** return 0 if *(s + start) != *(s + end) */
}

/**
 * is_palindrome - function to check if string is a palindrome
 * @s: string to check if palindrome
 * Return: 1 if palindrome else return 0
 */

int is_palindrome(char *s)
{
	return (palindrome_check(s, 0, strlen(s) - 1));
}
