#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to copy string in memory
 */

char *_strdup(char *str)
{
	char *copy_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;

	copy_str = malloc(len * sizeof(char));

	if (copy_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(copy_str + i) = *(str + i);
		i++;
	}
	return (copy_str);
}
