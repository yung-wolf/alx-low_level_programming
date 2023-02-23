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
			for (space = 1; space <= (size - counter); space++)
				_putchar(' ');
			for (row = 1; row <= counter; row++)
				_putchar('#');
			_putchar('\n');
			row = 1;
		}
	}
	else
	{
		_putchar('\n');
	}

}
