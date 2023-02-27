#include "main.h"

/**
 * puts2 - from first char print every other char
 * @str: string argumnet
 */

void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		len++;
	}
	_putchar('\n');
}
