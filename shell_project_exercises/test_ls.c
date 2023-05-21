#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

#define PROCESS_NUM 5 /** Number of processes */

/**
 * main - run command in separate processes
 *
 * Return: always 0 if success
 */

int main(void)
{
	char command[] = "/bin/ls -l /tmp";
	char **command_arr, **tmp;
	pid_t child_pid;

	child_pid = fork();
	tmp = NULL;
	/** checking for forking error */
	if (child_pid < 0)
	{
		perror("Error forking");
		return (1);
	}

	command_arr = separate_string(command);
	if (command_arr == NULL)
	{
		return (1);
	}
	/** run execve in child process */
	if (child_pid == 0)
	{
		if (execve(command_arr[0], command_arr, tmp) == -1)
		{
			perror("Error running program");
			exit(1);
		}
	}
	else
	{
		wait(NULL);
		printf("%s\n", command_arr[0]);
		printf("Parrent process.\n");
	}

	return (0);
}

/**
 * free_arr - function to free pointer to pointer array
 *
 * @s: array of strings
 */

void free_arr(char **s)
{
	int i;

	if (s == NULL || *s == NULL)
	{
		return;
	}

	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);	
	}
	free(s);
}

/**
 * separate_string - function to
 *
 * @s: string array
 * Return: an array of strings
 */

char **separate_string(char *s)
{
	char *portion, *tmp;
	char **cmd_array; /** array of string arrays */
	char *deli = " "; /** delimiter of using a space */
	int x = 0, count = 0, len = strlen(s);

	tmp = malloc(len * sizeof(char));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp[len] = '\0';
	strcpy(tmp, s); /** copy string */
	portion = strtok(s, deli);
	while (portion != NULL)/** get number of strings */
	{
		portion = strtok(NULL, " "); /** update value of portion */
		count++; /** increament count */
	}
	cmd_array = malloc((count + 1) * sizeof(char *));
	if (cmd_array == NULL)
	{
		return (NULL);
	}
	cmd_array[count + 1] = '\0'; /** add null pointer to cmd_array */
	portion = strtok(tmp, deli); /** split string using space */
	free(tmp); /** free tmp */
	while (portion != NULL)
	{
		cmd_array[x] = malloc(strlen(portion) * sizeof(char));
		if (cmd_array[x] == NULL)
		{
			return (NULL);
		}
		strcpy(cmd_array[x], portion); /** copy string */
		portion = strtok(NULL, " "); /** update value of portion */
		x++;
	}
	return (cmd_array);
}
