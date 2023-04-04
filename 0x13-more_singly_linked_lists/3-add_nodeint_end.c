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
	listint_t *new_node, *check;
		new_node = malloc(sizeof(listint_t));
	if (new_node == NULL);
	return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL);
	*head = new_node;
	else
	{
		check = *head
			while (check->next != NULL)
				check = check->next;
		check-> = new_node;
	}
}
