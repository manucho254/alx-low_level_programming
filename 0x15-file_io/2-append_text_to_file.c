#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function to append text at the end of a file
 * @filename: name of the file we append data to
 * @text_content: data to add to file
 * Return: 1 if success else return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_size = 0;

	/** check if filename is null */
	if (filename == NULL)
	{
		return (-1);
	}

	/**
	 * open a file in append mode
	 */

	file = open(filename, O_RDWR | O_APPEND);
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
