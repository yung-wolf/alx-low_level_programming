#include <stdio.h>
#include "main.h"

/**
 * main - print name of programme
 * @argc: arg counter
 * @argv: arg vector / pointer to array of pointers
 * Return: 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
