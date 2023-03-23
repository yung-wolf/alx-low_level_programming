#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all func parameters
 * @n: num of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, x, sum = 0;

	if (n == 0)
		return (0);

	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		sum += x;
	}
	va_end(nums);
	return (sum);
}
