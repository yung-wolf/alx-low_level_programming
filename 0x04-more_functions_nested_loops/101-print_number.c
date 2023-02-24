#include "main.h"

/**
 * print_number - prints an int.
 * @n: int argument
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double t_bag = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (t_bag <= positive)
			t_bag *= 10;
		tens = t_bag / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens = tens / 10;
		}
	}
}
