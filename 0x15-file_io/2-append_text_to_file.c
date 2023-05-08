#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: pointer to the file
 * @text_content: pointer to the text content
 * Return: 1 if successful and -1 if unsuccessful
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, numBytes = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[numBytes] != '\0')
			numBytes++;
		if (write(fd, text_content, numBytes) != numBytes)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
