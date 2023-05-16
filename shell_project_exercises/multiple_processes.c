#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

#define PROCESS_NUM 10 /** number of processes */


/**
 * main - forking multiple times
 *
 * Return: always 0 if success
 *
 */

int main(void)
{
	/** creating an array of pipes */
	int pipes[PROCESS_NUM + 1][2];
	/** array of process ids */
	int pids[PROCESS_NUM];
	int i;

	/** creating pipes and adding them to our pipes array */
	for (i = 0; i < PROCESS_NUM + 1; i++)
	{
		if (pipe(pipes[i]) == -1)
		{
			/** checking fro pipe creation error */
			perror("Error creating pipes \n");
			exit(1);
		}
	}
	/** creating multiple processes */
	for (i = 0; i < PROCESS_NUM; i++)
	{
		pids[i] = fork();

		if (pids[i] == -1)
		{
			perror("Error creating process \n");
			exit(1);
		}

		if (pids[i] == 0)
		{
			/**
			 * child process, the return here makes,
			 * the child process not create its own,
			 * child process hence get the right number,
			 * of process we need when running the program.
			 */

			int j;

			/** close unused pipes */
			for (j = 0; j < PROCESS_NUM + 1; j++)
			{
				if (i != j)
				{
					close(pipes[j][0]);
				}
				if (i + 1 != j)
				{
					close(pipes[j][1]);
				}
			}

			int x;

			/** read data in the from pipe */
			if (read(pipes[i][0], &x, sizeof(int)) == -1)
			{
				perror("Error at reading \n");
				exit(1);
			}
			printf("%d Got %d\n", i, x);
			x++;

			/** write data to another pipe */
			if (write(pipes[i + 1][1], &x, sizeof(int)) == -1)
			{
				perror("Error at writing\n");
			}

			printf("%d Sent %d\n", i, x);
			/** close the pipes we used */
			close(pipes[i][0]);
			close(pipes[i + 1][1]);
			return (0);
		}
	}

	/** Main process */

	int j;
	/** close unused pipes */
	for (j = 0; j < PROCESS_NUM + 1; j++)
	{
		if (j != PROCESS_NUM)
		{
			close(pipes[j][0]);
		}
		/** don't close the first pipe */
		if (j != 0)
		{
			close(pipes[j][1]);
		}
	}

	int y = 5;

	printf("Main process sent %d\n", y);
	/** write data to pipe */
	if (write(pipes[0][1], &y, sizeof(int)) == -1)
	{
		perror("Error at writing\n");
		exit(1);
	}

	/** read data to from pipe */
	if (read(pipes[PROCESS_NUM][0], &y, sizeof(int)) == -1)
	{
		perror("Error at reading\n");
		exit(1);
	}
	printf("The final result is %d\n", y);
	close(pipes[0][1]);
	close(pipes[PROCESS_NUM][0]);

	/** wait for each child process to finish */
	for (i = 0; i < PROCESS_NUM; i++)
	{
		wait(NULL);
	}

	return (0);
}
