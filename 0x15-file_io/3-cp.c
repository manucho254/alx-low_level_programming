#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define READ_BUFFER 1024

int copy_to_file(char *file_from, char *file_to);
/**
 * main - entry point
 *
 * @argc: number of arguments passed to function
 * @argv: array of strings containing the arguments
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int status;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	status = copy_to_file(file_from, file_to);

	exit(status);

	return (0);
}

/**
 * copy_to_file - function to compy data from one file to another
 *
 * @file_from: file to copy data from
 * @file_to: file to copy data to
 *
 * Return: 1 if success else exit with some custom codes
 */
int copy_to_file(char *file_from, char *file_to)
{
	int from_size, to_size, read_size = 0, write_size;
	char *str;

	/** open the first file */
	from_size = open(file_from, O_RDONLY);
	/** check for errors in file */
	if (from_size < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	to_size = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	/** check for errors when opening file */
	if (to_size < 0)
	{
		close(from_size);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	str = malloc(READ_BUFFER * sizeof(char));
	if (str == NULL)
		return (1);
	/** read the file one */
	while ((read_size = read(from_size, str, READ_BUFFER)) > 0)
	{
		if (read_size < 0)
		{
			close(from_size);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			return (98);
		}
		write_size = write(to_size, str, read_size);
		/** check for errors in write */
		if (write_size < 0 || write_size != read_size)
		{
			close(from_size);
			close(to_size);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	}
	free(str);
	/** close all the files */
	if (close(from_size) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_size);
		return (100);
	}
	if (close(to_size) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_size);
		return (100);
	}

	return (0);
}
