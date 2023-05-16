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
	char *portion, *buffer = NULL, *delimeter = " ";
	char *firt_arg;
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

	/** split string array */
	portion = strtok(buffer, delimeter);
	first_arg = strcpy(portion);
	while (portion != NULL)
	{
		printf("%s", portion);
		/** update the pointer of portion */
		portion = strtok(NULL, delimeter);
	}


	return (0);
}
