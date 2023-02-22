#include "main.h"

/**
 * times_table - print nine times table
 * Return: nothing
 */

void times_table(void)
{
	int times;
	int row;
	int vert;

	for (row = 0; row < 10; row++)
	{
		for (vert = 0; vert < 10; vert++)
		{
			times = (row * vert);

			if (vert == 0)
			{
				_putchar('0' + product);
			}
			else if (times < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + times);
			}
			else if (times > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
			}
		}
		_putchar('\n');
	}
}
