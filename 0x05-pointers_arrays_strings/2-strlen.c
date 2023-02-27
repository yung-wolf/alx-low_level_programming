#include "main.h"

/**
 * _strlen - returns the len of string
 * @s: string argument
 * Return: len of string
 */

int _strlen(char *s)
{
	size_t len = 0;

	while (*s != '\0')
	{
		s++;
		len++;

	}

	return (len);
}
