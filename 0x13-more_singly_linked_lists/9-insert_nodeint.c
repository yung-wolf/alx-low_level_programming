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

/**
 * insert_nodeint_at_index - inserts a node at index `n`
 * @head: linked list
 * @idx: index arg
 * @n: integer value
 * Return: address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t limit; /*holds upper limit of element in linked list*/

	if (!(n))
		return (NULL);
	if (*head == NULL)
		return (NULL);

	limit = listint_len(*head);

	if ((size_t)idx > limit)
		return (NULL);

	listint_t *ptr = *head;
	listint_t *tmp = malloc(sizeof(listint_t));

	tmp->n = n;
	tmp->next = NULL;

	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	tmp->next = ptr->next;
	ptr->next = tmp;

	return (tmp);
}
