#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
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
/*
			else if (i == right)
				printf(" %d", array[i]);
*/
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
			return m;
	}

	return (-1);
}
