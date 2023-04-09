#include <stddef.h>
#include "main.h"

/**
 * binary_to_unit - converts a binary num to unsigned int
 * @b: holds a char of binary nums
 * Return: converted num, 0 if *b holds one or more char not 0 or 1
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int decimal = 0;
	int i = 0, j = 0, len = 0;
	int num;

	if (b == NULL)
		return (decimal);

	while (b[len] != '\0')
		len++;
	len -= 1;

	while (j <= len)
	{
		char digit = b[len];

		num = digit - 48;

		if (num <= 1)
			decimal += num << i;
		else
			return (decimal);
		len--;
		i++;
	}
	return (decimal);
}
