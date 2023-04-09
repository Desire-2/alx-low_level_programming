#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of file
 * @text_content: NULL terminated string to add.
 * Return: 1 on success, -1 on failure
 *
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);

	while (filename == NULL || fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}


	close(fd);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: counter string
 * Return: string
 */


int _strlen(char *s)
{
	int m = 0;

	while (s[m])
			m++;

	return (m);
}
