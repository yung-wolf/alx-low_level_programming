#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: ptr of head to node list
 * @idx: index of unsigned int
 * @n: int data
 * Return: address of new node in dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int idxOfNodes;
	dlistint_t *hold, *ptr = *h;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;
	idxOfNodes = 0;

	if (idx > idxOfNodes || idx < 0)
		return (NULL);

	while (ptr != NULL)
	{
		if (idx - 1 == idxOfNodes)
		{
			tmp->next = ptr->next;
			ptr->next = tmp;
			tmp->prev = ptr;
			hold = tmp->next;
			hold->prev = tmp;

			return (tmp);
		}
		ptr = ptr->next;
		idxOfNodes ++;
	}
	return (NULL);
}
