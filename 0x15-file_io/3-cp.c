#include "main.h"
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - ............
 * @argc: ..........
 * @argv: .......
 * Return: ......
 */
int main(int argc, char *argv[])
{
	int fd_from = open_file(argv[1], O_RDONLY, 0);
	int fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, FILE_MODE);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_file(fd_from, fd_to);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
/**
 * open_file - ......
 * @path: ........
 * @flags: ......
 * @mode: ......
 * Return: .........
 */
int open_file(const char *path, int flags, mode_t mode)
{
	int fd = open(path, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", path);
		exit(98);
	}
	return (fd);
}
/**
 * copy_file - ............
 * @fd_from: .....
 * @fd_to: ...........
 * Return: ......
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;


	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(98);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}
/**
 * close_file - ..........
 * @fd: ..........
 * Return: ........
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

