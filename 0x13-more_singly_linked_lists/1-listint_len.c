#include "lists.h"

/**
 * listint_len - returns number of elements in a listint_t list
 * @h: linked list
 * Return: number of elements of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
