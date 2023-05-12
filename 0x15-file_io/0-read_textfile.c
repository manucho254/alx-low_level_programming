#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#define POSIX 1 /** standard output value */

/**
 * read_textfile - function to read data from a text file and print it
 * @filename: name of file to read data from
 * @letters: number of letters to print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_size, write_size;
	char *str = malloc(letters * sizeof(char));

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
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
	str[read_size] = '\0';

	write_size = write(POSIX, str, read_size - 1);

	/** check if write failed */
	if (write_size < 0)
	{
		return (0);
	}

	return (read_size);
}
