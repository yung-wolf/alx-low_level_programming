#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: words to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, i = 0;
	int num_write;

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

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	num_write = write(fd, text_content, len);
	if (num_write == -1)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
