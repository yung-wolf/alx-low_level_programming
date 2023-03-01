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

	while (*dest != '\0')
	{
		dest++;
	}
	for (len = 0; len < n; len++)
	{
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}

	return (dest);
}
