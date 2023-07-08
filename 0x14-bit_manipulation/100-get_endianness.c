#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *c = (unsigned char *)&n;

	if (*c)
		return (1);
	else
		return (0);
}
