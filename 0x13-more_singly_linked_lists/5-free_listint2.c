#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
