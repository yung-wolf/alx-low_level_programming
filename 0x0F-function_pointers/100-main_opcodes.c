#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of main func
 * @argc: num of args
 * @argv: array of args
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, num_bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (char *) main;
	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx\n", *(ptr + i));
	}
	return (0);
}
