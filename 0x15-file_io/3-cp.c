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
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
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
	int result = 0;

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		result = 100;
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		result = 100;
	}

	return (result);
}

/**
 * main - Copy the content of one file to another.
 *
 * @argc: number of arguments.
 * @argv: array of strings.
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
	char buffer[1024];

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

	while ((read_file_from = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		write_file_to = write(file_to, buffer, read_file_from);
		if (write_file_to == -1 || read_file_from != write_file_to)
		{
			print_error(0, -1, argv[2]);
		}
	}

	close_all(file_from, file_to);
	return (0);
}

