#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         Failure conditions include inability to open or write to the file,
 *         if the file does not exist, or if the required permissions are lacking.
 *         If text_content is NULL, nothing is added to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
