#include "lists.h"

/**
 * listint_len - returns the number of element in linked list
 * @h: pointer to head node
 *
 * Return: number of elements in linked list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
		count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
