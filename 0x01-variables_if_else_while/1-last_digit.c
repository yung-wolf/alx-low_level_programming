#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* int ans holds the last digit of number*/
	/* run an if else if loop to print the correct output */
	int ans;

	ans = n % 10;

	if (ans > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ans);
	} else if (ans < 6 && ans != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ans);
	} else if (ans == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ans);
	}

	return (0);
}
