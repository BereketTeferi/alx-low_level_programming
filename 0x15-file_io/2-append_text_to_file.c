#include "main.h"

/**
 * append_text_to_file - append text to the end of file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to add to the file.
 *
 * Return: 1 on success
 * -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
