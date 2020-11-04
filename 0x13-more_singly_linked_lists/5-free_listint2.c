#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * free_listint2- function that frees a list
 *
 * @head: head
 *
 * Return: contador_fi
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && (*head)->next != NULL)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
