#include "main.h"

/**
 * print_numbers - prints num from 0-9
 * Return: 0
 */

void print_numbers(void)
{
	int num = '0';

	while (num < '10')
		_putchar(num);
		num++;

	_putchar('\n');
}
