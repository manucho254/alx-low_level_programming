#include <unistd.h>
#include <stdio.h>

/**
 * main - getting the environ
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * @env: curent environment
 *
 * Return: always 0 if sucess
 */

int main(int argc, char *argv[], char *env[])
{
	int i = 0;
	(void)argc;
	(void)argv;

	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
