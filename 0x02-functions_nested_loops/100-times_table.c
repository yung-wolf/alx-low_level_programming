#include "main.h"

/**
 * print_times_table - print times table of nums between 0 - 15
 * @n: int argument... set limit on table
 * Return: nothing
 */

void print_times_table(int n)
{
	int product;
	int row;
	int column;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (column * row);
				if (column == 0)
					_putchar(product + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
					_putchar(((product / 100) % 10) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
