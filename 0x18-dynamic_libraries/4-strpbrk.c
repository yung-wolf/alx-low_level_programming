#include "main.h"
#define NULL 0

/**
 * _strpbrk - search string for a set of byte
 * @s: char arg
 * @accept: char arg / control
 * Return: pointer to 's' matches one of the bytes in 'accept'
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
