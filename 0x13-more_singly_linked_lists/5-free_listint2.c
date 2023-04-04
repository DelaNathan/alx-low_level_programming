#include "lists.h"

/**
 * free_listint2 - a function that frees a list and set head to NULL
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}
