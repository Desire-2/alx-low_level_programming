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
	int length = 0, fd = open(filename, O_WRONLY | O_APPEND);

	while (filename == NULL || fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		if (write(fd, text_content, length) != length)
			return (-1);
	}

	close(fd);
	return (1);

}
