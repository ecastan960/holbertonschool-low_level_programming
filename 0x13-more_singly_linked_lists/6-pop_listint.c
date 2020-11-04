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

	if (*head == NULL)
		return (0);
	
	(*head) = (*head)->next;
	
	return (0);
}
