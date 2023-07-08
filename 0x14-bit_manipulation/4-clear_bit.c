#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: first arg, number
 * @index: second arg, index
 * Return: On success 1, on error -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maximumBit;
	unsigned long int mask = 1;

	maximumBit = (sizeof(unsigned long int) * 8);

	if (index > maximumBit)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
