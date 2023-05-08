#include "main.h"

/**
 * create_file- create a new file
 * @filename: pointer to file
 * @text_content: pointer to content
 * Return: 1 on success and -1 on fail
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	int buf;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (length > 0)
	{
		buf = write(fd, text_content, length);
		if (buf == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
