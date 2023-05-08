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
	int fl_r, fl_w, x, y, w;
	char buf[BUFFER_SIZE];

	while (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fl_r = open(argv[1], O_RDONLY);
	if (fl_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fl_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fl_r, buf, BUFSIZ)) > 0)
	{
		if (fl_w < 0 || write(fl_w, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fl_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = close(fl_r);
	w = close(fl_w);
	if (y < 0 || w < 0)
	{
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_r);
		if (w < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_w);
		exit(100);
	}
	return (0);
}

