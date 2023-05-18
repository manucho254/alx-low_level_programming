#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
	char exit_app[] = "exit\n";

	printf("Exit application using: exit\n\n");
	while (1)
	{
		printf("$ ");
		/** characters holds the return value of getline */
		characters = getline(&buffer, &buffsize, stdin);
		/** checking for errors in getline */
		if (characters == -1)
		{
			perror("Error:");
			return (1);
		}
		/** exit application of exit */
		if (strcmp(buffer, exit_app) == 0)
		{
			break;
		}
		printf("%s", buffer);
	}

	return (0);
}
