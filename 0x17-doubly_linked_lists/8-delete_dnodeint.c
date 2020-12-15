#include "lists.h"
/**
 * delete_dnodeint_at_index- delete node at index
 * @head: head pointer of list
 * @index: index of new node
 *
 * Return: New head pointer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		if (x == index && temp->next == NULL && temp->prev == NULL)
		{
			temp = NULL;
		}
		if (x == index)
		{
			temp = temp->prev;
			temp->next = temp->next->next;
			temp->prev = temp->prev->prev;
		}
		temp = temp->next;
		x++;
	}
	return (1);
}
