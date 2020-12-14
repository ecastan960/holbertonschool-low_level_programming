#include "lists.h"
/**
 * free_dlistint- free memory of nodes of a BL
 * @head: head pointer of list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
