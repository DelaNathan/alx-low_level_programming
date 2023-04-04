#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: pointer to head node
 * @n: integer
 *
 * Return: address of the new element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_ptr;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	next_ptr = *head;

	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;
	next_ptr->next = new_node;
	return (new_node);
}

