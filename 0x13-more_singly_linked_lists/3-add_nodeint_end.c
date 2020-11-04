#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to add a node at the end
 *
 * @head: head
 * @n: number data in node
 *
 * Return: new head
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
