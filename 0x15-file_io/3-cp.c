#include "main.h"

/**
 * print_error - Print an error message and exit.
 *
 * @file_from: File descriptor for source file.
 * @file_to: File descriptor for destination file.
 * @filename: Name of the file.
 *
 * Return: 98 if can't read
 * 99 if can't write
 * 0 otherwise.
 */

int print_error(int file_from, int file_to, char *filename)
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (0);
}

/**
 * close_all - Close file descriptors.
 *
 * @file_from: File descriptor for source file.
 * @file_to: File descriptor for destination file.
 *
 * Return: 0 on success
 * 100 on error.
 */

int close_all(int file_from, int file_to)
{
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * main - Copy the content of one file to another.
 *
 * @argc: The number of arguments.
 * @argv: An array of strings.
 *
 * Return: 97 if the number of arguments is not correct
 * 98 if file_from does not exist or cannot be read
 * 99 if writing to file_to fails
 * 100 if closing a file descriptor fails
 * 0 on success.
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t read_file_from, write_file_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_from == -1 || file_to == -1)
	{
		print_error(file_from, file_to, (file_from == -1) ? argv[1] : argv[2]);
	}
	buffer = malloc(sizeof(char) * 1024 + 1);
	if (!buffer)
		return (0);
	while (read_file_from != NULL)
	{
		read_file_from = read(file_from, buffer, 1024);
		print_error(read_file_from, 0, argv[1]);
		buffer[1024] = '\0';

		write_file_to = write(file_to, buffer, read_file_from);
		if (read_file_from != write_file_to)
			print_error(0, -1, argv[2]);
	}
	close_all(file_from, file_to);

	return (0);
}
