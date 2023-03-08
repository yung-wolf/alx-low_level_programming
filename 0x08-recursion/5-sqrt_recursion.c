#include "main.h"

/**
 * getRoot - find the square root of num
 * @n: num arg
 * @root: possible root arg
 * Return: int ... root if natural square / -1 if otherwise
 */

int getRoot(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	return (getRoot(n, root + 1));
}

/**
 * _sqrt_recursion - get square root
 * @x: num arg / find root of num
 * Return: int
 */

int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (getRoot(x, 0));
}
