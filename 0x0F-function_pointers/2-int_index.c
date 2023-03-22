#include <stdlib.h>

/**
 * int_index - function that searches for an int
 * @array: array arg
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first occurance of matched value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x != 0)
				return (i);
		}
	}

	return (-1);
}
