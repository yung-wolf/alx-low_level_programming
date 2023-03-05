#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array / pointer arg
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; a[x][y] != '\0' && y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
