#include "lists.h"
/**
 * dlistint_len- list number on nodes
 * @h: head pointer of list
 *
 * Return: Number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = (dlistint_t*)malloc(sizeof(dlistint_t));
	if (NewNode == NULL)
	{
		return NULL;
	}
	NewNode->n = n;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	if (*head == NULL)
	{
		*head = NewNode;
		return (*head);
	}
	(**head).prev = NewNode;
	NewNode->next = *head;
	*head = NewNode;
	return (*head);
}
