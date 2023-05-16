#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: always 0.
 */

int main(void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	
	if (child_pid == 0)
	{
		printf("Wiat for me, wait for me\n");
		sleep(3);
	}
	else
	{
		/** wait for child process to finish */
		wait(&status);
		printf("Oh, it all better now\n");
	}

	return (0);
}
