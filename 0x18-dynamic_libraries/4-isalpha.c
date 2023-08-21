#include "main.h"

/**
 * _isalpha - Prints 1 for letters and 0 for other characters
 * @c: type int character to test
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
