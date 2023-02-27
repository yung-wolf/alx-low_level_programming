#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string argument
 */

void rev_string(char *s)
{
	int i. len, temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
