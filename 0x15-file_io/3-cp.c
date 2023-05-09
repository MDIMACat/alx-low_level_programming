#include "main.h"

#define BUF_SIZE 1024

/**
 * print_err - prints error message
 * @msg: message pointer parameter
 * @filename: filename pointer parameter
 * @exit_code: exit code parameter
 *
 * Retrun: Void
 */

void print_err(char *msg, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(exit_code);
}

/**
 * main - check the code
 *@argc: argument parameter
 *@argv: argument parameter
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, num_read, num_write;
	char buffer[BUF_SIZE];

	if (argc != 3)
		print_err("Usage:%s file_from file_to \n", argv[0], 97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_err("Error: Can't read from file %s\n", argv[1], 98);
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		print_err("Error: Can't write to %s\n", argv[2], 99);
	while ((num_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		num_write = write(fd_to, buffer, num_read);
		if (num_write != num_read)
			print_err("Error: Can't write to %s\n", argv[2], 99);
	}
	if (num_read == -1)
		print_err("Error: Can't read from file %s\n", argv[1], 98);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
