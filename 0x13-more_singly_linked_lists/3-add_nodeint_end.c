#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - add new node to the end of list
 *@head: pointer to head node
 *@n: integer
 *Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *t;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = new_node;
	}
	return (new_node);
}
