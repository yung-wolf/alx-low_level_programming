#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns pointer to allocated memory
 * @b: uns int arg
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
