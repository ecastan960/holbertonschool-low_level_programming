#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * insert_nodeint_at_index- function that inserts a new node
 *
 * @head: head
 * @idx: index
 * @n: value of node
 *
 * Return: Nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	int c = 0

	listint_t (*temp) = (*head);
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	new->next = NULL;
	new->n = n;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		if (node == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			node++;
			c = 1;
		}
		else
		{
			temp = temp->next;
			node++;
		}

	}

	if (c == 1)
	{
		return (NULL);
	}

	return (temp);
}
