#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of dlistint_t list
 * @h: address of head ptr to first node
 * @n: data of type int
 * Return: number of elements in node
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (*h == NULL)
	{
		*h = tmp;
		return (*h);
	}

	/* add node to end of list */
	if (ptr->next == NULL)
	{
		tmp->prev = ptr;
		ptr->next = tmp;
	}
	else
	{
	/*traverse list till end node*/
		while (ptr->next != NULL)
			ptr = ptr->next;
		tmp->prev = ptr;
		ptr->next = tmp;
	}

	return (*h);
}
