#include "main.h"

/**
 * print_numbers - prints num from 0-9
 * Return: nothing
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');

	_putchar('\n');

}
