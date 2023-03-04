#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: char arg
 * @accept: char arg / control
 * Return: int / num of byte in prefix of 's' made up of bytes in 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int count = 0;

	while (*s != ' ')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				count++;
		}
		s++;
	}
	return (count);
}
