#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX std output
 * @filename: pointer to file
 * @letters: characters in file
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[bytes_read] = '\0';
	if (write(STDOUT_FILENO, buf, bytes_read) != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes_read);
}
