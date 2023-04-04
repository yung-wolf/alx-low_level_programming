#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;

	while (ptr != NULL)
	{
		free(ptr->n);
		free(ptr);
		ptr = ptr->next;
	}
	*head = NULL;
}
