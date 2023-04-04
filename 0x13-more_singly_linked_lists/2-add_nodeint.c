#include "lists.h"
/**
 *add_nodeint - adds a node to the beginning of a list
 *@head: points to pointer of head of link list
 *@n: integer
 *Return: the address of element or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
		add_node->next = *head;
		*head = add_node;
		return (add_node);
}
