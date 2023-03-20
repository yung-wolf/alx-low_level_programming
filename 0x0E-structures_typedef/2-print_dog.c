#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struck dog
 * @d: struck dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %d\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Owner: %s\n", d->owner);
}
