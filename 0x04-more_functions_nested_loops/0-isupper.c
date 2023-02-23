#include "main"

/**
 * _isupper - prints 1 for uppercase and 0 otherwise
 * @c: int argument (letter)
 * Return: 0
 */

int _isupper(int c)
{
	int letter;

	if (letter >= 'A' && letter <= 'Z')
		_putchar(1);
	else
		_putchar(0);

	return (0);
}
