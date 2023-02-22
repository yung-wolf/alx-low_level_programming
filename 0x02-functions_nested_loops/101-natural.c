#include <stdio.h>

/**
 * main - print the sum of multiples of 3 and 5 under 1024
 * Return: 0 if seccessful
 */

int main(void)
{
	int stop = 1024;
	int key1 = 3;
	int key2 = 5;
	int sum = 0;
	int num;

	for (num = 1; num < stop; num++)
	{
		if (num % key1 == 0 || num % key2 == 0)
			sum += num;
	}
	printf("%i\n", sum);

	return (0);
}
