#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Print an error message and exit with a specified exit code.
 * @exit_code: The exit code to use when exiting.
 * @message: The error message to print.
 * @file_name: The name of the file related to the error.
 * @fd_value: The file descriptor value related to the error.
 */
void error_exit(int exit_code, const char *message,
				const char *file_name, int fd_value)
{
	if (file_name != NULL)
		dprintf(STDERR_FILENO, message, file_name);
	else if (fd_value != -1)
		dprintf(STDERR_FILENO, message, fd_value);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Copy the content of one file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, otherwise an exit code according to errors.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL, -1);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from %s\n", argv[1], -1);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2], -1);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2], -1);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from %s\n", argv[1], -1);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, file_from);

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, file_to);

	return (0);
}
