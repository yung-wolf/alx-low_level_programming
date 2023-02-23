#include "main"

/**
 * _isupper - prints 1 for uppercase and 0 otherwise
 * @c: int argument (letter)
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
