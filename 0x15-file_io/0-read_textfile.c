#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - function to read data from a text file and print it
 * @filename: name of file to read data from
 * @letters: number of letters to print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_size, write_size;
	char *str;

	str = malloc(letters * sizeof(char *));

	if (filename == NULL || str == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY, 0);
	/** check if open was unsuccessful */
	if (file < 0)
	{
		return (0);
	}
	read_size = read(file, str, letters);
	/** check if read was unsuccessful */
	if (read_size < 0)
	{
		return (0);
	}
	str[read_size + 1] = '\0';
	write_size = write(STDOUT_FILENO, str, read_size);
	free(str);

	/** check if write failed */
	if (write_size < 0 || write_size != read_size)
	{
		return (0);
	}
	close(file);

	return (read_size);
}
