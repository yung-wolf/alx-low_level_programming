#include "main.h"

/**
 * _strcat - appends scr-string to dest-string
 * @dest: string argument
 * @src: string argument
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (*dest != 0)
	{
		dest++;
		len++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		len++;
		dest++;
	}

	return (dest - len);
}
