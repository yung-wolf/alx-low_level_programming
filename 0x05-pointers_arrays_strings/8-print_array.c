#include "main.h"
#include <stdio.h>

/**
 * print_array - print 'n' element of a string ff by new line
 * where n = number of elements to be printed
 * @a: int argument. Array size.
 * @n: num of element to print
 */

void print_array(int *a, int n)
{
	int len, max;

	max = n;
	len = 0;

	while (*a != '\0')
	{
		if (len < (max - 1))
			printf("%i, ", *str);
		else if (len == (max - 1))
			printf("%i", *str);
		str++;
		len++;
	}
	_putchar('\n');

}
