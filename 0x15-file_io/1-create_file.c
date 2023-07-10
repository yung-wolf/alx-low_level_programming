#include "main.h"

/**
 * _strlen - gets length of string
 * @s: string
 * Return: returns len of string (s)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * create_file - creates a file w/ read & write permissions
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	/*file descriptor*/
	int fd, text_len;
	size_t n_wrote;

	if (filename == NULL)
		return (-1);

	/*open file*/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/*empty text file*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/*write file*/
	text_len = _strlen(text_content);
	n_wrote = write(fd, text_content, text_len);
	if ((int) n_wrote == -1 || (int)n_wrote != text_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
