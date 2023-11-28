#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed. Returns 0 on failure.
 *         If the file cannot be opened or read, or if the filename is NULL,
 *         or if the write fails to write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, O_RDONLY);
	char *buffer = (char *)malloc(letters);
	ssize_t bytes_read = read(file_descriptor, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
		return (0);

	if (file_descriptor == -1)
		return (0); /* Return 0 if the file cannot be opened */

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0); /* Return 0 if memory allocation fails */
	}

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0); /* Return 0 if read fails */
	}

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0); /**
			     * Return 0 if write fails or does not write the
			     * expected amount of bytes
			     */
	}

	free(buffer);
	close(file_descriptor);

	return (bytes_written);
}
