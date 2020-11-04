#include "lists.h"
#include <stdlib.h>

/**
 * add_node - prints a string as integer
 *
 * @head: head
 * @str: string
 *
 * Return: contador_fi
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
