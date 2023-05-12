#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function to create a file
 * @filename: name of the file we create
 * @text_content: data to add to file
 * Return: 1 if success else return -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_size = 0;

	/** check if filename is null */
	if (filename == NULL)
	{
		return (-1);
	}

	/**
	 * open a file and if it does not exist create,
	 * a file with read and write permission
	 * permission 0600 means read and write
	 */

	file = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);
	/** check if opening file failed */
	if (file < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_size = write(file, text_content, strlen(text_content));
	}
	/** check if writing to file failed */
	if (write_size < 0)
	{
		return (-1);
	}

	/** close the open file */
	close(file);

	return (1);
}
