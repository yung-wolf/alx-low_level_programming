#include "search_algos.h"

/**
 * linear_search - Implement linear search alogrithm to find value
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: target value
 * Return: the index of value in array
 */

int linear_search(int *array, size_t size, int value)
{
	/* declare index and counter i . check == 1 if value is found*/
	int i, check = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		if (check == 0)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			check = 1;
			return (i);
		}
	}

	return (-1);
}
