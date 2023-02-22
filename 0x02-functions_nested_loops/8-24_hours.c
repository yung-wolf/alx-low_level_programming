#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * from 00:00 - 23:59
 * Return: nothing
 */

void jack_bauer(void)
{
	int min = 0;
	int hr = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(';');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			min++;
		}
		min = 0;
		hr++;
	}
}
