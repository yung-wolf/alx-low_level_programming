#include "main.h"

/**
 * _strcmp - Compares two strings. Returns less than, equal to, more than 0 if
 * s1 is respectively less than, equal to, more than s2
 * @s1: string arg
 * @s2: string arg
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int result;
	int len_s1 = 0;
	int len_s2 = 0;

	while (*s1 != '\0')
	{
		len_s1++;
		s1++;
	}
	while (*s2 != '\0')
	{
		len_s2++;
		s2++;
	}
	if (len_s1 < len_s2)
		result = -1;
	else if (len_s1 == len_s2)
		result = 0;
	else
		result = 1;

	return (result);
}
