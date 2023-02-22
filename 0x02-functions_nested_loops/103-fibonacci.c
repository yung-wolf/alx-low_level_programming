#include <stdio.h>

/**
 * main - print the sum of even terms in fibonacci seq < 4,000,000
 * Return: 0 if successful
 */

int main(void)
{
	long stop = 4000000;
	long oldNum = 0;
	long newNum = 1;
	long sum = 0;
	int num;
	long totalSum = 0;

	for (num = 1; sum <= stop; num++)
	{
		sum = oldNum + newNum;
		oldNum = newNum;
		newNum = sum;

		if ((sum % 2) == 0)
			totalSum += sum;

	}
	printf("%li", totalSum);
	printf("\n");

	return (0);
}
