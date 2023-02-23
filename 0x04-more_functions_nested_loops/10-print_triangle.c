#include "main.h"

/**
 * print_triangle - prints a triangle 'n' times
 * if n = 0, prints new line
 * @size: int argument (size of triangle)
 */

void print_triangle(int size)
{
	int counter, space, row;

	if (size > 1)
	{
		for (counter = 1; counter <= size; counter++)
		{
			for (space = size; space >= counter; space--)
				_putchar(' ');
			for (row = 1; row <= counter; row++)
				_putchar('#');
			_putchar('\n');
			row = 1;
		}
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
