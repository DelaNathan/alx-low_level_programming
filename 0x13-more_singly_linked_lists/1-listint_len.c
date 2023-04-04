#include "lists.h"
#include <stdlib.h>

/**
 *listint_len - a fuction that returns number of elements in list
 *@h: points to the head of list
 *Return: element in list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *check = h;
		while (check != NULL)
	{
		count++;
		check = check->next;
	}
		return (count);
}
