#include "main.h"

/**
 * _strlen - returns the len of string
 * @s: string argument
 * Return: len of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;

	}

	return (len);
}

/**
 * _strcpy - copies the string pointed by 'src' including null byte (\0)
 * to buffer pointed by dest
 * @dest: dest buffer
 * @src: string argument
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, max;

	max = _strlen(src);
	len = 0;

	while (*src != '\0')
	{
		if (len < max)
			dest[len] = *src;
		src++;
		len++;
	}
	dest[len] = *src;

	return (dest);
}
