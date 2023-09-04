#include "main.h"

/**
 * create_file - Create a file with specified permissions and write text to it.
 *
 * @filename: file name
 * @text_content: The text content to write to the file.
 * Return: 1 on success
 * -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = 0;
		while (text_content[text_len] != '\0')
			text_len++;

		bytes_written = write(fd, text_content, text_len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

