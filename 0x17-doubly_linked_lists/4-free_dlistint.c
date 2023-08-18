#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
        {
		dlistint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
