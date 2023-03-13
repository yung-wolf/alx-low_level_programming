#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if successful, 1 if error
 */

int main (int argc, char** argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num = atoi(argv[1]);
	int change = 0;

	if (num < 0)
		printf("0\n");
	
	while (num > 0)
	{
		if (num == 1)
		{
			change += num; //1cent
			num -= 1;
		}
		if (num > 1 && num < 5)
		{
			num -= 2; //2cents
			change += 1;
		}
		if (num >= 5 && num < 10)
		{
			num -= 5; //5cents
			change += 1;
		}
		if (num >= 10 && num < 25)
		{
			num -= 10; //10cents
			change += 1;
		}
		if (num >= 25)
		{
			num -= 25; //25cents
			change += 1;
		}
	}
	printf ("%d\n", change);

	return (0);
}
