#include "main.h"

/**
 * set_bit - set value of a bit to 1 at given index
 * @n: number
 * @index: index
 * Return: 1 if successful, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned int var;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	var = ~(1 << index);
	*n = *n & var;

	return (1);
}
