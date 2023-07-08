#include "main.h"

/**
 * get_bit - gets the value of a bit at given index
 * @n: first arg, number
 * @index: second arg, index
 * Return: bit at index on success, -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int maximumBit;
	int bit;

	maximumBit = (sizeof(unsigned long int) * 8);

	if (index > maximumBit)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
