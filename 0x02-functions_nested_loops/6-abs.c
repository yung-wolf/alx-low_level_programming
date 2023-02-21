#include "main.h"

/**
 * _abs - returns the absolute value
 * @z: int passed
 * Return: int
 */

int _abs(int z)
{
	if (z > 0)
	{
		return (z);
	}
	else if (z < 0)
	{
		return (-z);
	}
	return (0);
}
