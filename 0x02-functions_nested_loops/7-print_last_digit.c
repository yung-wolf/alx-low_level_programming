#include "main.h"

/**
 * print_last_digit - Prints last digit of num
 * @x: int argument
 * Return: int
 */

int print_last_digit(int x)
{
	int a;

	if (x < 0)
	{
		int a = -(x % 10);

		_putchar(a + '0');
	}
	else
	{
		_putchar('0' + (x % 10));
		int a = (x % 10);
	}

	return (a);
}
