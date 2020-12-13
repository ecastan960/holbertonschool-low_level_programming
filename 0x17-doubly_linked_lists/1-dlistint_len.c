#include "lists.h"
/**
 * dlistint_len- list number on nodes
 * @h: head pointer of list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t x = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		x++;
	}
	return (x);
}
