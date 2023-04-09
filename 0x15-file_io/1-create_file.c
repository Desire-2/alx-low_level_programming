#include "main.h"



/**
 *  create_file -  create_file.
 *  @filename: Name of file to create
 *  @text_content: NULL to determinate string.
 *  Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL || fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
