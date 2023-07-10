#include "main.h"

/**
 * _strlen - gets legnth of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: contents to add at end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_len;
	size_t n_wrote;

	if (!filename)
		return (-1);

	/*open if file already exists*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/*empty text_content*/
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/*Add/write to end of file*/
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
