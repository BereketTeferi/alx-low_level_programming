#include "main.h"

/**
 * print_error_and_exit - Prints an error message and exits the program.
 *
 * @err_code: error code to use in the message.
 * @file_name: name of the file associated with the error.
 */
void print_error_and_exit(int err_code, const char *file_name)
{
	dprintf(STDERR_FILENO, "Error: %s: %s\n", err_code == 98 ? "Can't read from file" : "Can't write to", file_name);
	exit(err_code);
}

/**
 * close_fd_and_exit - Closes a file descriptor and exits if there is an error.
 *
 * @fd: The file descriptor to close.
 */

void close_fd_and_exit(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char **argv)
{
	int src_fd, dest_fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		print_error_and_exit(98, argv[1]);
	}

	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		close_fd_and_exit(src_fd);
		print_error_and_exit(99, argv[2]);
	}
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		close_fd_and_exit(src_fd);
		close_fd_and_exit(dest_fd);
		dprintf(STDERR_FILENO, "Memory allocation error\n");
		exit(1);
	}

	while ((bytes_read = read(src_fd, buffer, 1024)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close_fd_and_exit(src_fd);
			close_fd_and_exit(dest_fd);
			free(buffer);
			print_error_and_exit(99, argv[2]);
		}
	}
	close_fd_and_exit(src_fd);
	close_fd_and_exit(dest_fd);
	free(buffer);

	return 0;
}
