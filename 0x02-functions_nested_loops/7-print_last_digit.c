#include "main.h"

/**
 * print_last_digit - Prints last digit of num
 * @x: int argument
 * Return: int
 */

int print_last_digit(int x)
{
	if (x < 0)
		x *= -1;

	_putchar('0' + (x % 10));

	return (n % 10);
}
