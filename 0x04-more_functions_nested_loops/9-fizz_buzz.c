#include <stdio.h>

/**
 * main - print nums from 1 - 100
 * if num is multiple of 3 print Fizz
 * if num is multiple of 5 print Buzz
 * if num is multiple of 3&5 print FizzBuzz
 * Return:0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%i ", num);
	}
	printf("\n");

	return (0);
}
