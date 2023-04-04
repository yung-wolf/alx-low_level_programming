#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
