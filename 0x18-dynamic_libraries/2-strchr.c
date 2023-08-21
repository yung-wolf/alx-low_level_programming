#include "main.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 * @s: string arg
 * @c: character to find
 * Return: pointer to first occurrence of 'c'
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
