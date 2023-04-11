#include "main.h"

/**
 * read_textfile - reads a txt file and prints it to POSIX std output
 * @filename: name of file
 * @letters: num of letters it should print
 * Return: Num of letters it can print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);/*filename must point to the file in arg[v]*/
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	num_read = read(fd, buf, letters);
	if (num_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	num_write = write(STDOUT_FILENO, buf, num_read);
	if (num_write == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);

	return (num_read);
}
