#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

#define PROCESS_NUM 5 /** Number of processes */

/**
 * main - run command in separate processes
 *
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 * @env: current environment.
 *
 * Return: always 0 if success.
 */

int main(int argc, char *argv[], char *env[])
{
	pid_t pids[PROCESS_NUM]; /** array with process ids */
	int i;
	int pipes[PROCESS_NUM][2];
	char command[] = "ls -l /tmp";
	char **command_arr;
	(void)argc; /** we won't use argc */
	(void)argv; /** we won't use argv */

	pipes = create_pipes();
	/** creating multiple processes */
	for (i = 0; i < PROCESS_NUM; i++)
	{
		pids[i] = fork();

		if (pids[i] == 0)
		{
			perror("Error creator process \n");
			exit(1);
		}
		/** child process */
		if (pids[i] == 0)
		{
			/** work in child processes */
			pipes = run_functions(i, pipes, env);
			return (0);
		}
	}
	/** wait for child processes to complete */
	for (i = 0; i < PROCESS_NUM; i++)
	{
		wait(NULL);
	}

	return (0);
}

/**
 * run_functions - function to run different,
 * functions on different processes.
 *
 * @process_index: index of the process.
 * @pipes: an array of pipes.
 * @env: current environment variables
 *
 * Return: an array of pipes
 * Description: function to run different,
 * funtions in different processes.
 */
int **run_functions(int process_index, int **pipes, char **env)
{
	char **command_arr;

	/** work in child processes */
	if (process_index == 0)
	{
		command_arr = separate_string(command);
		read_and_write_to_pipe(process_index, pipes, command_arr);
	}
	if (process_index == 1)
	{
		execve(pipes[process_index][0], pipes[process_index][0], NULL);
	}
	if (process_index == 2)
	{
	}
	if (process_index == 3)
	{
	}
	if (process_index == 4)
	{
	}

	return (pipes);
}

/**
 * read_and_write_to_pipe - read and write to pipes
 *
 * @index: process index
 * @pipes: pipes array
 * @data: data to copy to pipe
 */

void read_and_write_to_pipe(int index, int **pipes, char *data)
{
	int j;

	/** close unused pipes */
	for (j = 0; j < PROCESS_NUM + 1; j++)
	{
		if (index != j)
		{
			close(pipes[j][0]);
		}
		if (index + 1 != j)
		{
			close(pipes[j][1])
		}
	}

	if (read(pipes[index][0], data, sizeof(char)) == -1)
	{
		perror("Error at writing \n");
	}

	if (write(pipes[index + 1][1], data, sizeof(char)) == -1)
	{
		perror("Error at writing");
	}
	close(pipes[index][0]);
	close(pipes[i + 1][1]);
}

/**
 * create_pipes - function to create pipes
 *
 * Return: an array of pipes
 */

int **create_pipes(void)
{
	int i;
	int pipes[PROCESS_NUM + 1][0];

	for (i = 0; i < PROCESS_NUM + 1; i++)
	{
		if (pipe(pipes[i]) == -1)
		{
			return (NULL);
		}
	}

	return (pipes);
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
	free(tmp); /** free tmp */
	return (cmd_array);
}

/**
 * free_arr - function to free pointer to pointer array
 *
 * @s: array of strings
 */

void free_arr(char **s)
{
	while (*s)
	{
		free(*s);
	}
	free(s);
}
