#include "lists.h"

/**
 * dlistint_len - get len of nodes
 * @h: head of node
 * Return: number of elements in node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numOfNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numOfNodes++;
	}

	return (numOfNodes);
}
