#include "main.h"

/**
 * print_binary - print binary representation of num
 * @n: decimal num
 */
void print_binary(unsigned long int n)
{
	int result, bi = 0;

	if (n < 1)
		;
	else
	{
		result = n >> 1;
		bi = n - (result * 2);
		n = result;
		print_binary(n);
		_putchar(bi + '0');
	}
}
