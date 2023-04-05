#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: address of linked list
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	listint_t *tmp = *head;
	listint_t *ptr = *head;

	*head = ptr->next;

	return (tmp->n);
}
