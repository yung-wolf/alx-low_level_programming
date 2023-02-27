#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: first int argument
 * @b: second int argument
 */

void swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}
