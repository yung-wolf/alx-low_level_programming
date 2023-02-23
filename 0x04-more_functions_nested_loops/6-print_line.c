#include "main.h"

/**
 * print_line - prints n number of lines
 * if n = 0, prints new line
 * @n: int argument
 * Return: nothing
 */

void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
			_putchar('_');
	}

	_putchar('\n');

}
