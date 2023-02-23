#include "main.h"

/**
 * print_numbers - prints num from 0-9
 * Return: nothing
 */

void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
		_putchar(num);
		num++;

	_putchar('\n');
}
