#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: address of linked list
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	num = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (num);
}
