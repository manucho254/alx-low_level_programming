#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - function to convert string to an integer
 * @s: string array to get integer from
 * Return: an integer that we get from the string
 */

int _atoi(char *s)
{
	int x;
	unsigned int ret;
	int minus = 0;
	int plus = 0;
	int len = strlen(s);

	for (x = 0; x < len; x++)
	{
		if (s[x] == '-')
		{
			minus++;
		}
		if (s[x] == '+')
		{
			plus++;
		}
		if (s[x] >= '0' && s[x] <= '9')
		{
			if (minus - plus == 0)
			{
				ret = (ret * 10) + (s[x] - '0');
			}
			else
			{
				ret = (ret * 10) + -(s[x] - '0');
			}
			if (s[x + 1] < '0' || s[x + 1] > '9')
			{
				break;
			}
		}
	}

	return (ret);
}
