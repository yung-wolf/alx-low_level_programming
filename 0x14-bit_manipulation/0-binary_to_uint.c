#include "main.h"

/**
 * _strlen - returns the num of a string
 * @str: string
 * Return: num of str or 0 if NULL
 */
int _strlen(char *str)
{
	int counter = 0;

	if (str == NULL)
		return (0);

	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}
/**
 * binary_to_unit - converts a binary num to unsigned int
 * @b: holds a char of binary nums
 * Return: converted num, 0 if *b holds one or more char not 0 or 1
 */
unsigned int binary_to_unit(const char *b)
{
	int decimal = 0, i = 0, j = 0;
	int len = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	while (j <= len)
	{
		int num;
		char digit = binary[len];

		num = digit - 48;

		if (num <= 1)
			decimal += num << i;
		else
			return (0);
		len--;
		i++;
	}
	return (decimal);
}
