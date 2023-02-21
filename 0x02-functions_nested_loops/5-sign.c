#include "main.h"

/**
 * print_sign - Returns 1,0,-1 for positve num, zero,
 * and negative num respectively w/ sign
 * @n: type int character to test
 * Return: 0,1,-1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
