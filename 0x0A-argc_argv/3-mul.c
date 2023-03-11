#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print name of programme
 * @argc: arg counter
 * @argv: arg vector / pointer to array of pointers
 * Return: 0 if successful, 1 if arg != 2
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1] * atoi(argv[2])));
	return (0);
}
