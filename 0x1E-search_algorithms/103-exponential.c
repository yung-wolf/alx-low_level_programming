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
 * cust_binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm with a lil twist
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @bound_beg: begining bound value of exponential search
 * @bound_end: ending bound value of exponential search
 * Return: index of value in array on success, -1 on failure
 */

int cust_binary_search(int *array,
int value, size_t bound_beg, size_t bound_end)
{
	int left = bound_beg, m, i;
	int right = (int) bound_end - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		for (i = left; i <= right; i++)
		{
			if (i == left)
				printf("Searching in array: %d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");

		m = (left + right) / 2;
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value, or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%d]\n",
	bound / 2, minm(bound, size - 1));

	return (cust_binary_search(array, value, bound / 2, minm(bound + 1, size)));
}
