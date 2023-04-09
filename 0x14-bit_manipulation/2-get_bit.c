#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: Value at bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	return ((n & (1 << index)) ? 1 : 0);
}
