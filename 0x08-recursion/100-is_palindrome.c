#include "main.h"

/**
 * compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index arg starting from right of string
 * Return: 1 if palindrome, 0 if otherwise
 */

int compare(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - get length of string
 * @s: string arg
 * Return: len
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (_strlen(s + 1)));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string arg
 * Return: 1 if palindrome, 0 if other
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
