#include "main.h"

/**
 * _isupper - prints 1 for uppercase and 0 otherwise
 * @c: int argument (letter)
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
