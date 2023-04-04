#include "lists.h"

/**
 * free_listint - a function to free a linked list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
	free(head);
}
