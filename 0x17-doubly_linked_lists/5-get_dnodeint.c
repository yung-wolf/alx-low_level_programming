#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of node list
 * @index: index of unsigned int
 * Return: nth node of dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idxOfNodes = 0;

	while (head != NULL)
	{
		if (index == idxOfNodes)
			return head;
		head = head->next;
		idxOfNodes ++;
	}

	return (NULL);
}
