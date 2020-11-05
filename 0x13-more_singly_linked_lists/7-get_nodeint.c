#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * get_nodeint_at_index- function that returns the nth node of a listint_t LL
 *
 * @head: head
 * @index: index
 *
 * Return: Nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp);
}
