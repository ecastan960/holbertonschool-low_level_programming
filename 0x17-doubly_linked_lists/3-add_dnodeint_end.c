#include "lists.h"
/**
 * add_dnodeint_end- add node at the end of a DL
 * @n: value n for new node
 * @head: head pointer of list
 *
 * Return: New head pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	if (*head == NULL)
	{
		*head = NewNode;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = NewNode;
	NewNode->prev = temp;
	return (NewNode);
}
