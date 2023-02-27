#include "main.h"

/**
 * _strlen - Returns the len of string
 * @s: string argument
 * Return: int
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
 * rev_string - reverse a string
 * @s: string argument
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
