#include <stdio.h>

/**
 * main - print numbers from 0-9
 * Return: 0 if successful
 */

int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
