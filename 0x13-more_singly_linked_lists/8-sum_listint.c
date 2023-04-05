#include "lists.h"

/**
 * sum_listint - sums all the `n` elements of a listint_t list
 * @head: linked list
 * Return: sum of all data(n) of linked list
 */
int sum_listint(const listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
