#include "main.h"
/**
 * print_alphabet_x10 - prints 10 rows of alphabets in lowercase
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int count = 10;

	while (count > 0)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		count--;
		_putchar('\n');
	}
}
