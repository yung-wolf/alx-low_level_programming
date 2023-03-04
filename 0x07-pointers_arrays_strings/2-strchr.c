#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string arg
 * @c: character to find
 * Return: pointer to first occurrence of 'c'
 */

char *_strchr(char *s, char c)
{
	char *hold;
	int check = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			if (check == 0)
				hold = s;
			check++;
		}
		s++;
	}
	if (check < 1)
		hold = NULL;

	return (hold);
}
