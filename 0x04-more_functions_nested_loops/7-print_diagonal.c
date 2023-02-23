#include "main.h"

/**
 * print_diagonal - prints a diagonal line 'n' times
 * if n = 0, prints new line
 * @n: int argument (num of diagonal lines)
 */

void print_diagonal(int n)
{
	int counter;
	int space;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			for (space = 1; space < counter; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
