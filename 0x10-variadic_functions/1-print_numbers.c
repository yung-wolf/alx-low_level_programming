#include <stdarg.h>

/**
 * print_numbers - prints num w/ separator (if != NULL)
 * @separator: string arg
 * @n: num of optional args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	if (n == NULL)
		exit(98);

	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(nums);
}
