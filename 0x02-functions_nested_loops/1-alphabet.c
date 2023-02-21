#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Return: void or nothing
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
