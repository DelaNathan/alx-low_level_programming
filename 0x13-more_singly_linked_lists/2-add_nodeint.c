#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 *
 * @head: pointer to head node
 * @n: integer
 *
 * Return: address of the new element and NULL if it fails
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
		node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
