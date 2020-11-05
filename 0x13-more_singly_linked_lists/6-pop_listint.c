#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * pop_listint- function that deletes the head node
 *
 * @head: head
 *
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		num = (*head)->n;
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}

	return (num);
}
