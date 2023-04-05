#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: linked list
 * @index: index or n
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (count < index && head != NULL)
	{
		count++;
		head = head->next;
	}

	if (count != index)
		return (NULL);

	return (head);
}
