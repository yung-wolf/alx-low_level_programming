#include <stddef.h>
#include "main.h"

/**
 * binary_to_unit - converts a binary num to unsigned int
 * @b: holds a char of binary nums
 * Return: converted num, 0 if *b holds one or more char not 0 or 1
 */
unsigned int binary_to_unit(const char *b)
{
	int decimal = 0, i = 0, j = 0, len = 0;

	while (*b)
		len++;
	len -= 1;

	if (b == NULL)
		return (decimal);

	while (j <= len)
	{
		int num;
		char digit = b[len];

		num = digit - 48;

		if (num <= 1)
			decimal += num << i;
		else
			return (0);
		len--;
		i++;
	}
	return (decimal);
}
