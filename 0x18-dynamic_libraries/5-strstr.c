#include "main.h"
#define NULL 0

/**
 * _strstr - finds the first occurence of the substring 'needle'
 * in string 'haystack' the null bytes are not compared
 * @haystack: string arg to search
 * @needle: string arg to find
 * Return: pointer to first occurence of substring, or NULL if no match found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, k;

	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
					k++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
