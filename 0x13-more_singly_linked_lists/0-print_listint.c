#include "lists.h"

/**
 * print_listint - a function to print all element of a list
 * @h: the head to the link list
 * Return: the number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t nodes;
		nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
