#include <stdio.h>

/**
 * print_dlistint - prints all elements
 * @h: head of node
 * Return: number of elements in node
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* ptr to hold head var*/
	size_t numOfNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numOfNodes++;
	}

	return (numOfNodes);
}
