#include "main.h"

/**
 * print_times_table - print times table of nums between 0 - 15
 * @n: int argument... set limit on table
 * Return: nothing
 */

void print_times_table(int n)
{
	int product = 0;
	int count = 0;
	int limit = 0;

	if (n >= 0 && n <= 15)
	{
		while (count <= n)
		{
			while (limit <= n)
			{
				product = (count * limit);

				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
					_putchar(',');
				}
				else if (product > 9 && product < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
					_putchar(',');
				}
				else if (product >= 100)
				{
					_putchar(' ');
					_putchar(((product / 100) % 10) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
					_putchar(',');
				}
				limit++;
			}
			limit = 0;
			count++;
			_putchar('\n');
		}
	}
}
