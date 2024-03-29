#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: head of linked list
 * @n: integer value to add to node
 * Return: address of new element or NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!(n))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
