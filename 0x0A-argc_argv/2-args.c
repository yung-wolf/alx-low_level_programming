#include <stdio.h>
#include "main.h"

/**
 * main - print name of programme
 * @argc: arg counter
 * @argv: arg vector / pointer to array of pointers
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
