#include "main.h"

/**
 * print_times_table - print times table of nums between 0 - 15
 * @n: int argument... set limit on table
 * Return: nothing
 */

void print_times_table(int n)
{
	int times;
	int row;
	int vert;

	if (n < 0 || n > 15)
		;
	else
	{

		for (row = 0; row < n + 1; row++)
		{
			for (vert = 0; vert < n + 1; vert++)
			{
				times = (row * vert);

				if (vert == 0)
				{
					_putchar('0' + times);
				}
				else if (times < n + 1)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + times);
				}
				else if (times > n)
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
}
