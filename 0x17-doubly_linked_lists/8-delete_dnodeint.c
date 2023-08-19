#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index <index> in a dlistint_t list
 * @head: address of head ptr to 1st node
 * @index: index of int type
 *Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int numOfNodes, pos;
	dlistint_t *tmp, *h, *p_node, *n_node;
	
	numOfNodes = 0, pos = 0;
	tmp = *head, h = *head;
	p_node = NULL, n_node = NULL;

	/* Count num of nodes*/
	while (h)
	{
		h = h->next;
		numOfNodes++;
	}

	/* If index out of range*/
	if (index < 0 || index >= numOfNodes)
		return (-1);

	h = *head; /*reset <h> position*/
	/* delete first node*/
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(h);
	}
	else
	{/*find position & del node*/
		for (pos = 0; index != pos; pos++)
			tmp = tmp->next;
		p_node = tmp->prev;
		n_node = tmp->next;
		p_node->next = n_node;
		n_node->prev = p_node;
		free(tmp);
	}

	return (1);
}
