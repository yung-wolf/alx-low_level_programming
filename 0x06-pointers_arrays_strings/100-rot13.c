#include "main.h"

/**
 * rot13 - encode string using rot13
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int a[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		     'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		     'W', 'X', 'Y', 'Z'};
	int b[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		     'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		     'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		     'J', 'K', 'L', 'M'};

	int x, y;

	for (y = 0; s[y] != '\0'; y++)
	{
		x = 0;
		while (a[x] != '\0' && s[y] != a[x])
			x++;
		if (s[y] == a[x])
			s[y] = b[x];
	}
	return (s);
}
