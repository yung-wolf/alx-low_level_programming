#include "main.h"

/**
 * set_bit - set value of a bit to 1 at given index
 * @n: number
 * @index: index
 * Return: 1 if successful, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int var = 1 << index;

	return (*n |= var);
}
