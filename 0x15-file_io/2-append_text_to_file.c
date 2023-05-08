#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	int r, text_size = 0;
	int bytes_written = write(fd, text_content, text_size);

	if (filename == NULL || fd < 0)
	{
		 return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return 1;
	}
	while (text_content[text_size])
	{
		text_size++;
		r = write(fd, text_content, text_size);
		if (r != text_size)
			return (-1);
	}
	close(fd);
	return (1);
}
