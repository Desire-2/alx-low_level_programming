#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename:name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *	If the file does not exist the user lacks write permissions - -1.
 *	Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r, text_size = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (text_size = 0; text_content[text_size];)
		text_size++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	r = write(fd, text_content, text_size);

	if (fd == -1 || r == -1)
	return (-1);

	close(fd);

	return (1);
}

