#include <stdio.h>

/**
 * main - print the fibonacci seq to the 50th term
 * Return: 0 if successful
 */

int main(void)
{
	long stop = 12586269025;
	long oldNum = 1;
	long newNum = 1;
	long sum = 0;
	int num;

	printf("%i", 1);

	for (num = 1; sum <= stop; num++)
	{
		sum = oldNum + newNum;
		oldNum = newNum;
		newNum = sum;

		printf(", %li", sum);
	}
	printf("\n");

	return (0);
}
