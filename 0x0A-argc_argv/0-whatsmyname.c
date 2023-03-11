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
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
