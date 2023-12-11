#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number os elements in array
 * @value: value to search for
 * Return: index of value, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (array[pos] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else if (value < array[pos])
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
	}

	if (value == array[low])
	{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		return (low);
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
