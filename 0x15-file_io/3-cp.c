#include "main.h"
int main(int argc, char *argv[]);
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, x, y, w;
	char buf[BUFFER_SIZE];

	while (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(file_from, buf, BUFSIZ)) > 0)
	{
		if (file_to < 0 || write(file_to, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = close(file_from);
	w = close(file_to);
	if (y < 0 || w < 0)
	{
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (w < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

