#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies contents from one file to another
 * @argc: number of args
 * @argv: name of arg
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	size_t n_read, n_wrote;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((n_read = read(file_from, buffer, BUFFER_SIZE)) != 0)
	{
		n_wrote = write(file_to, buffer, n_read);
		if (n_wrote != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((int)n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close(file_from);
	close(file_to);
	return (0);
}
