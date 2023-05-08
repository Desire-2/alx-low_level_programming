#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, bytes_read, close_r, close_w;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf("Usage: cp file_from file_to\n");
		return (1);
	}

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		perror(argv[1]);
		return (2);
	}

	fd_w = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_w == -1)
	{
		perror(argv[2]);
		close(fd_r);
		return (3);
	}
	while ((bytes_read = read(fd_r, buffer, BUFSIZ)) > 0)
	{
		if (write(fd_w, buffer, bytes_read) != bytes_read)
		{
			perror(argv[2]);
			close(fd_r);
			close(fd_w);
			return (4);
		}
	}
	if (bytes_read == -1)
	{
		perror(argv[1]);
		close(fd_r);
		close(fd_w);
		return (5);
	}
	close_r = close(fd_r);
	if (close_r == -1)
	{
		perror(argv[1]);
		close(fd_w);
		return (6);
	}
	close_w = close(fd_w);
	if (close_w == -1)
	{
		perror(argv[2]);
		return (7);
	}
	return (0);
}

