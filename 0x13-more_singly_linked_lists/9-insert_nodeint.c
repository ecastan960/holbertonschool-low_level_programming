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
	listint_t **temp = (listint_t **) malloc(sizeof(listint_t));

	*temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (*temp != NULL)
	{
		if (node == idx - 1)
		{
			(*temp)->n = n;
			(*temp) = (*temp)->next;
			node++;
		}
		else
		{
			(*temp) = (*temp)->next;

			node++;
		}
	}
	return (*temp);
}
