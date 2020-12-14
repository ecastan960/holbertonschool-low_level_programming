#include "lists.h"
/**
 * free_dlistint- free memory of nodes of a BL
 * @head: head pointer of list
 *
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
		x++;
	}
	return (head);
}