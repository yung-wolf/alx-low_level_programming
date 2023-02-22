#include "main.h"

/**
 * print_last_digit - Prints last digit of num
 * @x: int argument
 * Return: int
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		_putchar('0' + -(x % 10));
		return (-(x % 10));
	}
	else
	{
		_putchar('0' + (x % 10));
		return (n % 10);
	}

}
