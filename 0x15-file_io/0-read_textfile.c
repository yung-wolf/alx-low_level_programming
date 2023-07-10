#include "main.h"

/**
 * read_textfile - read a text file to STDOUT
 * @filename: name of file to read from
 * @letters: maximum number of characters to read
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t n_read, n_wrote;

	if (filename == NULL)
		return (0);

	/* Open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* Checks if file open successfully */
		return (0);

	/* Allocate memory space to buffer */
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	/* Read file */
	n_read = read(fd, buffer, letters);
	if ((int)n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write to STDOUT */
	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if ((int)n_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);
}
