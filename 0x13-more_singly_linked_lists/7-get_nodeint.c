#include "lists.h"

/**
 * list_len - gets number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const listint_t *h)
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

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: linked list
 * @index: index or n
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	size_t limit = listint_len(head);

	if (head == NULL)
		return (NULL);
	if ((size_t)index > limit)
		return (NULL);

	while (count < index)
	{
		count++;
		head = head->next;
	}

	return (head);
}
