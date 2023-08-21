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
	int a = 0;

	while (*(s1 + a) == *(s2 + a) && *(s1 + a))
		a++;
	if (*(s2 + a))
		return (*(s1 + a) - *(s2 + a));
	else
		return (0);
}
