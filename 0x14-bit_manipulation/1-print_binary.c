#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that prints the binary of a number
 * @n: decimal number arg
 * Returns: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int copy_of_n = n;
	int len = 0;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}

	while (copy_of_n > 0)
	{
		len++;
		copy_of_n = copy_of_n >> 1;
	}
	len -= 1;

	if (len > 0)
		mask = mask << len;


	while (mask > 0)
	{
		if (n & mask)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');

		mask = mask >> 1;
	}
}
