#include "main.h"

/**
 * leet - encrypt string into 1337 leet
 * @s: string arg
 * Return: string
 */

char *leet(char *s)
{
	int x[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int y[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int a, b;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (a = 0; x[a] != '\0'; a++)
		{
			if (s[b] == x[a])
				s[b] = y[a];
		}
	}
	return (s);
}
