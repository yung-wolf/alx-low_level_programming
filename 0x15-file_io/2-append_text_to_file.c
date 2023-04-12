#include "main.h"

/**
 * append_text_to_file - Appends text to end of file
 * @filename: name of file
 * @text_content: word to add to file end
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, i = 0;
	ssize_t num_write;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		;
	else
	{
		while (text_content[i] != '\0')
		{
			len++;
			i++;
		}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	num_write = write(fd, text_content, len);
	if (num_write == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
