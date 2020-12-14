#include "lists.h"
/**
 * insert_dnodeint_at_index- list number on nodes
 * @n: value n for new node
 * @h: head pointer of list
 * @idx: index of new node
 *
 * Return: New head pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NewNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp1 = *h;
	dlistint_t *temp2 = *h;
	unsigned int x = 0;

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = NULL;
	NewNode->prev = NULL;

	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}
	if(idx == 0)
	{
		return (NewNode);
	}
	while (x < idx)
	{
		temp1 = temp1->next;
		if (x > 0)
		{
			temp2 = temp2->next;
		}
		if (temp1 == NULL)
		{
			return (NULL);
		}
		x++;
	}
	NewNode->next = temp1;
	NewNode->prev = temp1->prev;
	temp1->prev = NewNode;
	temp2->next = NewNode;

	return (*h);
}
