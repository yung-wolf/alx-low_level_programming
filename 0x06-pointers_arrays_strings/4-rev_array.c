#include "main.h"

/**
 * reverse_array - reverses the contents of an array of ints
 * @a: array arg
 * @n: num of elements in array variable
 */

void reverse_array(int *a, int n)
{
	int hold[n];
	int i;

	for (i = 0; i < n; i++)
		a++;
	for (i = 0; i < n; i++)
	{
		a--;
		hold[i] = *a;
	}
	for (i = 0; i < n; i++)
	{
		*a = hold[i];
		a++;
	}
	a - n;
}
