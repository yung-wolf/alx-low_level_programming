#include "main.h"
/**
 * _strncpy - copies n-element of strings
 * including null byte to buffer at dest
 * @dest: dest buffer
 * @src: string argument
 * @n: int arg
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (*src != '\0')
	{
		if (len < n)
			dest[len] = *src;
		src++;
		len++;
	}
	for ( ; len < n; len++)
		dest[len] = '\0';

	return (dest);
}
