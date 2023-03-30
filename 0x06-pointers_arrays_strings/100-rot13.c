#include "main.h"
#include <string.h>

/**
 * *rot13 - function that encodes string array using rot13
 * @s: string array to be encoded
 * Return: pointer representing the string array
 */

char *rot13(char *s)
{
	int len = strlen(s); /** length of sttring array */
	/** input[] - input of alphabets before rot13 encoding */
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/** input[] - output of alphabets after rot13 encoding */
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int len_input = strlen(input); /** length of alphabets */
	int x;
	int y;

	for (x = 0; x < len; x++)
	{
		for (y = 0; y < len_input; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}

	return (s);
}
