#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Entry point*/
/* more headers goes there */
/*Return: 0 if successful*/
/* betty style doc for function main goes there */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes there */
	/* If confirms if number entered is positive ,negative, or zero*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
