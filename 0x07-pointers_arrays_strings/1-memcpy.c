#include "main.h"

/**
 * _memcpy - copies 'n' byte of memory from 'src' to memory area 'dest'
 * @dest: pointer / array char type arg 1... destination
 * @src: pointer / array char type arg 2 ... source
 * @n: num of elements to copy / int type arg
 * Return: pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int memSize = n;
	int i;

	for (i = 0; i < memSize; i++)
		dest[i] = src[i];

	return (dest);
}
