#include "main.h"
/**
 * create_file - creates a file.
 * @filename: file tobe created
 * @text_content: NULL terminated string to write to the file
 * Return: -1 if filename is NULL,
 */
int create_file(const char *filename, char *text_content)
{
	int fl, bytes_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(fl, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fl);
			return (-1);
		}
	}
	close(fl);
	return (1);
}

