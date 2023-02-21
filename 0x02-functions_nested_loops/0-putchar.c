#include "main.h"

/**
 * main - print '_putchar' using _putchar followed by new line
 * Return: on success for main return 0.
 */

int main(void)
{
	int x = 0;

	while (x < 8)
	{
		char name[] = "_putchar";

		_putchar(name[x]);
		x++;
	}
	_putchar('\n');

	return (0);
}
