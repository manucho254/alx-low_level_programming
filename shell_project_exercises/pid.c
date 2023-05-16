#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t my_pid;
	pid_t parent_pid;

	parent_pid = getppid();
	my_pid = getpid();
	printf("Parent PID: %u and Child PID: %u\n",parent_pid, my_pid);

	return (0);
}
