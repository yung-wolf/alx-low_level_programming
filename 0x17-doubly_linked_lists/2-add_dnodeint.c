#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds new node at start of dlistint_t list
 * @h: head of node
 * @n: data of type int
 * Return: number of elements in node
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return NULL;

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (*h == NULL)
	{
		*h = tmp;
		return (*h);
	}
	tmp->next = *h;
	ptr->prev = tmp;

	/*set head ptr to new 1st node*/
	*h = tmp;

	return (*h);
}
