#include "search_algos.h"

/**
 * minm - gets the minimum value between two numbers
 * @a: num1
 * @b: num2
 * Return: the minimum value
 */
int minm(int a, int b)
{
	int x, y;

	if (a < 0)
		x = a * -1;
	else
		x = a;

	if (b < 0)
		y = b * -1;
	else
		y = b;

	if ((y - x) > 0)
		return (a);

	return (b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value in array, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	int b = (int) sqrt(size), a = 0, i, c = b;

	if (array == NULL)
		return (-1);
	while (array[minm(b, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a = b;
		if (a >= (int) size)
		{
			printf("Value found between indexes [%d] and [%d]\n", a - c, b);
			return (-1);
		}
		b = b + (int) sqrt(size);
	}
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (a == minm(b, size))
			return (-1);
		a = a + 1;
	}
	i = a - c;
	if (i < 0)
		i = 0;
	else if (i > 0 && i < c)
		i = c;
	printf("Value found between indexes [%d] and [%d]\n", i, i + c);
	for (; i <= a; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	if (array[a] == value)
		return (a);
	return (-1);
}
