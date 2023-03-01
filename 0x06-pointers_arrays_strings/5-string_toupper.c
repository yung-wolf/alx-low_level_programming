#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @str: string arg
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
		len++;
	}
	str -= len;

	return (str);
}
