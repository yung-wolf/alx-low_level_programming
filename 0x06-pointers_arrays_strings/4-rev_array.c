#include "main.h"

/**
 * reverse_array - reverses the contents of an array of ints
 * @a: array arg
 * @n: num of elements in array variable
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int hold;
	int stop = n - 1;

	while (i < stop)
	{
		hold = *(a + i);
		*(a + i) = *(a + stop);
		*(a + stop) = hold;
		i++;
		stop--;
	}

}
