#include "main.h"

/**
 * _memset - fills first 'n' bytes of memory area pointed by 's' with constant
 * byte 'b'
 * @s: pointer / array arg
 * @b: constant byte / char type arg
 * @n: num of memory to access / int type arg
 * Return: pointer to 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}
