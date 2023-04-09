#include "main.h"

/**
 * print_binary - print binary representation of num
 * @n: decimal num
 */
void print_binary(unsigned long int n)
{
	int result, bi = 0;

	if (num < 1)
		;
	else
	{
		result = num >> 1;
		bi = num - (result * 2);
		num = result;
		print_binary(num);
		_putchar(bi + '0');
	}
}
