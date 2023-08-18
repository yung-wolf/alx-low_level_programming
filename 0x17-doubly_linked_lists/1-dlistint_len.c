#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * dlistint_len - get len of nodes
 * @h: head of node
 * Return: number of elements in node
 */
size_t dlistint_len(const dlistint_t *h){
	/* ptr to hold head var*/
	size_t numOfNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numOfNodes ++;
	}

	return (numOfNodes);
}
