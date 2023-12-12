#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value in array on success, -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, m, i;
	int right = (int) size - 1;

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
	size_t bound, new_b, new_size;
	int i;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		bound *= 2;
	}

	/* create new array with low bound as first element */
	new_b = bound / 2, i = 0;
	new_size = size - new_b;
	int new_arr[new_size];

	while (new_b <= size)
	{
		new_arr[i] = array[new_b];
		i++;
		new_b++;
	}

	return (binary_search(new_arr, new_size, value));
}
