#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_change - find minimum change possible
 * @num: num to change
 * Return: 0 if successful
 */

int get_change(int num)
{
	int change = 0;

	while (num > 0)
	{
		if (num == 1)
		{
			change += num;
			num -= 1;
		}
		if (num > 1 && num < 5)
		{
			num -= 2;
			change += 1;
		}
		if (num >= 5 && num < 10)
		{
			num -= 5;
			change += 1;
		}
		if (num >= 10 && num < 25)
		{
			num -= 10;
			change += 1;
		}
		if (num >= 25)
		{
			num -= 25;
			change += 1;
		}
	}
	return (change);
}

/**
 * main - check code
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num = atoi(argv[1]);
	int change = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	change = get_change(num);

	printf("%d\n", change);

	return (0);
}
