#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: string argument
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
