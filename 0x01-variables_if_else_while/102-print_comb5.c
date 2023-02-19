#include <stdio.h>
/**
 * main - print pair of two digit nums <00 01 to 98 99>
 * @ 00 99, 01 02, 01 03... 09 99, 10 11, 10 12...
 * Define conditions and run it w/ 'for' and 'while' loops
 * Return: 0 if successful
 */

int main(void)
{
	int d1_tens = 48;
	int d1_ones = 48;
	int tens2 = d1_tens;
	int ones2 = d1_ones + 1;

	for (; d1_tens < 58; d1_tens++)
	{
		for (; d1_ones < 58; d1_ones++)
		{
			for (; tens2 < 58; tens2++)
			{
				while (ones2 < 58)
				{
					putchar(d1_tens);
					putchar(d1_ones);
					putchar(' ');
					putchar(tens2);
					putchar(ones2);
					if ((d1_tens == 57) && (d1_ones == 56)
						&& (ones2 == 57) && (tens2 == 57))
					{
						putchar(' ');
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
						ones2++;
					}
				}
				ones2 = 48;
			}
			tens2 = d1_tens;
			ones2 = d1_ones + 2;
		}
		d1_ones = 48;
		ones2 = d1_ones + 1;
		tens2 = d1_tens + 1;
	}
	return (0);
}
