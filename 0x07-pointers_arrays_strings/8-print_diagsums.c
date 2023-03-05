#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals in square matrix of ints
 * @a: array arg
 * @size: int arg... size of array
 */

void print_diagsums(int *a, int size)
{
	int check;
	int sum1 = 0;
	int sum2 = 0;
	int column = 0;

	for (check = 0; check < size; check++)
		sum1 += *(a + (check * size + check));
	check--;
	for (; check >= 0; check--)
	{
		sum2 += *(a + (check * size + column));
		column++;
	}
	printf("%d, %d\n", sum1, sum2);
}
