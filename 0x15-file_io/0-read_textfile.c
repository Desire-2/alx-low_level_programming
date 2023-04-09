#include "main.h"



/**
 *  read_textfile -  reads a text file and prints it to the POSIX
 *  standard output.
 *  @filename: file to be read.
 *  @letters: Number of letters could be readed and printed
 *  Return: Numbers
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	int r, fd;

	ptr = malloc(sizeof(char *) * letters);
	if (ptr == 0 || filename == 0)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	r = read(fd, ptr, letters);
	write(STDOUT_FILENO, ptr, r);

	free(ptr);
	close(fd);
	return (r);
}
