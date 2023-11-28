#include "main.h"

/**
 * create_file - Creates a file with the given filename and writes the
 *               provided text content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 *         Failure conditions include inability to create the file,
 *         inability to write to the file, or if text_content is NULL.
 *         If the file already exists, it is truncated.
 *         The created file has permissions rw-------.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	/* 0600 sets the permissions to rw------- */

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
