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
 * print_dlistint - prints all elements
 * @h: head of node
 * Return: number of elements in node
 */
size_t print_dlistint(const dlistint_t *h){
	/* ptr to hold head var*/
	size_t numOfNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numOfNodes ++;
	}

	return (numOfNodes);
}
