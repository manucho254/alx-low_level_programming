#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 * *string_nconcat - function to concatnate two strings
 * @s1: string number one
 * @s2: string number two
 * @n: number of bytes of s2 to copy
 * Return: pointer to the newly allocated space in memory,
 * else return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/** variable to hold the size of pointer s1 */
	unsigned int size_s1 = _strlen(s1);
	/** variable to hold * the size of pointer s2 */
	unsigned int size_s2 = _strlen(s2);
	unsigned int size_s3 = 0; /** variable to hold the size of  pointer s3 */
	unsigned int x, y;
	char *s3; /** pointer to new memory location */

	if (n >= size_s2)
	{
		size_s3 = (size_s1 + size_s2); /** update the size of s3 */
	}
	else
	{
		size_s3 = (size_s1 + n);
	}

	/** allocate memory of size_s3 to s3*/
	s3 = malloc(sizeof(char) * (size_s3 + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	s3[size_s3] = '\0'; /** add a null pointer to the end of the array */

	if (s1)
	{
		/** add data from s1 to s3 */
		for (x = 0; s1[x] != '\0'; x++)
		{
			s3[x] = s1[x];
		}
	}
	if (s2)
	{
		/** check if s1 is equal to none and change the value of x to 0*/
		if (s1 == NULL)
		{
			x = 0;
		}

		/** add data from s2 to s3 */
		for (y = 0; y <= n; y++)
		{
			s3[x] = s2[y];
			x++;
		}
	}

	return (s3);
}

/**
 * _strlen - function to get length of a string
 * @s: string to check the length
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int j;
	int size = 0;

	if (s)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			size += 1;
		}
	}

	return (size);
}
