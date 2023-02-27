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
 * puts_half - print half of a string ff by new line
 * if string is odd, print last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: string argument
 */

void puts_half(char *str)
{
	int len, max;

	max = _strlen(str);
	len = 0;

	if (max % 2 == 0)
	{
		while (*str != '\0')
		{
			if (len >= (max / 2))
				_putchar(*str);
			str++;
			len++;
		}
	}
	else
	{
		int limit = (max - 1) / 2;

		limit++;

		while (*str != '\0')
		{
			if (len >= limit)
				_putchar(*str);
			str++;
			len++;
		}
	}
	_putchar('\n');

}
