#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: always 0 if success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		printf("%c", i);
	}
	printf("\n");

	for(i = 0; i < 10; i++)
	{
		printf("%d", i * 2);
	}
	printf("\n");

	i = -9;
	while (i < 0)
	{
		printf("%d", -i);
		i++;
	}
	printf("\n");

	i = 0;
	while (i < 10)
	{
		i++;
		printf("%d", i / 2);
	}
	printf("\n");

	i = 9;

	while (--i)
	{
		printf("%d", i);
	}
	printf("\n");

	i = 9;

	while (i--)
	{
		printf("%d", i);
	}
	printf("\n");

	i = 0;

	while (i < 10)
	{
		printf("%d", i % 2);
		i++;
	}
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	printf("%d", i);
	printf("\n");

	return (i);
}
