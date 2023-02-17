#include <stdio.h>

/**
 * main - print numbers from 0-9
 * Return: 0 if successful
 */

int main(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
