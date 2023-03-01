#include "main.h"

/**
 * _strncat - appends 'n' element(s) scr-string to dest-string
 * @dest: string argument
 * @src: string argument
 * @n: num of elements to be appended
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int count = 0;

	while (*dest != 0)
	{
		dest++;
		len++;
	}
	while (count < n)
	{
		*dest = *src;
		src++;
		len++;
		dest++;
		count++;
	}

	return (dest - len);
}
