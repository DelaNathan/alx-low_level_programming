#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: head node
 * @n: integer
 * Return: the head to NULL
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	free_listint2(&(*head)->next);
	free (*head);
	*head = NULL;
}
