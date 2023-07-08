#include "main.h"

/**
 * flip_bits - gets number of bits to move from n to m
 * @n: first arg, number
 * @m: second arg, number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int xor_answer = n ^ m;

	while (xor_answer != 0)
	{
		xor_answer = xor_answer & (xor_answer - 1);
		i++;
	}

	return (i);
}
