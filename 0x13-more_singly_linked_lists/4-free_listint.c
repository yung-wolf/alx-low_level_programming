#include "list.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
