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
 * jump_search - searches for a value in a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value in array, or -1 on failure
 */

int jump_search(int *array, size_t size, int value)
{
	int b = (int) sqrt(size), a = 0, check = 0, i;
	int c = b;

	while (array[minm(b, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);

		a = b;
		b = b + (int) sqrt(size);

		if (a >= (int) size)
		{
			printf("Value found between indexes [%d] and [%d]\n", a - c, b - c);
		printf("Value checked array[%d] = [%d]\n", a - c, array[a - c]);
			return (-1);
		}
	}

	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);

		a = a + 1;
		b = b + (int) sqrt(size);

		if (a == minm(b, size))
			return (-1);
	}

	/* Linear search algorithm */
	i = a - (int) sqrt(size);
	
	if (i < 0)
		i = 0;

	/* push `b` back to correct position */
	printf("Value found between indexes [%d] and [%d]\n", i, b - c);

	for (; i <= a; i++)
	{
		if (check == 0)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			check = 1;
			return (i);
		}
	}

	if (array[a] == value)
		return (a);

	return (-1);
}
