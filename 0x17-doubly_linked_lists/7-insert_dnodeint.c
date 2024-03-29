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
	unsigned int idxOfNodes, numOfNodes;
	dlistint_t *dummy_h = *h;
	dlistint_t *tmp = *h;
	dlistint_t *tmp2 = NULL;
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;
	idxOfNodes = 0;
	numOfNodes = 0;

	/* check if idx out of range */
	while (dummy_h != NULL)
	{
		dummy_h = dummy_h->next;
		numOfNodes++;
	}

	if (idx >= numOfNodes || idx < 0)
		return (NULL);

	while (idxOfNodes != idx - 1)
	{
		tmp = tmp->next;
		idxOfNodes++;
	}

	tmp2 = tmp->next;
	tmp->next = ptr;
	tmp2->prev = ptr;
	ptr->next = tmp2;
	ptr->prev = tmp;

	return (*h);
}
