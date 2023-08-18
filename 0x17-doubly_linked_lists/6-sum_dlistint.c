#include "lists.h"

/**
 * sum_dlistint - get sum of all data(n) in a dlistint_t linked list
 * @head: head of node
 * Return: sum of elements in list
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	/* empty list */
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
