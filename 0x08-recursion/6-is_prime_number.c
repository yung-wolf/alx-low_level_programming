#include "main.h"

/**
 * getPrime - find prime num
 * @n: 1st num arg to check if prime
 * @x: num arg
 * Return: 0 for other 1 for prime
 */

int getPrime(int n, int x)
{
	if (n % x == 0 && x > 1)
		return (0);
	if (x == 1)
		return (1);
	return (getPrime(n, x - 1));
}

/**
 * is_prime_number - check for prime num
 * @n: 1st num arg
 * Return: 0 for other 1 for prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getPrime(n, n - 1));
}
