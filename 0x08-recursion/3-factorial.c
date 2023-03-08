#include "main.h"

/**
 * factorial - calc factorial of num
 * @n: num to find factorial of
 * Return: factorial of 'n'
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
