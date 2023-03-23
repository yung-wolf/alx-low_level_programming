#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string w/ separator (if != NULL)
 * @separator: string arg
 * @n: num of optional args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *word;

	if (n == NULL)
		exit(98);

	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(strings, char *);

		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
