#include <stdio.h>
#include <unistd.h>

/**
 * main - using getline example
 *
 * Return: always 0 if success
 *
 */

int main(void)
{
	char *buffer = NULL;
	size_t buffsize = 0;
	int characters = 0;

	printf("$ ");
	/** characters holds the return value of getline */
	characters = getline(&buffer, &buffsize, stdin);
	/** checking for errors in getline */
	if (characters == -1)
	{
		perror("Error:");
	}

	printf("%s", buffer);

	return (0);
}
