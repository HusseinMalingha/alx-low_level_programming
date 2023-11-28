#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message and exits the program.
 *
 * @exit_code: The exit code to be used.
 * @message: The error message to print.
 * @file_name: The name of the file causing the error.
 * @fd: The file descriptor to close (if applicable).
 */
void print_error_and_exit(int exit_code, const char *message,
		const char *file_name, int fd);

/**
 * main - Copies the content of one file to another.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file", argv[1], 0);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		print_error_and_exit(99, "Error: Can't write to file", argv[2], file_from);
	}

	do {
		read_bytes = read(file_from, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			print_error_and_exit(98, "Error: Can't read from file",
					argv[1], file_from);
		}

		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
		{
			print_error_and_exit(99, "Error: Can't write to file",
					argv[2], file_from);
		}
	} while (read_bytes > 0);

	if (close(file_from) == -1)
	{
		print_error_and_exit(100, "Error: Can't close fd", argv[1], file_from);
	}

	if (close(file_to) == -1)
	{
		print_error_and_exit(100, "Error: Can't close fd", argv[2], file_to);
	}

	return (0);
}

void print_error_and_exit(int exit_code, const char *message,
		const char *file_name, int fd)
{
	fprintf(stderr, "%s %s", message, file_name);
	if (fd != 0 && close(fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
	}
	exit(exit_code);
}
