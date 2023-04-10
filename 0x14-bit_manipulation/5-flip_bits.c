#include "main.h"

/**
 * flip_bits- returns number of bits to flip between two nums
 * @n: first num
 * @m: second num
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int tmp = n ^ m;

	while (tmp != 0)
	{
		if (tmp & 1)
			count++;
		tmp = tmp >> 1;
	}
	return (count);
}
