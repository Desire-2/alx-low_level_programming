#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: text file
 * @letters: number of letters it should read and print
 * Return: Numbers it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_in_bytes, write_in_bytes;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	read_in_bytes = read(file_descriptor, buffer, letters);
	if (read_in_bytes == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	write_in_bytes = write(STDOUT_FILENO, buffer, read_in_bytes);
	if (write_in_bytes == -1 || read_in_bytes != write_in_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (write_in_bytes);
}
