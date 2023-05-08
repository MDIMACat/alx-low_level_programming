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
	size_t length; 
	ssize_t written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = strlen(text_content);
		written = write(fd, text_content, length);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
