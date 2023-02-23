#include "main.h"

/**
 * print_square - prints a square 'n' times
 * if size = 0, prints new line
 * @size: int argument (num of squares)
 */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (column = 1; column <= size; counter++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
			row = 1;
		}
	}
	else
	{
		_putchar('\n');
	}

}
