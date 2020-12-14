#include "lists.h"
/**
 * get_dnodeint_at_index - Return node at index
 * @head: head pointer of list
 * @index: requested node index
 *
 * Return: return node requested
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (x < index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		x++;
	}
	return (head);
}
