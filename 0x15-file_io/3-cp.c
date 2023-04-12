#include "main.h"

#define BUFFER 1024
/**
 * main - .....
 * @argc: ........
 * @argv: ......
 * Return: Numbers
 */

int main(int argc, char *argv[])
{
	 int file_from, file_to;

	while (argc != 3)

	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);

		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
}

/**
* * size_cpy - ........
* Return: .......
*/
int size_cpy(ssize_t bt_r, char buffer[BUFFER])
{
	unsigned int *bites = bt_r;

	bt_r = ((read(file_from, buffer, BUFFER)) > 0);

	while  (bites)
		if (write(file_to, buffer, bt_r) != bt_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (bt_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

